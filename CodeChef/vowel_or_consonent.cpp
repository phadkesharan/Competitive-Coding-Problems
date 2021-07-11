// Code Chef Problem 
// Problem Code : VOWELTB
// Problem Link : https://www.codechef.com/problems/VOWELTB

#include <iostream>
using namespace std;


int main(){
    char C;
    cin >>C;

    char vowels[6] = {'A', 'E', 'I', 'O', 'U'};

    for(int i=0;i<6;i++){
        if (vowels[i] == C){
            cout <<"Vowel" <<endl;
            return 0;
        }
    }
    cout <<"Consonant" <<endl;
    return 0;
}