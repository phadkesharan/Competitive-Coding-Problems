/*
PrepBytes Problem
Problem Code : STNNUM
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/dsalgo/week/8/stacks/codingAssignment/STNNUM
Concepts used : queue
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

        vector<int> v;

        for (int i = 1; i <= n; i++)
            v.push_back(i);

        int ans;
        while (v.size() > 1)
        {
            ans = v.front();
            v.erase(v.begin());
            v.push_back(ans);
            v.erase(v.begin());
        }

        cout << ans << endl;
    }

    return 0;
}