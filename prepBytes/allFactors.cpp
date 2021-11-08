/*

print all non-repeating factor combinations of a number
in lexicographycal order using recursion 

*/

#include <bits/stdc++.h>
using namespace std;

void printFactors(int n, int p, string s)
{
    if(n == 1){
        cout <<s <<endl;
        return;
    }

    else{
        for(int i=p;i<=n;i++)
        {
            if(n%i == 0)
                printFactors(n/i, i, s + " " + to_string(i));
            
        }
    }
}

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n;
        cin >>n;

        printFactors(n, 2, "1");
    }
}