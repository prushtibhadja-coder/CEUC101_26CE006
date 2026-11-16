#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string Enroll_No,Name,Branch,ans;
    int Sem,ch;
    long long int Mob_no;

    cout<<"**************************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"**************************************************\n";

    cout<<"------------------MAIN MENU----------------------\n";

	M:cout<<" 1. Register New Student\n 2. Exit";
 	cout<<"\nEnter a choice:";
	cin>>ch;

	if  (ch==1)
	{
	    ans="Y";

	    while(ans=="Y" || ans=="y")
		    {
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
                cout<<"Student Information\n";
                cout<<"------------------------------------------\n";
			    cout<<"Enrollment Number"<<setw(5)<<":"<<Enroll_No<<endl;
                cout<<"Student Number"<<setw(8)<<":"<<Name<<endl;
                cout<<"Branch"<<setw(16)<<":"<<Branch<<endl;
                cout<<"Semester"<<setw(14)<<":"<<Sem<<endl;
                cout<<"Mobile Number"<<setw(9)<<":"<<Mob_no<<endl;



		cout<<"Student Registered Successfully"<<endl;

		cout<<"Register Another Student?(Y/N):";
		cin>>ans;

		    }

		    cout<<"Returning to Main Menu..."<<endl;
	}

		else if (ch == 2)
        {
            cout<<"Exiting program..."<<endl;
        }
		else
		{
			cout<<"error:invalid choice\n";
		}

	return 0;
}
