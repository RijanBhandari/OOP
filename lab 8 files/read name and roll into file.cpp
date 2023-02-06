// program to read name and roll from file
#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
    char name[50];
    int roll;
    fstream fp1;
    fp1.open("record.txt",ios::in);
    if (fp1.is_open()){
    fp1>>name>>roll;
    }
    else{
        cout<< "Unexpected Error";
    }
    fp1.close();
    cout<<name<<"\t"<<roll;
    return 0;
}

