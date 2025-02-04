#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
     
    int a[n];
    int index;

    cout << "Enter " << n << " elements: ";
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        min = a[0];
    }
        
    for(j = i+1 ; j<5 ; j++)
    {
        if ( min > a[j])
        {
            min = a[j];
            index = j;
        }
    }


    temp = a[i];
    a[i] = a[index];
    a[index] = temp;

}


