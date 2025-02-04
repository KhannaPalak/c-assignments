#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_FLIGHTS 5
#define MAX_PASSENGERS 20

// Structure to store passenger details
typedef struct 
{
    char name[50];
    int age;
    char flightNumber[10];
} Passenger;

// Structure to store flight details
typedef struct 
{
    char flightNumber[10];
    char destination[30];
    int seatsAvailable;
} Flight;

// Global variables
Passenger passengers[MAX_PASSENGERS];
Flight flights[MAX_FLIGHTS];
int passengerCount = 0;

// Function prototypes
void displayFlights();
void bookFlight();
void viewPassengers();
void cancelReservation();

int main() 
{
    // Sample flight data
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

    int choice;
    while (1) {
        printf("\n====== Flight Reservation System ======\n");
        printf("1. Display Available Flights\n");
        printf("2. Book a Flight\n");
        printf("3. View Passenger List\n");
        printf("4. Cancel Reservation\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                displayFlights();
                break;
            case 2:
                bookFlight();
                break;
            case 3:
                viewPassengers();
                break;
            case 4:
                cancelReservation();
                break;
            case 5:
                printf("Thank you for using the Flight Reservation System!\n");
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Function to display available flights
void displayFlights() 
{
    printf("\nAvailable Flights:\n");
    printf("%-10s %-15s %-15s\n", "Flight No", "Destination", "Seats Available");
    for (int i = 0; i < MAX_FLIGHTS; i++) 
    {
        printf("%-10s %-15s %-15d\n", flights[i].flightNumber, flights[i].destination, flights[i].seatsAvailable);
    }
}

// Function to book a flight
void bookFlight() 
{
    if (passengerCount >= MAX_PASSENGERS) 
    {
        printf("\nNo more passengers can be booked.\n");
        return;
    }

    char flightNo[10];
    printf("\nEnter the Flight Number to book: ");
    scanf("%s", flightNo);

    int found = 0;
    for (int i = 0; i < MAX_FLIGHTS; i++) 
    {
        if (strcmp(flights[i].flightNumber, flightNo) == 0) 
        {
            found = 1;
            if (flights[i].seatsAvailable > 0) 
            {
                printf("Enter passenger name: ");
                scanf("%s", passengers[passengerCount].name);
                printf("Enter passenger age: ");
                scanf("%d", &passengers[passengerCount].age);
                strcpy(passengers[passengerCount].flightNumber, flightNo);

                flights[i].seatsAvailable--;
                passengerCount++;
                printf("Flight booked successfully!\n");
            } 
            else 
            {
                printf("Sorry, no seats available on this flight.\n");
            }
            break;
        }
    }

    if (!found) 
    {
        printf("Invalid Flight Number.\n");
    }
}

// Function to view passenger details
void viewPassengers() 
{
    if (passengerCount == 0) 
    {
        printf("\nNo passengers have been booked yet.\n");
        return;
    }

    printf("\nPassenger List:\n");
    printf("%-20s %-5s %-10s\n", "Name", "Age", "Flight No");
    for (int i = 0; i < passengerCount; i++) 
    {
        printf("%-20s %-5d %-10s\n", passengers[i].name, passengers[i].age, passengers[i].flightNumber);
    }
}

// Function to cancel a reservation
void cancelReservation() 
{
    if (passengerCount == 0) 
    {
        printf("\nNo reservations to cancel.\n");
        return;
    }

    char name[50];
    printf("\nEnter the passenger name to cancel reservation: ");
    scanf("%s", name);

    int found = 0;
    for (int i = 0; i < passengerCount; i++) 
    {
        if (strcmp(passengers[i].name, name) == 0) 
        {
            found = 1;
            // Increase seat availability for the corresponding flight
            for (int j = 0; j < MAX_FLIGHTS; j++) 
            {
                if (strcmp(flights[j].flightNumber, passengers[i].flightNumber) == 0) 
                {
                    flights[j].seatsAvailable++;
                    break;
                }
            }
            // Remove the passenger
            for (int k = i; k < passengerCount - 1; k++) 
            {
                passengers[k] = passengers[k + 1];
            }
            passengerCount--;
            printf("Reservation canceled successfully.\n");
            break;
        }
    }

    if (!found) 
    {
        printf("Passenger not found.\n");
    }
}
