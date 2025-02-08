#include<iostream>
using namespace std;
int area( int , int );

int main()
{
    int result , a , b;
    cout<<"enter the length and breadth of the rectangle:"<<endl;
    cin >> a >> b;
    result = area(a,b);
    cout<<"area of rectangle is"<<result;
    return 0;
}

int area(int x, int y)
{
    return x*y;
}