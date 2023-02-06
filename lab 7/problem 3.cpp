#include<iostream>
using namespace std;

class shape{
protected:
    int a,b,c,length,breadth;
public:
    void setside(int x,int y,int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void setside(int x,int y)
    {
        length = x;
        breadth = y;
    }
    virtual int getperi()=0;
};

class rectangle:public shape
{
public:
    int getperi()
    {
        return 2*(length+breadth);
    }
};

class triangle:public shape{
public:
    int getperi()
    {
        return ((a+b+c)/2);
    }

};

int main()
{
    rectangle rect;
    triangle tri;
    rect.setside(1,2);
    tri.setside(1,2,3);
    cout<<"Perimeter of triangle= "<<tri.getperi()<<endl;
    cout<<"Perimeter of rectangle= "<<rect.getperi()<<endl;
}
