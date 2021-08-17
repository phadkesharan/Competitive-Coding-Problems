/*
CodeChef Problem
Problem Code : STUPMACH
Problem Link : https://www.codechef.com/LRNDSA01/problems/STUPMACH
Concepts used : 
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        long int n;
        cin >>n;
        long long int arr[n];
        long long int min;
        for(long int i=0;i<n;i++)
        {   
            cin >>arr[i];
            if(i == 0)
                min = arr[i];
            
            else{
                if(min > arr[i])
                    min = arr[i];
            }   
        }

        for(long int i=0;i<n;i++)
            arr[i] -= min;

        
    }
}