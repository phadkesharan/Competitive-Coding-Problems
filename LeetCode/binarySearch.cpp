// LeetCode Problem
// problem link : https://leetcode.com/problems/binary-search/
// Concepts used : Binary Search

#include <bits/stdc++.h>
using namespace std;

void display(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int search(vector<int> &nums, int target)
{
    int low = 0, high = nums.size() - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target)
            return mid;

        else if (nums[mid] > target)
            high = mid - 1;

        else
            low = mid + 1;
    }

    return -1;
}

int binarySearch(vector<int> arr, int l, int h, int elem)
{
    if (l > h)
        return -1;

    int mid = l + (h - l) / 2;

    if (arr[mid] > elem)
        return binarySearch(arr, l, mid - 1, elem);

    else if (arr[mid] < elem)
        return binarySearch(arr, mid + 1, h, elem);

    else
        return mid;
}

int getPivot(vector<int> arr, int l, int h)
{

    if(l > h)
        return -1;

    int mid = l + (h - l) / 2;

    if (arr[mid] > arr[mid + 1])
        return mid+1;

    else if(arr[mid] < arr[mid - 1])
        return mid;

    else
    {
        if (arr[0] < arr[mid])
        {
            return getPivot(arr, mid + 1, arr.size() - 1);
        }
        else
            return getPivot(arr, 0, mid - 1);
    }
}

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};

    vector <int> a = {1, 3};

    display(a);
    cout << getPivot(a, 0, a.size()-1);
}