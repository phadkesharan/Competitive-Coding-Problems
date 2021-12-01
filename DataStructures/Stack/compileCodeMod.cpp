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

        string code;
        cin >> code;

        stack<char> temp;

        int length = 0;
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (code[i] == '<')
            {
                temp.push('<');
            }

            else
            {

                if (!temp.empty() && temp.top() == '<')
                {
                    temp.pop();
                    length += 2;
                }

                else 
                {
                    ans.push_back(length);
                    length = 0;
                }
                
            }
        }

        ans.push_back(length);

        int maxLength = 0;

        cout << "ANS : ";
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i] > maxLength)
                maxLength = ans[i];

            cout << ans[i] << " ";
        }
        cout << endl;
        cout << maxLength << endl;
    }

    return 0;
}