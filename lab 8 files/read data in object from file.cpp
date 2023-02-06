#include<iostream>
#include<fstream>
using namespace std;

class Student{
    char name[20];
    int roll;
    int address[20];
public:
void display()
{
    cout<<name;
    cout<<roll;
    cout<<address;
}
};
int main()
{
    Student s;
    fstream fp1;
    fp1.open("Student",ios::in|ios::binary);
    fp1.read((char*)&s,sizeof(s));
    s.display();
    fp1.close();
    return 0;
}
