#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

class student{
    char name[20];
    int roll;
    char address[20];
public:

    void input(){
        cout<<"Enter name and Roll no and address: ";
        cin>>name>>roll>>address;

    }
};

int main()
{
    fstream fp1;
    student s;
    fp1.open("Student",ios::out|ios::binary);
    fp1<<"\nStudent Records:\n";
    s.input();
    fp1.write((char *)&s,sizeof(s));
    fp1.close();
    cout<<"Data written to file."<<endl;
    return 0;
}
