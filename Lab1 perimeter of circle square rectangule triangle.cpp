#include<iostream>
#include<cmath>
#define pi 3.1415
using namespace std;

float peri(float r)
{
    return(2*pi*r);
}

float peri(int l)
{
    return(4*l);
}

float peri(float l, float b)
{
    return(2*(l*b));
}

float peri(float a, float b,float c)
{
    return(a+b+c);
}

int main()
{
    cout<<"Perimeter of circle is: "<<peri(7.2f)<<endl;
    cout<<"Perimeter of square is: "<<peri(4)<<endl;
    cout<<"Perimeter of rectangle is: "<<peri(4,5)<<endl;
    cout<<"Perimeter of triangle is: "<<peri(1,2,3)<<endl;
return 0;
}
