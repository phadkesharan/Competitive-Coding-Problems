/*
Spoj Problem
Problem Code : PRIME1
Problem Link : https://www.spoj.com/problems/PRIME1/

Concept used : finding prime number using iteration
*/

#include <iostream>
using namespace std;

bool isPrime(long long int num){
    if(num == 1)
        return false;
    
    for(long long int i=2;i*i <=num;i++){
        if(num%i == 0)
            return false;
    }

    return true;
}

int main(){
    int t;
    cin >>t;

    while(t--){
        long long int n, m;
        cin >>n >>m;

        for(long long int i=n;i<=m;i++){
            if(isPrime(i))
                cout <<i <<endl;
        }

        cout <<endl;
    }
}

