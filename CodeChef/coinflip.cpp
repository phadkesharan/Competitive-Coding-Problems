/*
CodeChef Problem
Problem Code : CONFLIP
Problem Link : https://www.codechef.com/LRNDSA01/problems/CONFLIP
Concepts used : iteration and common sense
*/

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t;

    while(t--){
        int g;
        cin >>g;

        while(g--){
            int i, n, q;
            cin >>i >>n >>q;

            int n_heads;
            int n_tails;

            if(n%2 == 0){
                n_heads = n/2;
                n_tails = n_heads;
            }

            else{
                if(i == 1){
                    n_tails = int(n/2) + 1;
                    n_heads = n - n_tails;
                }
                else{
                    n_heads = int(n/2) + 1;
                    n_tails = n - n_heads;
                }
            }

            if(q == 1)
                cout <<n_heads <<endl;
            else
                cout <<n_tails <<endl;
        }
    }
}