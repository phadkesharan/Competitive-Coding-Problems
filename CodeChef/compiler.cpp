/*
CodeChef Problem
Problem Code : COMPILER
Problem Link : https://www.codechef.com/LRNDSA01/problems/COMPILER
Concept Used : increasing and decreasing counters
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        string s;
        cin >>s;

        long long int n = s.length();
        long long int counter = 0, answer = 0;

        for(long long int i=0;i<n;i++)
        {
            if(s[i] == '<')
                counter++;
            
            else
            {
                counter--;

                if(counter < 0)
                    break;
                
                if(counter == 0)
                    answer = i+1;
            }  
        }

        cout <<answer <<endl;
    }
}