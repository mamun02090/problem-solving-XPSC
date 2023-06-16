#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<int> q;
    while(T--)
    {
        int n;
        cin>>n;
        map<int, int>mp;
        long long ans =0;
        for(int i=1; i<=n; i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        int minDigit = mp.begin()->first;
        for(auto it: mp)
        {
            int key = it.first;
            int val = it.second;
            ans += (key-minDigit)*val;
        }
        q.push(ans);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}


