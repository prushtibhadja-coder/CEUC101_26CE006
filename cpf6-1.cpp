#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i=0,n,s[5],Tot=0,max=0,min;
    float avg;
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
        cin>>s[i];
    }

    cout<<"*************************************************************"<<endl;
    cout<<"     Participant's details"<<endl;
    cout<<"*************************************************************"<<endl;

    cout<<"ID      NAME      SCORE"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<id[i]<<" ";
        cout<<pname[i]<<"  ";
        cout<<s[i]<<endl;
    }

    for(i=0; i<n; i++)
    {
       Tot=Tot+s[i];
       avg=Tot/n;
    }

    cout<<"Total Score"<<setw(7)<<":"<<Tot<<endl;
    cout<<"Average Score"<<setw(5)<<":"<<avg<<endl;

    for(i=0; i<n; i++)
    {
        if(max<s[i])
        {
            max=s[i];
        }
        if(min>s[i])
        {
            min=s[i];
        }
    }

    cout<<"Highest Score"<<setw(5)<<":"<<max<<endl;
    cout<<"Lowest Score"<<setw(6)<<":"<<min<<endl;
    return 0;
}
