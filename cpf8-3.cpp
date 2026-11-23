#include <iostream>
using namespace std;


int factorialRecursiveCalls = 0;
int fibonacciRecursiveCalls = 0;


long long factorialIterative(int n)
{
    long long fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    return fact;
}


long long factorialRecursive(int n)
{
    factorialRecursiveCalls++;

    if (n <= 1)
        return 1;

    return n * factorialRecursive(n - 1);
}


void fibonacciIterative(int n)
{
    long long a = 0, b = 1, c;

    cout << "Iterative Fibonacci Series: ";

    for (int i = 0; i < n; i++)
    {
        cout << a << " ";

        c = a + b;
        a = b;
        b = c;
    }

    cout << endl;
}


long long fibonacciRecursive(int n)
{
    fibonacciRecursiveCalls++;

    if (n <= 1)
        return n;

    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}


void displayRecursiveFibonacci(int n)
{
    cout << "Recursive Fibonacci Series: ";

    for (int i = 0; i < n; i++)
    {
        cout << fibonacciRecursive(i) << " ";
    }

    cout << endl;
}

int main()
{
    int n;

    cout << "=============================================\n";
    cout << "  RECURSIVE MATHEMATICAL OPERATIONS ANALYZER\n";
    cout << "=============================================\n";

    cout << "\nEnter a number for Factorial: ";
    cin >> n;


    factorialRecursiveCalls = 0;

    cout << "\n--- PART A: FACTORIAL ---\n";

    cout << "Iterative Factorial: "
         << factorialIterative(n) << endl;

    cout << "Recursive Factorial: "
         << factorialRecursive(n) << endl;

    cout << "Recursive Function Calls: "
         << factorialRecursiveCalls << endl;


    int terms;

    cout << "\nEnter number of terms for Fibonacci Series: ";
    cin >> terms;

    fibonacciRecursiveCalls = 0;

    cout << "\n--- PART B: FIBONACCI SERIES ---\n";

    fibonacciIterative(terms);

    displayRecursiveFibonacci(terms);

    cout << "Recursive Function Calls: "
         << fibonacciRecursiveCalls << endl;


    cout << "\n--- PART C: COMPARISON ---\n";

    cout << "\n1. Number of Function Calls:\n";
    cout << "   Iterative Factorial : 1 main function call + loop\n";
    cout << "   Recursive Factorial : " << factorialRecursiveCalls
         << " recursive calls\n";
    cout << "   Iterative Fibonacci : Loop-based execution\n";
    cout << "   Recursive Fibonacci : " << fibonacciRecursiveCalls
         << " recursive calls\n";

    cout << "\n2. Program Readability:\n";
    cout << "   Iterative : Easy to understand using loops.\n";
    cout << "   Recursive : Short and elegant for mathematical problems.\n";

    cout << "\n3. Code Complexity:\n";
    cout << "   Iterative Factorial : O(n)\n";
    cout << "   Recursive Factorial : O(n)\n";
    cout << "   Iterative Fibonacci : O(n)\n";
    cout << "   Recursive Fibonacci : O(2^n) approximately\n";

    cout << "\n4. Execution Flow:\n";
    cout << "   Iterative : Repeatedly executes a loop until the condition fails.\n";
    cout << "   Recursive : Function calls itself until reaching the base condition.\n";

    cout << "\n=============================================\n";
    cout << "              PROGRAM COMPLETED\n";
    cout << "=============================================\n";

    return 0;
}
