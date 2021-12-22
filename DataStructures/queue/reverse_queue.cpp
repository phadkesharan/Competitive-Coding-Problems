/*
PrepBytes Problem
Problem Code : RVRSEQU
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/dsalgo/week/9/queues/codingAssignment/RVRSEQU
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
        queue<int> q1, q2;

        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            q1.push(temp);
        }

        for (int i = 0; i < n; i++)
        {

            for (int i = 0; i < q1.size() - 1; i++)
            {
                int elem = q1.front();
                q1.pop();
                q1.push(elem);
            }

            int elem = q1.front();
            cout <<elem <<" ";
            q2.push(elem);
            q1.pop();
        }
        cout << endl;
        
    }

    return 0;
}