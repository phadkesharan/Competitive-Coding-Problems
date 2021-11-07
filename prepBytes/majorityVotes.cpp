/*
PrepBytes Problem
Problem Link : https://www.prepbytes.com/panel/mycourses/program-one/dsalgo/week/5/searching/codingAssignment/MAJORITY
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
  {
    //write your code here
    int t;
    cin >>t;
    
    while(t--)
    {
      unordered_map <int, int> map;
      
      int n;
      cin >>n;
      
      bool flag = false;
      
      for(int i=0;i<n;i++){
        int temp;
        cin >>temp;
        
        if(map.find(temp) == map.end())
          map[temp] = 1;
        else
          map[temp]++;

        // cout <<"temp " << temp <<" " <<map[temp] <<endl;
          
        if(map[temp] > n/2)
        {
          cout <<temp <<endl;
          flag = true;
          break;
        }
          
      }
      
      if(flag == false)
        cout <<-1 <<endl;
      
    }
    
    return 0;
  }