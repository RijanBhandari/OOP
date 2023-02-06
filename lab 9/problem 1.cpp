#include<iostream>
using namespace std;
template<class T>
void add(T a,T b)
{
    if (a<b){
        cout<<"Smallest is "<<a<<endl;
    }
    else
    {
        cout<<"Smallest is "<<b<<endl;
    }
}



int main()
{
    add(5,4);
    add(5.5,4.5);
    add('a','b');
}
