#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Structure for Academic Information
struct Academic
{
    int semester;
    float percentage;
    string grade;
};

// Structure for Contact Information
struct Contact
{
    string mobile;
    string email;
};

// Main Student Structure
struct Student
{
    string enrollmentNo;
    string name;
    string branch;

    // Nested structures
    Academic academic;
    Contact contact;
};

// Function to display complete student details
void displayStudent(Student *s)
{
    cout << s->enrollmentNo << " "
         << s->name << " "
         << s->branch << endl;

    cout << "Semester : " << s->academic.semester << endl;

    cout << "Percentage : "
         << fixed << setprecision(2)
         << s->academic.percentage << endl;

    cout << "Grade : " << s->academic.grade << endl;

    cout << "Mobile : " << s->contact.mobile << endl;

    cout << "Email : " << s->contact.email << endl;

    cout << "--------------------------------------------\n";
}

// Function to update contact information
void updateContact(Student *s)
{
    cout << "\nEnter New Contact Information\n";

    cout << "Mobile Number : ";
    cin >> s->contact.mobile;

    cout << "Email ID : ";
    cin >> s->contact.email;

    cout << "Contact Information Updated Successfully\n";
}

// Function to display academic information
void displayAcademic(Student *s)
{
    cout << "\nAcademic Information\n";

    cout << "Semester : "
         << s->academic.semester << endl;

    cout << "Percentage : "
         << fixed << setprecision(2)
         << s->academic.percentage << endl;

    cout << "Grade : "
         << s->academic.grade << endl;
}

int main()
{
    int n;

    cout << "********************************************\n";
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";

    cout << "Enter Number of Students : ";
    cin >> n;

    cout << "--------------------------------------------\n";

    // Array of structures
    Student students[n];

    // Accept student details
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;

        cout << "Enrollment Number : ";
        cin >> students[i].enrollmentNo;

        cin.ignore();

        cout << "Student Name : ";
        getline(cin, students[i].name);

        cout << "Branch : ";
        cin >> students[i].branch;

        cout << "Semester : ";
        cin >> students[i].academic.semester;

        cout << "Percentage : ";
        cin >> students[i].academic.percentage;

        cout << "Grade : ";
        cin >> students[i].academic.grade;

        cout << "Mobile Number : ";
        cin >> students[i].contact.mobile;

        cout << "Email ID : ";
        cin >> students[i].contact.email;
        cout << "--------------------------------------------\n";
    }

       // Display all records
    cout << "Student Records\n";

    for (int i = 0; i < n; i++)
    {
        displayStudent(&students[i]);
    }

    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";

    return 0;
}
