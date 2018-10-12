int sockMerchant(int n, vector<int> ar) {
    int count=0,pair=0;
    sort(ar.begin(),ar.end());
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]==ar[i+1])
            count++;
        else
        { pair=pair+((count+1)/2);
         count=0;
    }}
    return pair;
}
