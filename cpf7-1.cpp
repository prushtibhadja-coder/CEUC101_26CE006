#include<iostream>
#include<string>
using namespace std;
int main()
{

     string enrollmentNumber;
     string studentName;
     string branch;

     string firstName;
     string lastName;

     string referenceID;
     string keyword;

     int spacePosition;
     cout<<"*******************************"<<endl;
     cout<<"   STUDENT RECORD MANAGEMENT SYSTEM  "<<endl;
     cout<<"*******************************"<<endl;

     cout<<"\nenter enrollment number :";
     cin>>enrollmentNumber;
     cin.ignore();

     cout<<"enter student name  :";
    getline(cin,studentName);


     cout<<"enter branch :";
     getline(cin,branch);

     cout<<"----------------------------------"<<endl;

     referenceID = studentName + "-" +enrollmentNumber;

     cout<<"\n student reference\n"<<endl;
     cout<<referenceID<<endl;

     cout<<"-----------------------------------------"<<endl;

     spacePosition = studentName.find(' ');

     if(spacePosition != string::npos)


     {

        firstName = studentName.substr(0,spacePosition);

        lastName = studentName.substr(spacePosition + 1);
     }
     else
     {
        firstName = studentName;
        lastName = " ";
     }

     cout<<"\n First Name \n"<<endl;
     cout<<firstName<<endl;

     cout<<"\nLast Name \n"<<endl;
     cout<<lastName<<endl;

     cout<<"-----------------------------------"<<endl;

     cout<<"\nEnter keyword :";
     getline(cin,keyword);

     if(studentName.find(keyword)!= string::npos)
     {
        cout<<"\n keyword found"<<endl;

     }
     else
     {
        cout<<"\n keyword not found"<<endl;
     }
     cout<<"------------------------------"<<endl;


     cout<<"\nstudent report \n"<<endl;

     cout<<"enrollment number :"<<enrollmentNumber<<endl;
     cout<<"student name :"<<studentName<<endl;
     cout<<"branch :"<<branch<<endl;



    return 0;

}
