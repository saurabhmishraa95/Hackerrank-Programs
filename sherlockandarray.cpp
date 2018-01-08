#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int leftequalright(int j,int l[],int n)
{
    int sumleft=0,sumri=0;
    for(int i=0;i<j;i++)
    {
        sumleft+=l[i];
    }
     for(int i=j+1;i<=n;i++)
    {
        sumri+=l[i];
    }
    if(sumleft==sumri)
        return (1);
    else
        return (0);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    int b[t];
    cin>>t;
  
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int l[n];
        for(int j=0;j<n;j++)
        {
            cin>>l[j];
        }
        
        if(n==1)
        {
            b[i]=1;
            continue;
        }
        
        for(int j=1;j<n-1;j++)
        {
         
            if(leftequalright(j,l,n))
            { b[i]=1;
             break;}
            else
                b[i]=0;
        }
    }
    
for(int i=0;i<t;i++)
        {
            if(b[i]==1)
                cout<<"YES\n";
            else 
                cout<<"NO\n";
        }
    return 0;
}

