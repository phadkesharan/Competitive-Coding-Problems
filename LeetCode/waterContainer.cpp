// LeetCode Problem
// problem link : https://leetcode.com/problems/trapping-rain-water/submissions/
// Concepts used :

#include <bits/stdc++.h>
using namespace std;

//function problem
int trap(vector<int> &height)
{
    int total = 0;
    int n = height.size();
    int lArray[n], rArray[n];

    int lMax = height[0];
    int rMax = height[n - 1];

    for (int i = 1; i < n - 1; i++)
    {
        if (lMax < height[i])
            lMax = height[i];

        lArray[i] = lMax;
    }

    for (int i = n - 2; i > 0; i--)
    {
        if (rMax < height[i])
            rMax = height[i];

        rArray[i] = rMax;
    }

    for (int i = 1; i < n - 1; i++)
    {
        int temp = (min(lArray[i], rArray[i]) - height[i]);
        total += temp;
    }

    return total;
}

int main()
{
}