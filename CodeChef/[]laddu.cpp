/*
CodeChef Problem
Problem Code : LADDU
Problem Link : https://www.codechef.com/LRNDSA01/problems/LADDU
Concepts used : common sense
*/

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >>t;

    while(t--){
        int n;
        string origin;
        cin >>n >>origin;

        int div;
        int laddos = 0;

        if(origin == "INDIAN")
            div = 200;
        else
            div = 400;

        for(int i=0;i<n;i++){
            string act;
            cin >>act;


            if(act == "CONTEST_WON"){
                int rank;
                cin >>rank;
                laddos += 300;

                if(rank > 20)
                    laddos += 20 - rank;
            }

            else if(act == "TOP_CONTRIBUTOR")
                laddos += 300;

            else if(act == "BUG_FOUND "){
                int sev;
                cin >>sev;
                laddos += sev;
            }

            else{
                laddos += 50;
            }
        }

        int months;
        months = laddos/div;

        cout <<months <<endl;

    }
}