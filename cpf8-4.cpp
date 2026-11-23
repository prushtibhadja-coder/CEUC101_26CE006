#include <iostream>
#include <iomanip>
using namespace std;

//Display array elements using recursion
void displayArray(int arr[], int n, int index)
{
    if (index==n)
    return;

    cout <<arr[index] <<" ";
    displayArray(arr,n,index + 1);
}
//Calculate sum of array elements using recursion
int Sum(int arr[],int n)
{
    if (n==0)
    return 0;

    return arr[n-1]+Sum(arr, n - 1);
}

//Calculate sum of digits using recursion
int sumDigit(int n)
{
    if (n==0)
    return 0;

    return n%10 + sumDigit(n/10);
}

//Reverse a number using recursion
int reverseNum(int n, int reversed = 0)
{
    if (n == 0)
    return reversed;

    return reverseNum(n/10,reversed*10 + n%10);
}

int main()
{
    int n, arr[100];
    int number;

    cout <<"--------------------------------------------" <<endl;
    cout <<"RECURSIVE TRAVERSAL AND NUMBER UTILITY" <<endl;
    cout <<"--------------------------------------------" <<endl;
    cout <<" " <<endl;

    cout <<"Enter number of array elements (1-100) :";
    cin >>n;
    cout <<" " <<endl;
    if (n < 1 || n > 100)
    {
        cout <<"Invalid array size";
        return 0;
    }

    cout <<"Enter array elements" <<setw(6) <<":";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout <<"Sum of array elements" <<setw(5) <<":" <<Sum(arr, n) <<endl;
    cout <<" " <<endl;
    cout <<"Enter a non-negative number" <<setw(2) <<":";
    cin >>number;

    if (number < 0)
    {
        cout <<"Please enter a non-negative number.";
        return 0;
    }

    cout <<"Sum of digits" <<setw(16) <<":" <<sumDigit(number) <<endl;

    cout <<"Reversed number" <<setw(14) <<":" << reverseNum(number) <<endl;

    return 0;
}
