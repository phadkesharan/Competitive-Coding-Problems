/*
CodeChef Problem
Problem Code : HRDSEQ
Problem Link : https://www.codechef.com/problems/HRDSEQ
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

void display(vector <int> arr)
{
    for(int i=0;i<arr.size();i++)
        cout <<arr[i] <<" ";
    cout <<endl;
}

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n;
        cin >>n;

        vector <int> arr;
        arr.push_back(0);

        int index[128];

        for(int i=1;i<n;i++)
        {
            if(index[arr[i-1]] == 0)
            {
                arr.push_back(0);
                index[0] = i-1;
            }

            else
            {
                int newNum = i- index[arr[i-1]];
                arr.push_back(newNum);
            }

            index[arr[i-1]] = i-1;
        }

        display(arr);
    }
}