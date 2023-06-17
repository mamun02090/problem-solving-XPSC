
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<string> q;
    while(T--)
    {
        string s;
        cin>>s;
        for(int i=0; i<3; i++)
        {
            s[i] = tolower(s[i]);
        }


        if(s == "yes")
            q.push("YES");
        else q.push("NO");


    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}


