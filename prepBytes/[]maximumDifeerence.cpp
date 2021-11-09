/*
PrepBytes Problem
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/c++/week/2/arrays/codingAssignment/MAXDIFF
Concepts used : 
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
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout <<endl;
        int max = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    int temp = abs(arr[i] - arr[j]);
                    temp += abs(i - j);

                    if (temp > max)
                        max = temp;
                }
            }
        }
    }

    return 0;
}