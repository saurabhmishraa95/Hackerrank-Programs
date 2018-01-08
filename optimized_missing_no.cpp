#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m,x;
    vector<int> ans;
    vector<int> a;
    vector<int> b;
    cin>>n;
    int cn,cm;
    for(int i=0;i<n;i++)
    { cin>>x;
     a.push_back(x);
     
    }
     cin>>m;
     for(int i=0;i<m;i++)
     {   cin>>x;
      b.push_back(x);
      
     }
    sort(b.begin(),b.end());
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
        int k=b[i];
        for(int j=i+1;k==b[j];j++)
                i++;
    }
    for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
    return 0;
    
    
    
}

