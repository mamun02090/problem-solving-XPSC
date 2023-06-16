#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<string> q;
    while(T--)
    {
        int n;
        cin>>n;
        string s1, s2;
        cin>>s1>>s2;
        int pos = s1.find("B", 0);
        int pos2 = s2.find("B", 0);
        while(pos!=s1.npos)
        {
            s1.replace(pos, 1, "G");
            pos = s1.find("B", pos);
        }
        while(pos2!=s2.npos)
        {
            s2.replace(pos2, 1, "G");
            pos2 = s2.find("B", pos2);
        }

        if(s1==s2) q.push("YES");
        else q.push("NO");
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}



