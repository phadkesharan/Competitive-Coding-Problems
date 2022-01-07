// LeetCode Problem
// problem link : https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1/?company[]=Amazon&company[]=Amazon&problemType=functional&page=1&sortBy=submissions&category[]=Hash&query=company[]AmazonproblemTypefunctionalpage1sortBysubmissionscompany[]Amazoncategory[]Hash#
// Concepts used : Hash Map

#include <bits/stdc++.h>
using namespace std;

int maxLen(vector<int> &A, int n)
{
    // Your code here
    int sum[n];
    sum[0] = A[0];
    for (int i = 1; i < n; i++)
    {
        sum[i] = A[i] + sum[i - 1];
    }

    int maxLength = 0;
    int len = 0;
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
    {
        if (map.find(sum[i]) == map.end())
        {
            map[sum[i]] = i;

            if (sum[i] == 0)
                len = i + 1;

            if (maxLength < len)
                maxLength = len;
        }

        else
        {
            if (sum[i] == 0)
                len = i + 1;

            else
                len = i - map[sum[i]];

            if (maxLength < len)
                maxLength = len;
        }
    }

    return maxLength;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }

        cout << maxLen(arr, n) << endl;
    }

    return 0;
}