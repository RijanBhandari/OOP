#include<iostream>

using namespace std;

inline float interest(float p, int t, float r)
{

return (p*t*r)/100;

}

int main()

{

float P, T, R;

cout<<"Enter Principal, Time and Rate : ";

cin>>P>>T>>R;

cout<<"Interest: "<<interest(P,T,R)<<endl;

return 0;

}
