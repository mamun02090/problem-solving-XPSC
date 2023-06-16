#include<bits/stdc++.h>


using namespace std;

int solve(vector<int> a, long long k)
{
    int sz = a.size();
    int i=0, j=0;
    int ans =0;
    long long sum = 0;
    while(j<sz)
    {
        sum+= a[j];
        if(sum>k)
        {
            while(sum>k)
            {
                sum -= a[i];
                i++;
            }
        }
        if(sum==k)
        {
            ans = max(ans, j-i+1);

        }
        j++;
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
    cout<<solve(v, K)<<endl;
    return 0;
}
