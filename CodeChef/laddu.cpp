/*
CodeChef Problem
Problem Code : LADDU
Problem Link : https://www.codechef.com/LRNDSA01/problems/LADDU
Concepts used : common sense
*/

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n;
        string origin;
        cin >>n;
        cin >>origin;
        int points = 0;

        while(n--)
        {
            string s;
            cin >>s;

            if(s == "CONTEST_WON")
            {
                int rank;
                cin >>rank;
                points += 300;

                if(rank < 20)
                    points += 20-rank;

            }

            else if(s == "TOP_CONTRIBUTOR")
            {
                points += 300;
            }

            else if(s == "BUG_FOUND")
            {
                int sev;
                cin >>sev;
                points += sev;
            }

            else if(s == "CONTEST_HOSTED")
            {
                points += 50;
            }   
        }

        int months;
        if(origin == "INDIAN")
            months = int(points/200);
        else
            months = int(points/400);

        cout <<months <<endl;
    }
}