//Q12. Write a program that solves a quadratic equation (ax^2+bx+c=0)using conditional statements to handle all possible cases(real and distinct roots,real and equal roots, complex roots).

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a , b , c ;
    cout<<"enter the value of a :";
    cin >> a ;
    cout << endl;
    cout << "enter the value of b:";
    cin >> b ;
    cout << endl;
    cout << "enter the value of c:";
    cin >> c;
    cout << endl;
    
    int y, D;
    y = pow(b,2);
    D = y - (4*a*c);
    

    if(D>0)
    {
        cout << "real and distinct roots !";
    }

    if (D == 0)
    {
        cout << "equal roots !";
    }

    if (D < 0)
    {
        cout << "complex roots !";
    }

    return 0;
}