
#include<iostream>
#include<iomanip>

namespace start{
    int num;
    void intput()
    {
        std::cout<<"Enter num: ";
        std::cin>>num;
    }
}


int main()
{
    int a;
    std::cout<<"Enter Any Number: ";
    std::cin>>a;
    std::cout<<"The number is"<<std::setw(8)<<a<<std::endl;
    start::intput();
    std::cout<<"The value from namespace start is"<<start::num;
    return 0;
}
