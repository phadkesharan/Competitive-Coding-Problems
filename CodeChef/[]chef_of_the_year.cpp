/*
CodeChef Problem
Problem Code : CVOTE
Problem Link : https://www.codechef.com/LRNDSA03/problems/CVOTE
Concepts used : 
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >>t;

    while(t--)
    {
        int n, m;
        cin >>n >>m;

        unordered_map <string, string> country_name;
        unordered_map <string, int> names;

        for(int i=0;i<n;i++)
        {
            string temp1, temp2;
            cin >>temp1 >>temp2;
            country_name.insert(make_pair(temp1, temp2));
        }

        for(int i=0;i<m;i++)
        {
            string temp;
            cin >>temp;
            names[temp]++;
        } 

        long int max_count_chef=0;

        unordered_map <string, int> country_count;
        
        for(auto i: names)
        {
            country_count[country_name[i.first]]++;

            if(i.second > max_count_chef){
                max_count_chef = i.second;
            }
        }

        long int max_count_country = 0;

        for(auto i: country_count)
        {
            if(i.second > max_count_country)
            {
                max_count_country = i.second;
            }
        }

        vector <string> chef, country;

        for(auto i: names)
        {
            if(i.second == max_count_chef)
                chef.push_back(i.first);
        }

        for(auto i: country_count)
        {
            if(i.second == max_count_country)
                country.push_back(i.first);
        }

        string max_country, max_chef;

        max_country = country[0];
        max_chef = chef[0];
        int l1 = chef.size();
        int l2 = country.size();

        for(int i=1;i<l2;i++)
        {   
            if(country[i] < max_country)
            {
                max_country = country[i];
            } 
        }

        for(int i=1;i>l2;i++)
        {
            if(chef[i] < max_chef)
            {
                max_chef = max_country;
            }
        }

        cout <<max_chef <<endl;
        cout <<max_country <<endl;

    }
}