#include <iostream>
#include <climits>
#include <fstream>
#include <limits>
using namespace std;

// Global variable
int globalValue = 100;

int main()
{
    cout << "********************************************" << endl;
    cout << "PROGRAM EXECUTION & ERROR HANDLING" << endl;
    cout << "ANALYZER" << endl;
    cout << "********************************************" << endl;

    // PART A - Memory Observation

    int localValue = 200;

    int *ptr = new int;
    *ptr = 300;

    cout << "\nCompile-time and Run-time Memory" << endl;

    cout << "Global Variable Value : " << globalValue << endl;
    cout << "Local Variable Value : " << localValue << endl;
    cout << "Dynamic Memory Value : " << *ptr << endl;

    delete ptr;

    cout << "--------------------------------------------" << endl;

    // PART B - Low-level Error Demonstration

    cout << "\nLow-level Error Demonstration" << endl;

    unsigned int a = UINT_MAX;
    a = a + 1;

    cout << "Arithmetic Overflow Observed" << endl;

    cout << "--------------------------------------------" << endl;

    // Pointer Aliasing

    int x = 50;

    int *p1 = &x;
    int *p2 = &x;

    cout << "\nPointer Aliasing" << endl;

    cout << "Original Value : " << *p1 << endl;

    *p1 = 75;

    cout << "Updated Value : " << *p2 << endl;

    cout << "Both Address Variables Refer to the Same Memory" << endl;

    cout << "Location : " << (p1 == p2) << endl;

    cout << "--------------------------------------------" << endl;

    // Memory Leak Demonstration

    cout << "\nMemory Leak Demonstration" << endl;

    int *memory = new int;

    *memory = 100;

    cout << "Dynamic Memory Allocated" << endl;

    delete memory;

    cout << "Memory Released Successfully" << endl;

    cout << "--------------------------------------------" << endl;

    // PART C - Arithmetic Operation

    cout << "\nArithmetic Operation" << endl;

    double dividend, divisor;

    cout << "Enter Dividend : ";

    if (!(cin >> dividend))
    {
        cout << "Error : Invalid Numerical Input." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    else
    {
        cout << "Enter Divisor : ";

        if (!(cin >> divisor))
        {
            cout << "Error : Invalid Numerical Input." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else if (divisor == 0)
        {
            cout << "Error : Division by Zero is not Allowed." << endl;
        }
        else
        {
            cout << "Result : " << dividend / divisor << endl;
        }
    }

    cout << "--------------------------------------------" << endl;

    // File Operation

    cout << "\nFile Operation" << endl;

    ifstream file("MissingFile.txt");

    if (!file)
    {
        cout << "Unable to Open File." << endl;
    }
    else
    {
        cout << "File Opened Successfully" << endl;
        file.close();
    }

    cout << "--------------------------------------------" << endl;

    cout << "\nProgram Executed Successfully" << endl;

    cout << "--------------------------------------------" << endl;

    return 0;
}
