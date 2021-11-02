// LeetCode Problem
// problem link : https://leetcode.com/problems/container-with-most-water/submissions/
// Concepts used : 2 pointers

#include <bits/stdc++.h>
using namespace std;

//function problem

int maxArea(vector<int> &height)
{

    int areaMax = 0;
    int n = height.size();

    int i = 0, j = n - 1;

    while (j > i)
    {

        int minLength = min(height[i], height[j]);
        int area = (j - i) * minLength;

        if (area > areaMax)
            areaMax = area;

        if (minLength == height[i])
            i++;

        else
            j--;
    }

    return areaMax;
}

int main()
{
}