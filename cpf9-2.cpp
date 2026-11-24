#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Student
{
    string enrollmentNo;
    string name;
    string branch;
    int semester;
    float percentage;
    string grade;
};

// Function to display student records using address arithmetic
void displayRecords(Student *ptr, int n)
{
    cout << "\nStudent Records using Address-based Access\n";

    cout << "--------------------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        Student *address = ptr + i;

        cout << "Address : " << address << endl;

        cout << address->enrollmentNo << " "
             << address->name << " "
             << address->branch << " "
             << address->semester << " "
             << fixed << setprecision(2)
             << address->percentage << " "
             << address->grade << endl;

        cout << "--------------------------------------------\n";
    }
}

// Function to calculate average percentage
float calculateAverage(Student *ptr, int n)
{
    float total = 0;

    for (int i = 0; i < n; i++)
    {
        total = total + (ptr + i)->percentage;
    }

    return total / n;
}

// Function to find highest percentage
float findHighest(Student *ptr, int n)
{
    float highest = (ptr + 0)->percentage;

    for (int i = 1; i < n; i++)
    {
        if ((ptr + i)->percentage > highest)
        {
            highest = (ptr + i)->percentage;
        }
    }

    return highest;
}

// Function to find lowest percentage
float findLowest(Student *ptr, int n)
{
    float lowest = (ptr + 0)->percentage;

    for (int i = 1; i < n; i++)
    {
        if ((ptr + i)->percentage < lowest)
        {
            lowest = (ptr + i)->percentage;
        }
    }

    return lowest;
}

int main()
{
    int n;

    cout << "********************************************\n";
    cout << "     STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";

    // Part A - Number of students
    cout << "Enter Number of Students : ";
    cin >> n;

    // Dynamic memory allocation
    Student *students = new Student[n];

    cout << "Dynamic Memory Allocated Successfully\n";
    cout << "--------------------------------------------\n";

    cout << "Enter Student Details\n";

    // Input student details
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;

        cin.ignore();

        cout << "Enrollment Number : ";
        getline(cin, students[i].enrollmentNo);

        cout << "Student Name : ";
        getline(cin, students[i].name);

        cout << "Branch : ";
        getline(cin, students[i].branch);

        cout << "Semester : ";
        cin >> students[i].semester;

        cout << "Percentage : ";
        cin >> students[i].percentage;

        cout << "Grade : ";
        cin >> students[i].grade;

        cout << "--------------------------------------------\n";
    }

    // Part B - Address-based access
    displayRecords(students, n);

    // Part C - Address-based function access
    float average = calculateAverage(students, n);
    float highest = findHighest(students, n);
    float lowest = findLowest(students, n);

    cout << "\nAcademic Summary\n";
    cout << "Class Average Percentage : "
         << fixed << setprecision(2)
         << average << " %\n";

    cout << "Highest Percentage : "
         << fixed << setprecision(2)
         << highest << " %\n";

    cout << "Lowest Percentage : "
         << fixed << setprecision(2)
         << lowest << " %\n";

    cout << "--------------------------------------------\n";

    // Part D - Dynamic memory deallocation
    delete[] students;

    // Reset address variable
    students = nullptr;

    cout << "Dynamic Memory Released Successfully\n";
    cout << "Address Variable Reset Successfully\n";

    cout << "--------------------------------------------\n";
    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";

    return 0;
}
