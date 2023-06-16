
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<string> q;
    while(T--)
    {
        string st;
        cin>>st;
        int ans = 0;
        int ans2=0;

        for(int i=0; i<st.size(); i++)
        {
            int a = (int)st[i]-'0';
            if(i<=2)
                ans+=a;
            else ans2+=a;
        }
        if(ans ==ans2)
            q.push("YES");
        else
            q.push("NO");

    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}




