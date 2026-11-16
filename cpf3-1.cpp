#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string Enroll_No,Name,Branch;
    int Sem,Maths,Phy,Pf,Tot;
    long long int Mob_no;
    float Avg,Pr;
    cout<<"**************************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"**************************************************\n";
    cout<<"SOftware Version : 1.2\n";
    cout<<"------------------------------------------\n";
    cout<<"STUDENT REGISTRATION\n";
    cout<<"------------------------------------------\n";
    cout<<"Enter Enrollment Number"<<setw(5)<<":";
    cin>>Enroll_No;
    cout<<"Enter Student Name"<<setw(10)<<":";
    cin>>Name;
    cout<<"Enter Branch"<<setw(16)<<":";
    cin>>Branch;
    cout<<"Enter Semester"<<setw(14)<<":";
    cin>>Sem;
    cout<<"Enter Mobile Number"<<setw(9)<<":";
    cin>>Mob_no;
    cout<<"------------------------------------------\n";
    cout<<"Acedamic Information\n";
    cout<<"------------------------------------------\n";
    cout<<"Enter Mathematics Marks"<<setw(16)<<":";
    cin>>Maths;
    cout<<"Enter Physics Marks"<<setw(20)<<":";
    cin>>Phy;
    cout<<"Enter Programing Foundation Marks"<<setw(6)<<":";
    cin>>Pf;
    cout<<"------------------------------------------\n";
    cout<<"Academic Summary\n";
    cout<<"------------------------------------------\n";
    Tot=Maths+Phy+Pf;
    Avg=(Maths+Phy+Pf)/3;
    cout<<"Total Marks"<<setw(10)<<Tot<<endl;
    cout<<"Average Marks"<<setw(8)<<Avg<<endl;
    cout<<"------------------------------------------\n";
    cout<<"Student Information\n";
    cout<<"------------------------------------------\n";
    cout<<"Enrollment Number"<<setw(5)<<":"<<Enroll_No<<endl;
    cout<<"Student Number"<<setw(8)<<":"<<Name<<endl;
    cout<<"Branch"<<setw(16)<<":"<<Branch<<endl;
    cout<<"Semester"<<setw(14)<<":"<<Sem<<endl;
    cout<<"Mobile Number"<<setw(9)<<":"<<Mob_no<<endl;
    return 0;
}
