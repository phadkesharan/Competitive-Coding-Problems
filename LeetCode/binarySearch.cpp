// LeetCode Problem
// problem link : https://leetcode.com/problems/binary-search/
// Concepts used : Binary Search


#include <bits/stdc++.h>
using namespace std;

void display(vector <int> arr)
{
    int n = arr.size();
    for(int i=0;i<n;i++){
        cout <<arr[i] <<" ";
    }
    cout <<endl;
}

int search(vector <int>& nums, int target){
    int low = 0, high = nums.size()-1;

    while(low<=high)
    {
        int mid = low + (high-low)/2;

        if(nums[mid] == target)
            return mid;

        else if(nums[mid] > target)
            high = mid-1;

        else
            low = mid+1;
    }

    return -1;
}

int main()
{
    vector <int> nums = {-1,0,3,5,9,12};

    display(nums);
    cout<<search(nums, 9);
}