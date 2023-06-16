
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
        map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            mp[a]++;
        }
        auto it = mp.begin();

        bool isFound = false;
        while(it!=mp.end())
        {
            if(it->second>=3)
            {
                isFound = true;
                break;
            }
            it++;
        }
        if(isFound)
            q.push(it->first);
        else q.push(-1);

    }
    while(!q.empty())
    {

        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}
