/*
hackerEarth Problem
Problem Link : https://www.hackerearth.com/practice/codemonk/
Concepts used : 
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void display_vector(vector <int> temp)
{
    int n = temp.size();

    for(int i=0;i<n;i++)
        cout <<temp[i] <<" ";
    cout <<endl;
}

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n, k;
        cin >>n >>k;

        int arr[n];
        for(int i=0;i<n;i++)
            cin >>arr[i];

        k = k%n;

        vector <int> ans;
        
        for(int i=n-k;i<n;i++)
        {
            ans.push_back(arr[i]);
        }

        for(int i=0;i<n-k;i++)
        {
            ans.push_back(arr[i]);
        }

        display_vector(ans);
    }
}