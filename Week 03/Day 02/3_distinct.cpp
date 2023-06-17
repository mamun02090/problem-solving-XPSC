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
        set<int> st;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            st.insert(a);
        }
        int sz  = st.size();
        if((n-sz)%2==0)
            q.push(sz);
        else q.push(sz-1);

    }
    while(!q.empty())
    {

        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}






