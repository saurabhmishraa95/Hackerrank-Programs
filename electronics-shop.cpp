#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int b,n,m,max=-1;
    cin>>b>>n>>m;
    int key[n],usb[m];
    for(int i=0;i<n;i++)
        cin>>key[i];
    for(int i=0;i<m;i++)
        cin>>usb[i];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int temp=key[i]+usb[j];
            if(temp>max&&temp<b)
                max=temp;
        }
    }
    cout<<max;
    return 0;
}
