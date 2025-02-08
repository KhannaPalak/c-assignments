// #include<iostream>
// using namespace std;

// int maxNumber(int,int);

// int main()
// {
//     int x,y;
//     cout<<"enter the value of first number:";
//     cin>>x;
//     cout<<"enter the value of second number:";
//     cin>>y;
//     if(x>y)
//     {
//         cout<<"maximum number is :"<< x;
//     }

//     if(x<y)
//     {
//         cout<<"maximum number is :"<< y;
//     }

//     return 0;

// }

//method 2

#include<iostream>
using namespace std;

int maxNumber(int num1 ,int num2)
{
    if(num1>num2)
    {
        cout<<num1<<"is greatest";
    }

    else
    {
        cout<<num2<<"is greatest !";
    }
}

int main()
{
    int x , y;
    cout<<"enter the value of first number:";
    cin>>x;
    cout<<"enter the value of second number:";
    cin>>y;
    int a = maxNumber(x,y);
    return a;
}


