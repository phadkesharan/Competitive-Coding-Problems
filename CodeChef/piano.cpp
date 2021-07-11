// # Code Chef Problem 
// # Problem Code : PLAYPIAN
// # Problem Link : https://www.codechef.com/problems/PLAYPIAN

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t;
    while(t--){
        string log;
        cin >>log;

        bool valid = true;
        int n = log.length();
        if(n%2 != 0)
            valid = false;
        
        else{
            for(int i=0;i<n;i+=2){
                if(log[i] == log[i+1]){
                    valid = false;
                    break;
                }
            }
        }

        if (valid)
            cout <<"YES";
        else cout <<"NO";
        cout <<endl;
    }
}