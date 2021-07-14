/*
CodeChef Problem
Problem Code : ZCO14003
Problem Link : https://www.codechef.com/LRNDSA01/problems/ZCO14003

Concepts used : sorting
*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    cin >>n;

    long long int budgets[n];
    for(long int i=0;i<n;i++){
        cin >>budgets[i];
    }

    sort(budgets, budgets+n);

    long long int max_sale = 0;
    for(long int i=0;i<n;i++){
        long long int temp = budgets[n-1-i]*(i+1);

        if(temp > max_sale){
            max_sale = temp;
        }
    }

    cout <<max_sale <<endl;
    
}