#include <iostream>
#include<iomanip>
#include <string>
using namespace std;

int globalValue = 100;

//Structure fo student details
struct Student
{
    int rollNo;
    string Name;
};

//Structure for academic information
struct Academic
{
    string Br;
    int Sem;
    float Pr;
};

//Structure for contact information
struct Contact
{
    string mobile;
    string email;
};

//Function without parameters and without return value
void hello()
{
    cout <<"Hello! Welcome to C++ Functions." <<endl;
}

//Function without parameters and with return value
int fetchnumber()
{
    return 10;
}

//Function with parameters and without return value
void addition(int a, int b)
{
    cout <<"Addition" <<setw(12) <<":" <<a+b <<endl;
}

//Function with parameters and with return value
int multiply(int a, int b)
{
    return a*b;
}

//Call by Value
void changeValue(int x)
{
    x=50;
    cout <<"Call by Value" <<setw(15) <<":" <<x <<endl;
}

//Call by Reference
void changeReference(int & x)
{
    x=50;
    cout <<"Inside Call by Reference" <<setw(4) <<":" <<x <<endl;
}

//Local and Global Variables
void showScope()
{
    int localValue=20;

    cout <<"Inside Function" <<endl;
    cout <<"Local Value" <<setw(20) <<":" <<localValue <<endl;
    cout <<"Global Value" <<setw(19) <<":" <<globalValue <<endl;
}

//Display only student details
void displayStudent(Student s)
{
    cout <<"Student Name" <<setw(5) <<":" <<s.Name <<endl;
    cout <<"Roll Number" <<setw(6) <<":" <<s.rollNo <<endl;
}

//Display student details with academic information
void displayStudent(Student s, Academic a)
{
    cout <<"Student Name" <<setw(5) <<":" <<s.Name <<endl;
    cout <<"Roll Number" <<setw(6) <<":" <<s.rollNo <<endl;
    cout <<"Branch" <<setw(11) <<":" <<a.Br <<endl;
    cout <<"Semester" <<setw(9) <<":" <<a.Sem <<endl;
    cout <<"Percentage" <<setw(7) <<":" <<a.Pr <<endl;
}

//Display student details with academic and contact information
void displayStudent(Student s, Academic a, Contact c)
{
    cout <<"Student Name" <<setw(5) <<":" <<s.Name <<endl;
    cout <<"Roll Number" <<setw(6) <<":" <<s.rollNo <<endl;
    cout <<"Branch" <<setw(11) <<":" <<a.Br <<endl;
    cout <<"Semester" <<setw(9) <<":" <<a.Sem <<endl;
    cout <<"Percentage" <<setw(7) <<":" <<a.Pr <<endl;
    cout <<"Mobile" <<setw(11) <<":" <<c.mobile <<endl;
    cout <<"Email" <<setw(12) <<":" <<c.email <<endl;
}

int main()
{
    cout <<"--------------------------------------------" <<endl;
    cout <<"Part A : Function Design" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<" " <<endl;

    hello();

    cout <<"Returned Number" <<setw(5) <<":" <<fetchnumber() <<endl;

    addition(10, 20);

    cout <<"Multiplication" <<setw(6) <<":" <<multiply(5,4) <<endl;
    cout <<" " <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<"Part B: Parameter Passing"<<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<" " <<endl;

    int num = 10;

    cout <<"Original Value" <<setw(14) <<":" <<num <<endl;

    changeValue(num);
    cout <<"After Call by Value" <<setw(9) <<":" <<num <<endl;

    changeReference(num);
    cout <<"After Call by Reference" <<setw(5) <<":" <<num <<endl;
    cout <<" " <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<"Part C : Scope and Visibility" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<" " <<endl;

    showScope();

    cout <<"Outside Function Global Value" <<setw(2) <<":" <<globalValue <<endl;
    cout <<" " <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<"Part D : Function Overloading" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<" " <<endl;

    Student s={006,"Prushti"};

    Academic a={"Computer",1,85.5};

    Contact c={"92XXXXXXXX","prushtibhadja@gmail.com"};

    displayStudent(s);
    cout <<" " <<endl;

    displayStudent(s,a);
    cout <<" " <<endl;

    displayStudent(s,a,c);
    cout <<" " <<endl;

    return 0;
}
