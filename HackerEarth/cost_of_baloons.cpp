// hackerEarth Problem
// problem link : https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/
// Concepts used : 


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int b1, b2, n;
        cin >>b1 >>b2;
        cin >>n;

        int cost1=0, cost2=0;
        while(n--)
        {
            int a, b;
            cin >>a >>b;

            cost1 += a*b1 + b*b2;
            cost2 += a*b2 + b*b1;

        }

        if(cost1 < cost2)
            cout <<cost1;
        else
            cout <<cost2;
        cout <<endl;
    }
}