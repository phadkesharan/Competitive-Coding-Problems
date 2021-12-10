/*
PrepBytes Problem
Problem Code : COMCODE
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/dsalgo/week/8/stacks/codingAssignment/COMCODE
Concepts used : stack
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // write your code here

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int den[9] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};

        int count = 0;
        for (int i = 0; i < 9; i++)
        {
            if (n >= den[i])
            {
                count += n / den[i];
                n = n % den[i];
            }
        }

        cout << count << endl;
    }

    return 0;
}