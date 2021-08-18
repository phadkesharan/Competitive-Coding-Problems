// hackerEarth Problem
// problem link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/
// Concepts used : 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n-1;i++){
        int a;
        cin >>a;
    }
    int last;
    cin >>last;

    if(last%10 == 0)
        cout <<"YES";
    else
        cout <<"NO";
    cout <<endl;
}