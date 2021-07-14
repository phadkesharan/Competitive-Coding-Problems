/*
CodeChef Problem
Problem Code : MULTHREE
Problem Link : https://www.codechef.com/LRNDSA01/problems/MULTHREE
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;

    while(t--){
        long long int k;
        int d0, d1;
        cin >>k >>d0 >>d1;

        long int sum = 0;
        sum += d0 + d1;

        for(int i=2;i<k;i++){
            int digit = sum%10;
            sum += digit;
        }

        if(sum%3 == 0)
            cout <<"YES";
        else
            cout <<"NO";
        cout <<endl;
    }
}