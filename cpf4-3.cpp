#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string Enroll_No,Name,Branch;
    int Sem,Maths,Phy,Pf,Tot,ch;
    long long int Mob_no;
    float Avg,Pr;

    cout<<"**************************************************\n";
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout<<"**************************************************\n";

    cout<<"------------------MAIN MENU----------------------\n";

	M:cout<<" 1.Register New Student\n 2. Display Student Record\n 3. Enter Student Marks\n 4. Display Academic Result\n 5. Exit";
 	cout<<"\nEnter a choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
		    {
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
               goto M;
               break;
		    }

		case 2:
		{
			    cout<<"------------------------------------------\n";
                cout<<"Student Record\n";
                cout<<"------------------------------------------\n";
			cout<<"Enrollment Number"<<setw(5)<<":"<<Enroll_No<<endl;
            cout<<"Student Number"<<setw(8)<<":"<<Name<<endl;
            cout<<"Branch"<<setw(16)<<":"<<Branch<<endl;
            cout<<"Semester"<<setw(14)<<":"<<Sem<<endl;
            cout<<"Mobile Number"<<setw(9)<<":"<<Mob_no<<endl;
			goto M;
			break;
		}

		case 3:
		{
			    cout<<"------------------------------------------\n";
                cout<<"Enter Student Marks\n";
                cout<<"------------------------------------------\n";
            cout<<"Enter Mathematics Marks"<<setw(16)<<":";
            cin>>Maths;
            cout<<"Enter Physics Marks"<<setw(20)<<":";
            cin>>Phy;
            cout<<"Enter Programing Foundation Marks"<<setw(6)<<":";
            cin>>Pf;
            goto M;
			break;
		}


		case 4:
            {
		        cout<<"------------------------------------------\n";
                cout<<"Academic Result\n";
                cout<<"------------------------------------------\n";
                Tot=Maths+Phy+Pf;
                Avg=(Maths+Phy+Pf)/3;
                Pr=Avg;
              cout<<"Total Marks"<<setw(10)<<Tot<<endl;
              cout<<"Average Marks"<<setw(8)<<Avg<<endl;
              cout<<"Percentage"<<setw(11)<<Pr<<endl;
              if (Pr>=40)
            {
               cout<<"Result  :  Pass"<<endl;
            }
              else
            {
                cout<<"Result  :  Fail"<<endl;
            }

              if (Pr>=90)
            {
                cout<<"Grade  :   O"<<endl;
            }
              else if (Pr>=80)
            {
                cout<<"Grade  :   A+"<<endl;
            }
              else if (Pr>=70)
            {
                cout<<"Grade  :   A"<<endl;
            }
               else if (Pr>=60)
            {
                cout<<"Grade  :   B+"<<endl;
            }
               else if (Pr>=50)
            {
                cout<<"Grade  :   B"<<endl;
            }
               else if (Pr>=40)
            {
                 cout<<"Grade  :  C"<<endl;
            }
                else
            {
                 cout<<"Grade  :   F"<<endl;
            }

                if (Pr>=90)
            {
                 cout<<"Performance Remark  :   Outstanding"<<endl;
            }
                else if (Pr>=80)
            {
                 cout<<"Performance Remark  :  Excellent"<<endl;
            }
                else if (Pr>=70)
            {
                 cout<<"Performance Remark  :  Very Good"<<endl;
            }
                else if (Pr>=60)
            {
                  cout<<"Performance Remark  :  Good"<<endl;
            }
                else if (Pr>=50)
            {
                  cout<<"Performance Remark  :  Satisfactory"<<endl;
            }
                else if (Pr>=40)
            {
                  cout<<"Performance Remark  :  Needs Improvement"<<endl;
            }
                else
            {
                   cout<<"Performance Remark  :  Fail"<<endl;
            }
              goto M;
              break;
            }

		case 5:
		{
			exit(0);
		}
		default:
		{
			cout<<"error:invalid choice\n";
			goto M;
		}
	}
}
