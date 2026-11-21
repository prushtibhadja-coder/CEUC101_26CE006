#include <iostream>
#include <string>
using namespace std;

string enrollmentNumber;
string studentName;
string branch;
int semester;

int marks[5];
int totalMarks;
float percentage;
char grade;
string result;

void displayHeader()
{
	cout << "********************************************" << endl;
	cout << "   	STUDENT RECORD MANAGEMENT SYSTEM" << endl;
	cout << "********************************************" << endl;
}


void acceptStudentDetails()
{
	cout << "----------- Student Registration -----------" << endl;

	cout << "Enter Enrollment Number : ";
	cin >> enrollmentNumber;

	cin.ignore();

	cout << "Enter Student Name : ";
	getline(cin, studentName);

	cout << "Enter Branch : ";
	cin >> branch;

	cout << "Enter Semester : ";
	cin >> semester;

	cout << "Enter Marks" << endl;

	for (int i = 0; i < 5; i++)
	{
    	cout << "Subject " << i + 1 << " : ";
    	cin >> marks[i];
	}
}

void calculateAcademicResult()
{
	totalMarks = 0;

	for (int i = 0; i < 5; i++)
	{
    	totalMarks = totalMarks + marks[i];
	}

	percentage = totalMarks / 5.0;

	if (percentage >= 90)
	{
    	grade = 'A';
	}
	else if (percentage >= 80)
	{
    	grade = 'A';
	}
	else if (percentage >= 70)
	{
    	grade = 'B';
	}
	else if (percentage >= 60)
	{
    	grade = 'C';
	}
	else if (percentage >= 50)
	{
    	grade = 'D';
	}
	else
	{
    	grade = 'F';
	}

	if (percentage >= 40)
	{
    	result = "PASS";
	}
	else
	{
    	result = "FAIL";
	}
}

void displayStudentReport()
{
	cout << endl;
	cout << "--------------------------------------------" << endl;
	cout << "          	Academic Report" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Enrollment Number : " << enrollmentNumber << endl;
	cout << "Student Name : " << studentName << endl;
	cout << "Branch : " << branch << endl;
	cout << "Semester : " << semester << endl;

	cout << "Total Marks : " << totalMarks << endl;
	cout << "Percentage : " << percentage << "%" << endl;
	cout << "Grade : " << grade << endl;
	cout << "Result : " << result << endl;

	cout << "-----------------------------------------------------------" << endl;
	cout << "Program Executed Successfully Using User-defined Functions." << endl;
	cout << "------------------------------------------------------------" << endl;
}

int main()
{
	displayHeader();

	acceptStudentDetails();

	calculateAcademicResult();

	displayStudentReport();

	return 0;
}
