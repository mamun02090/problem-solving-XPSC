#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<int> q;
    while(T--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans = 0;
        if(a<b)
            ans++;
        if(a<c)
            ans++;
        if(a<d)
            ans++;
        q.push(ans);


    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}


