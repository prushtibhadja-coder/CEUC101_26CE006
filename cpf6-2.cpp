#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i=0,j=0,n,S[10];
    string Name[10];
    string ID[10],id;

    cout <<"********************************************" <<endl;
    cout <<"SPORTS EVENT SCORE ANALYSIS" <<endl;
    cout <<"********************************************" <<endl;

    cout <<"Enter Number of Participants" <<setw(5) <<":";
    cin >>n;
    cout <<endl;

    for(i=0; i<n; i++)
    {
        cout <<"Enter Participant ID" <<setw(7) <<":";
        cin >>ID[i];

        cout <<"Enter Participant Name" <<setw(5) <<":";
        cin >>Name[i];

        cout <<"Enter Score" <<setw(16) <<":";
        cin >>S[i];

        cout <<endl;
    }

    cout <<"Search Participant" <<endl;

    cout <<"Enter Participant ID" <<setw(5) <<":";
    cin >>id;
    cout <<endl;

    cout <<"----------------------------------------------" <<endl;

    for(i=0; i<n; i++)
    {
       if(id==ID[i])
          {
              cout <<"Participant Found" <<endl;
              cout <<"----------------------------------------------" <<endl;
              cout <<"ID" <<setw(7) <<":" <<ID[i] <<endl;
              cout <<"Name" <<setw(5) <<":" <<Name[i] <<endl;
              cout <<"Score" <<setw(4) <<":" <<S[i] <<endl;
          }
    }

    /*for(i=0; i<n; i++)
        {
            if(id!=ID[i])
            {
               cout <<"Participant not found" <<endl;
               cout <<"----------------------------------------------" <<endl;
            }
        }*/
    cout <<endl;
    cout <<"----------------------------------------------" <<endl;
    cout <<"Ranking List" <<endl;
    cout <<"----------------------------------------------" <<endl;

    for(i=0; i<n; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(S[j]<S[j+1])
            {
                swap(S[j],S[j+1]);
                swap(ID[j],ID[j+1]);
                swap(Name[j],Name[j+1]);
            }
        }

    }

     cout <<"Rank" <<setw(10) <<"Name" <<setw(15) <<"Score"<<endl;
     for(i=0; i<n; i++)
     {
         cout <<i+1 <<setw(15) <<Name[i] <<setw(12) <<S[i] <<endl;
     }
     cout <<endl;
     cout <<"----------------------------------------------" <<endl;

     cout <<"Top Three Performance" <<endl;
     cout <<endl;

     cout <<"Position" <<setw(7) <<"Name" <<setw(9) <<"Score" <<endl;

     for(i=0; i<3; i++)
     {
         if(i<=3)
         {
             cout <<i+1 <<setw(15) <<Name[i] <<setw(7) <<S[i] <<endl;
         }
     }

      cout <<"----------------------------------------------" <<endl;

    return 0;
}
