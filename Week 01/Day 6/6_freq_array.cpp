#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin>>N>>M;
    int arr[N];
    for(int i=1; i<=N; i++)
        cin>>arr[i];
    int freqarr[M+1] = {0};
    for(int i=1; i<=N; i++)
    {
        freqarr[arr[i]]++;
    }
    for(int i=1; i<=M; i++)
        cout<<freqarr[i]<<endl;
    return 0;
}
