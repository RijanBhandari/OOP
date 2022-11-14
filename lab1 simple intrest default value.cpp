#include<iostream>

using namespace std;

inline float interest(float p =1000, int t= 5, float r=2)
{

return (p*t*r)/100;

}

int main()

{



cout<<"Enter Principal, Time and Rate : ";

cout<<"3 input Interest: "<<interest(100,56,4)<<endl;
cout<<"2 input Interest: "<<interest(1100,5)<<endl;
cout<<"1 input Interest: "<<interest(1000)<<endl;
//cout<<"last input only Interest: "<<interest(,,5)<<endl;
return 0;

}
