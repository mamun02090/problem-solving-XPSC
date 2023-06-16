#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    queue<int> q;
    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=1; i<=N; i++)
            cin>>arr[i];
        int m = INT_MAX;
        for(int i=1; i<=N; i++)
            for(int j=i+1; j<=N; j++)
            {

                int ans = arr[i]+arr[j]+j-i;
                m = min(m, ans);


            }

        q.push(m);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}

