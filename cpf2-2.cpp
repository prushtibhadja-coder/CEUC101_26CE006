#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
    string En_no,Stu_name,Br;
    short int Sem;
    long long int Mob_no;

     cout<<"***********************************************"<<endl;
     cout<<"     STUDENT RECORD MANAGEMENT SYSTEM          "<<endl;
     cout<<"***********************************************"<<endl;
     cout<<"Software version  : 1.1"<<endl;
     cout<<"Institute         : Charusat University"<<endl;
     cout<<"Academic Year     : 2026-27"<<endl;

     cout<<"------------------------------------------"<<endl;
     cout<<"     Student Ragistration "<<endl;
     cout<<"------------------------------------------"<<endl;
     cout<<" Enter Enrollment Number"<<setw(5)<<":";
     cin>>En_no;
     cout<<" Enter Student Name"<<setw(10)<<":";
     cin>>Stu_name;
     cout<<" Enter Branch"<<setw(16)<<":";
     cin>>Br;
     cout<<" Enter Semester"<<setw(14)<<":";
     cin>>Sem;
     cout<<" Enter Mobile Number"<<setw(9)<<":";
     cin>>Mob_no;

    cout<<"------------------------------------------\n";
    cout<<"Student Information\n";
    cout<<"------------------------------------------\n";
    cout<<"Enrollment Number"<<setw(5)<<":"<<En_no<<endl;
    cout<<"Student Number"<<setw(8)<<":"<<Stu_name<<endl;
    cout<<"Branch"<<setw(16)<<":"<<Br<<endl;
    cout<<"Semester"<<setw(14)<<":"<<Sem<<endl;
    cout<<"Mobile Number"<<setw(9)<<":"<<Mob_no<<endl;

     return 0;

}
