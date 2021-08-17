/*
CodeChef Problem
Problem Code : MULTHREE
Problem Link : https://www.codechef.com/LRNDSA01/problems/MULTHREE
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        long long int k, a, b;
        cin >>k >>a >> b;

        long long int digits_sum = a + b;

        for(long long int i=0;i<k-2;i++)
        {   
            int temp = digits_sum%10;
            digits_sum += temp;
        }

        if(digits_sum%3 == 0)
            cout <<"YES";
        else
            cout <<"NO";

        cout <<endl;
    }

    return 0;
}