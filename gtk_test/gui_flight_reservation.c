#include <gtk/gtk.h>
#include <string.h>

#define MAX_FLIGHTS 5
#define MAX_PASSENGERS 20

// Structure to store passenger details
typedef struct {
    char name[50];
    int age;
    char flightNumber[10];
} Passenger;

// Structure to store flight details
typedef struct {
    char flightNumber[10];
    char destination[30];
    int seatsAvailable;
} Flight;

// Global variables
Passenger passengers[MAX_PASSENGERS];
Flight flights[MAX_FLIGHTS];
int passengerCount = 0;

// GTK Widgets
GtkWidget *window;
GtkWidget *grid;
GtkWidget *output_label;

// Function prototypes
void display_flights(GtkWidget *widget, gpointer data);
void book_flight(GtkWidget *widget, gpointer data);
void view_passengers(GtkWidget *widget, gpointer data);
void cancel_reservation(GtkWidget *widget, gpointer data);

// Helper function to refresh output label
void set_output(const char *message) {
    gtk_label_set_text(GTK_LABEL(output_label), message);
}

int main(int argc, char **argv) {
    // Initialize flight data
    strcpy(flights[0].flightNumber, "FL001");
    strcpy(flights[0].destination, "New York");
    flights[0].seatsAvailable = 10;

    strcpy(flights[1].flightNumber, "FL002");
    strcpy(flights[1].destination, "London");
    flights[1].seatsAvailable = 8;

    strcpy(flights[2].flightNumber, "FL003");
    strcpy(flights[2].destination, "Paris");
    flights[2].seatsAvailable = 12;

    strcpy(flights[3].flightNumber, "FL004");
    strcpy(flights[3].destination, "Dubai");
    flights[3].seatsAvailable = 15;

    strcpy(flights[4].flightNumber, "FL005");
    strcpy(flights[4].destination, "Tokyo");
    flights[4].seatsAvailable = 5;

    // Initialize GTK
    gtk_init(&argc, &argv);

    // Create main window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Flight Reservation System");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 300);
    gtk_window_set_resizable(GTK_WINDOW(window), FALSE);

    // Create grid layout
    grid = gtk_grid_new();
    gtk_container_add(GTK_CONTAINER(window), grid);

    // Add buttons
    GtkWidget *display_button = gtk_button_new_with_label("Display Flights");
    GtkWidget *book_button = gtk_button_new_with_label("Book Flight");
    GtkWidget *view_button = gtk_button_new_with_label("View Passengers");
    GtkWidget *cancel_button = gtk_button_new_with_label("Cancel Reservation");

    output_label = gtk_label_new("Welcome to Flight Reservation System!");

    // Attach buttons to grid
    gtk_grid_attach(GTK_GRID(grid), display_button, 0, 0, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), book_button, 0, 1, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), view_button, 0, 2, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), cancel_button, 0, 3, 1, 1);
    gtk_grid_attach(GTK_GRID(grid), output_label, 0, 4, 1, 1);

    // Connect signals
    g_signal_connect(display_button, "clicked", G_CALLBACK(display_flights), NULL);
    g_signal_connect(book_button, "clicked", G_CALLBACK(book_flight), NULL);
    g_signal_connect(view_button, "clicked", G_CALLBACK(view_passengers), NULL);
    g_signal_connect(cancel_button, "clicked", G_CALLBACK(cancel_reservation), NULL);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // Show everything
    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}

void display_flights(GtkWidget *widget, gpointer data) {
    char output[500] = "Available Flights:\n";
    for (int i = 0; i < MAX_FLIGHTS; i++) {
        char buffer[100];
        sprintf(buffer, "Flight: %s, Destination: %s, Seats: %d\n",
                flights[i].flightNumber, flights[i].destination, flights[i].seatsAvailable);
        strcat(output, buffer);
    }
    set_output(output);
}

void book_flight(GtkWidget *widget, gpointer data) {
    char flightNo[10], name[50];
    int age;

    // Simulating input dialog
    printf("Enter Flight Number: ");
    scanf("%s", flightNo);
    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Age: ");
    scanf("%d", &age);

    for (int i = 0; i < MAX_FLIGHTS; i++) {
        if (strcmp(flights[i].flightNumber, flightNo) == 0 && flights[i].seatsAvailable > 0) {
            strcpy(passengers[passengerCount].name, name);
            passengers[passengerCount].age = age;
            strcpy(passengers[passengerCount].flightNumber, flightNo);
            flights[i].seatsAvailable--;
            passengerCount++;
            set_output("Flight booked successfully!");
            return;
        }
    }
    set_output("Failed to book flight. Invalid flight number or no seats available.");
}

void view_passengers(GtkWidget *widget, gpointer data) {
    if (passengerCount == 0) {
        set_output("No passengers booked yet.");
        return;
    }

    char output[500] = "Passenger List:\n";
    for (int i = 0; i < passengerCount; i++) {
        char buffer[100];
        sprintf(buffer, "Name: %s, Age: %d, Flight: %s\n",
                passengers[i].name, passengers[i].age, passengers[i].flightNumber);
        strcat(output, buffer);
    }
    set_output(output);
}

void cancel_reservation(GtkWidget *widget, gpointer data) {
    char name[50];
    printf("Enter Passenger Name to Cancel: ");
    scanf("%s", name);

    for (int i = 0; i < passengerCount; i++) {
        if (strcmp(passengers[i].name, name) == 0) {
            for (int j = 0; j < MAX_FLIGHTS; j++) {
                if (strcmp(flights[j].flightNumber, passengers[i].flightNumber) == 0) {
                    flights[j].seatsAvailable++;
                    break;
                }
            }
            for (int k = i; k < passengerCount - 1; k++) {
                passengers[k] = passengers[k + 1];
            }
            passengerCount--;
            set_output("Reservation canceled successfully!");
            return;
        }
    }
    set_output("Passenger not found.");
}
