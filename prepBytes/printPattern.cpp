/*
PrepBytes Problem
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/c++/week/4/recursion/codingAssignment/PATRN
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

void printSequence(int i, int n, bool flag)
{
    // cout <<"flag : " <<flag <<endl;
    // cout <<"n " <<n <<endl;
    if(i == n && flag)
    {
        cout <<i <<" ";
        return;
    }
    else
        cout <<i <<" ";

    if(i <= 0)
        flag = true;

    if(flag)
        return printSequence(i+5, n, flag);
    else
        return printSequence(i-5, n, flag);
}

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n;
        cin >>n;

        if(n == 0)
            cout <<0;
        else
            printSequence(n, n, false);
    }   
}