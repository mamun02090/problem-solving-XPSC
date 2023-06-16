
#include<bits/stdc++.h>


using namespace std;

int solve(vector<int> a, int k, int n)
{

    int ans =0;
    int sum = 0;
    unordered_map<int, int>mp;
    for(int i=0; i<N; i++)
    {
        sum+= A[i];

        if(sum==K)
        {
            ans = max(ans, i+1);
        }
        if(mp.find(sum -K) != mp.end())
        {
            int index = mp[sum-K];


            ans = max(ans, i- index);

        }
        if(mp.find(sum) == mp.end())
        {
            mp[sum]=i;

        }

    }
    return ans;
}

int main()
{
    int N;
    long long K;
    cin>>N>>K;
    vector<int> v;
    for(int i=0; i<N; i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cout<<solve(v, K, N)<<endl;
    return 0;
}
