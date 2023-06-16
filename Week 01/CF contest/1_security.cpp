#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    queue<string> cq;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        string ans;
        char ch = s[0];
        for(int i=1; i<n; i++)
        {
            if(s[i] == ch)
            {
                ans.push_back(s[i]);
                i++;
                ch = s[i];
            }
        }
        cq.push(ans);

    }
    while(!cq.empty())
    {
        cout<<cq.front()<<endl;
        cq.pop();
    }


    return 0;
}






