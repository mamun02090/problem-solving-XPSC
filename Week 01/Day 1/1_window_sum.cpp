#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, K; cin>>N>>K;
    int arr[N];
    for(int i=0; i<N; i++)
        cin>>arr[i];
    int i=0, j=0;
    long sum=0, mx = INT_MIN;
    while(j<N)
    {
        sum += arr[j];
        //window check
        if(j<K-1)
            j++;
        else{
           mx = max(mx, sum);
           sum -= arr[i];
           i++;
           j++;
        }
    }
    cout<<mx<<endl;
    return 0;
}
