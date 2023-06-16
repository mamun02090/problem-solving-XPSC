
#include<bits/stdc++.h>


using namespace std;

int digitCounts(int n, int x)
{
    int ans =0;
    while(n>0)
    {
        ans++;
        n = n/x;
    }
    return ans;
}

int main()
{
    int N;
    cin>>N;
    vector<long long> v;
    long long  arr[N+1];
    for(int i =0; i<N; i++)
    {
        int a;
        cin>>a;
        arr[i] = a;

        v.push_back(a);
    }
    sort(v.begin(), v.end());
    int k;
    cin>>k;
    vector<long long> prefixSum1(N+1, 0);
    for (int i = 1; i <= N; i++)
    {
        prefixSum1[i] = prefixSum1[i - 1] + arr[i - 1];
    }
    vector<long long> prefixSum2(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        prefixSum2[i] = prefixSum2[i - 1] + v[i - 1];
    }
    queue<long long> q;
    while(k--)
    {
        int t, a, b;
        cin>>t>>a>>b;
        long long sum = 0;
        if(t!=1)
        {
            if(a==1)
            {
                 sum = prefixSum2[b];
            }
            else sum = prefixSum2[b] - prefixSum2[a-1];
        }
        else
        {
            if(a==1)
            {
                 sum = prefixSum1[b];
            }
            else sum = prefixSum1[b] - prefixSum1[a-1];
        }
        q.push(sum);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}



