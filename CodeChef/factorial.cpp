/*
CodeChef Problem
Problem Code : FCTRL
Problem Link : https://www.codechef.com/LRNDSA01/problems/FCTRL

concept used : Mathematical
Core Idea:
    number of 2's in prime factor of a number is always greater than equall to
    number of 5's. Since 2 and 5 makes a 10, we can find number of 10's by dividing
    the number by 10
    Then for the numbers with multiple 5's as factors (25, 135 etc)
    We then successively divide by powers of 5

resource : https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long int t;
    cin >> t;

    while (t--)
    {
        long long int n;
        cin >> n;

        long int count = 0;

        for (long int i = 5; n / i >= 1; i *= 5)
        {
            long int temp = n / i;
            count += temp;
        }

        cout << count << endl;
    }
}