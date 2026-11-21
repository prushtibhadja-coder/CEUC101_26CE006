#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    //PART A -> MATRIX MULTIPLICATION
     int A[3][3], B[3][3], C[3][3];
     cout<<"******************************"<<endl;
     cout<<"  MATRIX MULTIPLICATION   "<<endl;
     cout<<"******************************"<<endl;

     //accept first matrix
     cout<<"\n Enter elements of First Matrix (3*3):\n";
     for(int i=0;i<3;i++)
        {
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
     }
     //accept second matrix
     cout<<"\n Enter elements of second Matrix (3*3):\n";
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            cin>>B[i][j];
        }
     }
     //initialize resultant matrix

     for(int i=0;i<3;i++)
        {
        for(int j=0;j<3;j++)
        {
            C[i][j]=0;
        }
        }

     // matrix multilication
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                C[i][j]=C[i][j] + A[i][k] * B[k][j];
            }
        }
     }

     //display first matrix
     cout<<"\n First Matrix\n\n";
     for(int i=0;i<3;i++)
        {
           for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
     }

     // display second matrix
     cout<<"\nsecond matrix\n\n";
     for(int i=0;i<3;i++)
        {
        for(int j=0;j<3;j++)
        {
            cout<<B[i][j]<<"\t";
        }
        cout<<endl;
     }

     //display resultsnt matrix
     cout<<"\n----------------------------------"<<endl;
     cout<<"\nResulstant Matrix\n\n";
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
            cout<<C[i][j]<<"\t";
        }
        cout<<endl;
     }





}
