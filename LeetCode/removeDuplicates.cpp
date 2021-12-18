/*
Leetcode Problem
Problem Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
Concepts used : array
*/

#include <bits/stdc++.h>
using namespace std;

void display(vector <int> v) {
    for(int i=0;i<v.size();i++)
        cout <<v[i] <<" ";

    cout <<endl;
}

int removeDuplicates(vector<int> &nums)
{
    int k = 0;
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] != nums[i + 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }

    nums[k] = nums[n - 1];
    return k;
}

int main()
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

    int k = removeDuplicates(arr);

    display(arr);
    cout <<"k : " <<k <<endl;
}
