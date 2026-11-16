#include <iostream>
using namespace std;
int main()
{
    int n,score[5];
    string pname[5],id[5];
    cout<<"*************************************************************"<<endl;
    cout<<"         SPORTS EVENT SCORE ANALYSIS"<<endl;
    cout<<"*************************************************************"<<endl;
    cout<<""<<endl;

    cout<<"Enter number of participants : ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter paricipant's ID   :";
        cin>>id[i];
        cout<<"Enter paricipant's name :";
        cin>>pname[i];
        cout<<"Enter score             :";
        cin>>score[i];
    }

    cout<<"*************************************************************"<<endl;
    cout<<"     Participant's details"<<endl;
    cout<<"*************************************************************"<<endl;

    cout<<"ID      NAME      SCORE"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<id[i]<<" ";
        cout<<pname[i]<<"  ";
        cout<<score[i]<<endl;
    }

    return 0;
}
