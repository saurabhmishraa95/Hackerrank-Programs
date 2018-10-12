#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,n,a,b,c,d,e;
    a=b=c=d=e=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)
            a++;
        if(x==2)
            b++;
        if(x==3)
            c++;
        if(x==4)
            d++;
        if(x==5)
            e++;
    }
    if(a>=b&&a>=c&&a>=d&&a>=e)
        cout<<'1';
    else if(b>=c&&b>=d&&b>=e)
        cout<<'2';
    else if(c>=d&&c>=e)
        cout<<'3';
    else if(d>=e)
        cout<<'4';
    else
        cout<<'5';
    return 0;
}

