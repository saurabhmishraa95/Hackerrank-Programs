#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,max,min,x,maxrec=0,minrec=0;
    cin>>n;
    vector<int> v;
    cin>>x;
    v.push_back(x);
    max=min=x;
    for(int i=1;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
        if(x>max)
        {   maxrec++;
         max=x;}
        if(x<min){
            minrec++;
            min=x;
        }
        
    }
    cout<<maxrec<<" "<<minrec;
    return 0;
}
