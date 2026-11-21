#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,i,pos,del_pos;
    string Er_No[10];
    string Name[10];
    string Gr[10];
    float Pr[10];
    string search_Er;
    bool found=false;

    cout <<"********************************************" <<endl;
    cout <<"STUDENT RECORD MANAGEMENT SYSTEM" <<endl;
    cout <<"********************************************" <<endl;

    cout <<"Enter Number of Students" <<setw(5) <<":";
    cin >>n;
    cout <<endl;

    cout <<"Enter Student Details" <<endl;
    cout <<endl;

    for(i=0; i<n; i++)
    {
        cout <<"Enrollment Number" <<setw(7) <<":";
        cin >>Er_No[i];
        cin.ignore();

        cout <<"Student Name" <<setw(12) <<":";
        getline(cin,Name[i]);

        cout <<"Percentage" <<setw(14) <<":";
        cin >>Pr[i];

        cout <<"Grade" <<setw(19) <<":";
        cin >>Gr[i];

        cout <<endl;
    }

    cout <<"--------------------------------------------" <<endl;

    cout <<"Enrollment Number" <<setw(15) <<"Student Name" <<setw(15) <<"Percentage" <<setw(12) <<"Grade";
    cout <<endl;

    for(i=0; i<n; i++)
    {
        cout <<Er_No[i] <<setw(30) <<Name[i] <<setw(12) <<Pr[i] <<setw(12) <<Gr[i];
        cout <<endl;
    }

    cout <<"--------------------------------------------" <<endl;

    cout <<"Current Student Record" <<endl;
    cout <<endl;

    for (i=0; i<n; i++)
    {
        cout <<Er_No[i] <<setw(25) <<Name[i] <<setw(16) <<Pr[i];
        cout <<endl;
    }

    cout <<"--------------------------------------------" <<endl;

    cout <<"Insert New Student" <<endl;
    cout <<endl;

    cout <<"Enter Position :";
    cin>>pos;
    cout <<endl;

    for(i=n; i>=pos; i--)
    {
        Er_No[i]=Er_No[i-1];
        Name[i]=Name[i-1];
        Pr[i]=Pr[i-1];
        Gr[i]=Gr[i-1];
    }

    cout <<"Enter Enrollment Number" <<setw(7) <<":";
    cin >>Er_No[pos-1];
    cin.ignore();

    cout <<"Enter Student Name" <<setw(12) <<":";
    getline(cin,Name[pos-1]);

    cout <<"Enter Percentage" <<setw(14) <<":";
    cin >>Pr[pos-1];

    cout <<"Enter Grade" <<setw(19) <<":";
    cin >>Gr[pos-1];

    n++;
    cout <<endl;
    cout <<"Record Inserted Successfully." <<endl;

    cout <<"--------------------------------------------" <<endl;

    cout <<"Updated Student Record" <<endl;
    cout <<endl;

    for(i=0; i<n; i++)
    {
        cout <<Er_No[i] <<setw(15) <<Name[i] <<setw(10) <<Pr[i];
        cout <<endl;
    }

    cout <<"--------------------------------------------" <<endl;

    cout <<"Updated Student Record" <<endl;
    cout <<endl;

    cout <<"Enter Enrollment Number :";
    cin >>search_Er;

    for(i=0; i<n; i++)
    {
        if(search_Er==Er_No[i])
        {
           cout <<"Enter New Percentage : ";
           cin >>Pr[i];

           cout <<"Enter New Grade : ";
           cin >>Gr[i];
           found = true;
        }
    }

    if(!found)
    {
        cout <<"Student Record not available." <<endl;
    }
    cout <<endl;
    cout <<"Student Record Updated Successfully." <<endl;

    cout <<"--------------------------------------------" <<endl;

    cout <<"Delete Student Record" <<endl;
    cout <<endl;

    cout <<"Enter Position :";
    cin >>del_pos;
    cout <<endl;

    for(i=del_pos-1; i<n-1; i++)
    {
        Er_No[i] = Er_No[i+1];
        Name[i] = Name[i+1];
        Pr[i] = Pr[i+1];
        Gr[i] = Gr[i+1];
    }
    n--;
    cout <<"Record Deleted Successfully." <<endl;
    cout <<endl;

    cout <<"--------------------------------------------" <<endl;
    cout <<"Final Student Record" <<endl;
    cout <<endl;

    for(i=0; i<n; i++)
    {
        cout <<Er_No[i] <<setw(15) <<Name[i] <<setw(12) <<Pr[i] <<setw(12) <<Gr[i];
        cout <<endl;
    }

    return 0;
}
