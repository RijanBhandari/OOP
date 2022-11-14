
#include<iostream>
#include<iomanip>
#define pi 3.1415
namespace start{
    int r;
    void area()
    {
        std::cout<<"Area is: "<<pi*r*r<<std::endl;
        std::cout<<"Circumference is: "<<2*pi*r;

    }
}


int main()
{

    start::r;
    std::cout<<"Enter radius: ";
    std::cin>>start::r;
    start::area();
    return 0;
}
