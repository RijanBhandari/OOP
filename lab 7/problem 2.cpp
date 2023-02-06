#include<iostream>
using namespace std;
class base{
public:
    void display()
    {
        cout<<"Base class"<<endl;
    }

};

class derived:public base
{
public:
    void display()
    {
        cout<<"Derive class"<<endl;
    }
};


int main()
{
    base *bptr,objB;
    derived objD;
    bptr = &objB;
    bptr->display();
    bptr = new derived();
    bptr->display();

}
