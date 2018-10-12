#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,temp,avg,sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if(i!=k)
            sum=sum+temp;
    }
    avg=sum/2;
    cin>>temp;
    if(temp==avg)
        cout<<"Bon Appetit";
    else
        cout<<temp-avg;
    return 0;
}
