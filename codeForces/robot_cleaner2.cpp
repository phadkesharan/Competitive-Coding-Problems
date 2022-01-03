/*
CodeForces Problem
Problem Link : https://codeforces.com/problemset/problem/1623/A
Concepts used : try 2 brute force
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, rb, cb, rd, cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;

        int i = rb, j = cb;
        int dr = 1, dc = 1;

        int a, b, time;

        if (rb == rd || cb == cd)
            time = 0;

        else
        {
            if (rb > rd)
                a = 2 * n - rb - rd;

            else 
                a = rd - rb;

            if(cb > cd)
                b = 2 * m - cb - cd;

            else
                b = cd - cb;

            time = min(a, b);
                
        }
        cout << time << endl;
    }

    return 0;
}
