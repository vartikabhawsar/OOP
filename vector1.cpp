#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    vector<int> v;
     for (int i = 1; i <= 5; i++)
     {
     v.push_back(i);
     }
     reverse(v.begin(),v.end());
      for (int i = 0; i < 5; i++)
      {
        cout << v[i] << " ";
}}