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
    fp1.open("record.txt",ios::app);
    if (fp1.is_open()){
    fp1<<endl<<"Name: "<<name<<"\tROll no: "<<roll;
    }
    else{
        cout<< "Unexpected Error";
    }
    fp1.close();
    cout<<"Written to file";
    return 0;
}
