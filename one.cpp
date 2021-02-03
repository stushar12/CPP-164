#include<bits/stdc++.h>
using namespace std;


vector<long long int> productExceptSelf(vector<long long int>& arr, int n) 
{
    vector<long long int> v;
    if(n>1)
    {
   long long int left[n],right[n];
    
   long long int pro=1;
    for(long long int i=0;i<n;i++)
    {
        pro=arr[i]*pro;
        left[i]=pro;
    }
    
    
    pro=1;
    for(long long int i=n-1;i>=0;i--)
    {
        pro=arr[i]*pro;
        right[i]=pro;
    }
   
   v.push_back(right[1]);
   for(long long int i=1;i<n-1;i++)
   {
      pro=left[i-1]*right[i+1];
      v.push_back(pro);
   }
   v.push_back(left[n-2]);
    }
    else
    {
        v.push_back(1);
    }
    
    return v;
}



int main()
{
    vector<long long int>v{10, 3, 5, 6, 2},v1;

    v1=productExceptSelf(v,v.size());
}