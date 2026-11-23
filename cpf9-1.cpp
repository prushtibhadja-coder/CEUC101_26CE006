#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout<<" "<<endl;
    int number = 92;
    char character = 'P';
    float floating = 15.16;

    cout << "****************************************" << endl;
    cout << "         MEMORY ADDRESS EXPLORER" << endl;
    cout << "****************************************" << endl;

    // PART A - Variable Information

    cout << "\n------------ Variable Information ------------" << endl;

    cout << "\nInteger Value      : " << number;
    cout << "\nMemory Address     : " << &number;

    cout << "\n----------------------------------------------";

    cout << "\n\nCharacter Value    : " << character;
    cout << "\nMemory Address     : " << (void*)&character;

    cout << "\n----------------------------------------------";

    cout << "\n\nFloating Value     : " << fixed << setprecision(2) << floating;
    cout << "\nMemory Address     : " << &floating;

    cout << "\n----------------------------------------------";

    // PART B - Indirect Referencing

    int *p = &number;

    cout << "\n\nIndirect Referencing";

    cout << "\n\nStored Value       : " << *p;

    *p = 30;

    cout << "\n\nModified Value     : " << number;

    cout << "\n----------------------------------------------";

    // PART C - Sequential Data Collection

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "\n\nSequential Data Collection";

    cout << "\n\nArray using Index"<<endl;

    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nArray using Address-based Access"<<endl;

    for(int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }

    cout << "\n----------------------------------------------"<<endl;
    cout<<"Observatiion"<<endl;
    cout<<"Both approaches access the same memory locations."<<endl;
     cout << "\n----------------------------------------------"<<endl;


    return 0;
}

