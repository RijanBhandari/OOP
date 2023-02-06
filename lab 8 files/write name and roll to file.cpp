// Program to read name and roll no and write it into the file.
#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
    char name[50];
    int roll;
    cout<<"Give name: ";
    cin.getline(name,50);
    cout<<endl<<"Give roll no: ";
    //cin.ignore();
    cin>>roll;
    fstream fp1;
    fp1.open("record.txt",ios::out);
    if (fp1.is_open()){
    fp1<<name<<"\t"<<roll;
    }
    else{
        cout<< "Unexpected Error";
    }
    fp1.close();
    cout<<"Written to file";
    return 0;
}
