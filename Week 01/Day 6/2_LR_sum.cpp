
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<long long> q;
    while(T--)
    {
        long long L, R;
        cin>>L>>R;
        long long tp;
        if(L>R)
        {
            tp=L;
            L= R;
            R = tp;

        }
        L--;
        long long ans = (R*(R+1)/2) - (L*(L+1)/2);
        q.push(ans);

    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }


    return 0;
}
