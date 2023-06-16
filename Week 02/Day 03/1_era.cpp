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
        long long ans =0;
        long long max_even = 0;
        int j=1;
        for(int i=1; i<=n; i++)
        {
            long long a;
            cin>>a;
            if(a>j)
            {
                long long tmp= a-j;
                j += tmp+1;
                ans+=tmp;
            }
            else j++;

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


