#include <iostream>
using namespace std;

//PART A - Stack and Heap Memory

void memoryDemo()
{
    //Stack Memory

    int number = 100;

    cout <<"********************************************" <<endl;
    cout <<"MEMORY ORGANISATION ANALYZER" <<endl;
    cout <<"********************************************" <<endl;
    cout <<endl;

    cout <<"--------------- Stack Memory ---------------" <<endl;
    cout <<endl;

    cout <<"Local Variable Value : " <<number <<endl;
    cout <<"Memory Address       : " <<&number <<endl;
    cout <<endl;

    cout <<"---------------------------------------------" <<endl;
    cout <<endl;

    //Dynamically Allocated Memory (Heap)
    int *ptr = new int(250);

    cout <<"------- Dynamically Allocated Memory -------" <<endl;
    cout <<endl;

    cout <<"Allocated Value : " <<*ptr <<endl;
    cout <<"Memory Address  : " <<ptr <<endl;
    cout <<endl;

    cout <<"---------------------------------------------" <<endl;
    cout <<endl;

    delete ptr;
    ptr = nullptr;
}

//PART B - Multi-level Referencing
void pointerDemo()
{
    int x = 50;

    //Single-level pointer

    int *p = &x;

    //Double-level pointer

    int **q = &p;

    //Triple-level pointer

    int ***r = &q;

    cout <<"---------- Multi-level Referencing ----------" <<endl;
    cout <<endl;

    cout <<"Original Value       : " <<x <<endl;
    cout <<endl;

    cout <<"Address of x         : " <<&x <<endl;
    cout <<"Single-level Address : " <<p <<endl;
    cout <<endl;

    cout <<"Address of p         : " <<&p <<endl;
    cout <<"Double-level Address : " <<q <<endl;
    cout <<endl;

    cout <<"Address of q         : " <<&q <<endl;
    cout <<"Triple-level Address : " <<r <<endl;
    cout <<endl;

    cout <<"Value through Single Level : " <<*p <<endl;
    cout <<"Value through Double Level : " <<**q <<endl;
    cout <<"Value through Triple Level : " <<***r <<endl;

    cout <<endl;
    cout <<"---------------------------------------------" <<endl;
    cout <<endl;
}

//PART C - Memory Safety
void memorySafety()
{
    cout <<"--------------- Memory Safety ----------------" <<endl;
    cout <<endl;

    //Null Reference

    int *nullPointer = nullptr;

    cout <<"Null Reference" <<endl;
    cout <<endl;

    if(nullPointer == nullptr)
    {
        cout <<"Safe (Reference is NULL)" <<endl;
    }

    cout <<endl;
    cout <<"----------------------------------------------" <<endl;
    cout <<endl;

    //Invalid Reference

    int *ptr = new int(100);

    int *invalidRef = ptr;

    delete ptr;

    ptr = nullptr;

    cout <<"Invalid Reference" <<endl;
    cout <<endl;

    cout <<"Memory Released Successfully" <<endl;
    cout <<endl;

    cout <<"Reference Invalid" <<endl;
    cout <<endl;

    cout <<"----------------------------------------------" <<endl;
    cout <<endl;

    //Uninitialized Address Variable

    int *uninitialized;

    cout <<"Uninitialized Address Variable" <<endl;
    cout <<endl;

    cout <<"Unsafe to Access" <<endl;

    cout <<endl;
    cout <<"----------------------------------------------" <<endl;
    cout <<endl;
}


//MAIN FUNCTION

int main()
{
    //PART A

    memoryDemo();

    //PART B

    pointerDemo();

    //PART C

    memorySafety();

    cout <<"Program Executed Successfully." <<endl;

    return 0;
}
