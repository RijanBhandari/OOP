#include<iostream>
#define pi 3.1415
using namespace std;

inline float area(float r)
{
    return(pi*r*r);
}

inline float circum(float r)
{
    return(2*pi*r);
}


int main()
{
    float r;
    cout<<"The area is: "<<area(r);
    cout<<"The circum is: "<<circum(r);
    return 0;
}
