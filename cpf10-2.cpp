#include <iostream>
using namespace std;

// Part A: Structure for Product Information
struct Product
{
    int productID;
    float price;
    char category;
    double weight;
};

// Part B: Structure with Different Member Orders
struct DataTypeA
{
    char a;
    int b;
    double c;
    float d;
};

struct DataTypeB
{
    double c;
    int b;
    float d;
    char a;
};

// Part C: Union for Shared Memory
union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    // Part A: Size of Structure Members
    Product p;

    cout << "********************************************\n";
    cout << "  COMPOSITE DATA REPRESENTATION ANALYZER\n";
    cout << "********************************************\n";

    cout << "\nComposite Data Type A\n";

    cout << "\nSize of Product ID : " << sizeof(p.productID) << " Bytes";
    cout << "\nSize of Price      : " << sizeof(p.price) << " Bytes";
    cout << "\nSize of Category   : " << sizeof(p.category) << " Bytes";
    cout << "\nSize of Weight     : " << sizeof(p.weight) << " Bytes";

    cout << "\nComposite Data Type B\n";


    cout << "\n\nTotal Size : " << sizeof(Product) << " Bytes";

    cout << "\n--------------------------------------------\n";

    // Part B: Padding and Alignment
    cout << "\nPadding and Alignment Analysis\n";

    cout << "\nSize of Structure A : " << sizeof(DataTypeA) << " Bytes";
    cout << "\nSize of Structure B : " << sizeof(DataTypeB) << " Bytes";

    cout << "\n\nPadding and Alignment Observed\n";

    cout << "\n--------------------------------------------\n";

    // Part C: Shared Memory Using Union
    Data d;

    cout << "\nShared Memory Representation\n";

    d.i = 120;
    cout << "\nInteger Value : " << d.i;

    d.f = 120.00;
    cout << "\nFloating Value : " << d.f;

    d.ch = 'x';
    cout << "\nCharacter Value : " << d.ch;

    cout << "\n\nAfter Updating Floating Value\n";

    d.f = 250.50;

    cout << "\nInteger Value Changed";
    cout << "\nCharacter Value Changed";

    cout << "\n--------------------------------------------\n";

    // Part D: Trade-off Analysis
    cout << "\nTrade-off Analysis\n";

    cout << "\nStructure\n";
    cout << "\nSeparate Memory for Every Member";
    cout << "\nSuitable for Storing Complete Records";

    cout << "\n\nUnion\n";
    cout << "\nShared Memory for All Members";
    cout << "\nSuitable for Memory-efficient Applications";

    cout << "\n--------------------------------------------\n";
    cout << "\nProgram Executed Successfully\n";
    cout << "--------------------------------------------\n";

    return 0;
}
