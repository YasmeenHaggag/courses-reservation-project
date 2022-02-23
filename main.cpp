#include <iostream>
#include<fstream>
using namespace std;
     fstream inputFile;
     char path[]="data.txt";
class teacher{
    public:
     string name,exp,sub;
};
     void Tdata(teacher Teacher){
    inputFile.open(path,ios::out|ios::app);
    cout<<"endl";
     inputFile<<Teacher.name<<"\t\t"<<Teacher.exp<<"\t\t"<<Teacher.sub<<endl;
     inputFile.close();
     }
 int main(){
     cout<<"Who are you"<<endl<<
    "1.teacher?\n"<< "2.Student\n"<<"3.parent\n";
   int choose,ID=121316; cin>>choose;
          switch(choose){
   case 1:
     teacher t;

     cout<<"ur name: "; cin>>t.name;
     cout<<"ur experience: "; cin>>t.exp;
     cout<<"subject you teach:"; cin>>t.sub;
     Tdata(t);
      break;}
  /* case 2:
       cout<<"ur name:";
       cout<<"which course:";
       cout<<"ur ID is:"<<ID;
       ID++;
       int nm,co; cin>>name>>co;

    case 3:
            cout<<"ur son’s ID:";*/

    return 0;
}
