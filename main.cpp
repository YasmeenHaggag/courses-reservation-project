#include <iostream>
#include <fstream>
#include  <string.h>
using namespace std;
 class teacher{
     public:
void  Tdata()
{
    char name [25];
    char sub[25];
    char exp [25];
    fstream data;
    data.open("data.txt", ios::app);
    cin.ignore();
    cout<<" \n name : ";
    cin.getline(name,25);
    cout<<" \n sub : ";
    cin.getline(sub,25);
    cout<<" \n exp : ";
    cin.getline(exp,25);
    data<< name<<'|'<<sub<<'|'<<exp<<'\n';
    data.close();
}};
 class student{
     public:
void showData()
{
   fstream data;
    data.open("data.txt",ios::in);
    char name [25];
    char sub[25];
    char exp[25];
    char a[25];
    cout<<" \n  subject you search for : ";
    cin.ignore();
    cin.getline(a,25);
    int l=0;
    cout<< " \n\t name \t sub \t exp \n";
    while(!data.eof())
    {
        data.getline(name,25,'|');
        data.getline(sub,25,'|');
        data.getline(exp,25);
        if(strcmp(sub, a)==0)
        {cout<< "\n\t"<< name << "\t"<<sub<<"\t"<<exp<<endl;
            l=1;}
      }
    if(l==0)
    {
        cout<<" \n not found";
    }
    data.close();
}};

int main()
{
        cout << "Who are u?\n"<<"1.teacher\n"<<"2.student\n"<<"3.parent\n";
        int option;
        cin>>option;
        switch (option)
        {
        case 1 :
            teacher Teacher;
            Teacher.Tdata();
            break;
        case 2 :
            student Student;
            Student.showData();
            break;

        default :
            cout << " \n choose a correct number";
    }
    return 0;
}
