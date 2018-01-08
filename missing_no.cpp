#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    vector<int> ans;
    vector<int> fin;
    cin>>n;
    int a[n],cn,cm;
    for(int i=0;i<n;i++)
    { cin>>a[i];
     
    }
     cin>>m;
     int b[m];
     for(int i=0;i<m;i++)
     {   cin>>b[i];
      
     }
    for(int i=0;i<m;i++)
    {
        cn=0;
        cm=0;
        for(int j=0;j<m;j++)
        {
            if(b[i]==b[j])
                cn++;
        }
         for(int j=0;j<n;j++)
        {
            if(b[i]==a[j])
                cm++;
        }
        if(cn!=cm)
        {  
         ans.push_back(b[i]);
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
    fin.push_back(ans[i]);
        int k=ans[i];
            for(int j=i+1;k==ans[j];j++)
                i++;
           
    }
    for(int i=0;i<fin.size();i++)
        cout<<fin[i]<<" ";
    return 0;
    
    
    
}

