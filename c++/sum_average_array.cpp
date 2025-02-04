#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
     
    int arr[n];

    cout << "Enter " << n << " elements: ";
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout<< "sum of array:"<< sum<< endl;


    float average = 0;
    average = sum / n;

    cout<< "average of array:"<< average << endl;

    return 0;


}