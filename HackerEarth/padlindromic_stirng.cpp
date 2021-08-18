// hackerEarth Problem
// Problem Link : https://www.hackerearth.com/practice/codemonk/
// Concepts used : 

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
    int n = s.length(); 

    for(int i=0;i<n;i++)
    {
        if(s[i] != s[n-1-i])
        {
            return false;
        }
    }

    return true;
}


int main()
{
    string s;
    cin >>s;

    if(isPalindrome(s))
        cout <<"YES";
    else
        cout <<"NO";
    cout <<endl;
}