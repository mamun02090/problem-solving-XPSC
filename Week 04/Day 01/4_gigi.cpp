

#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

        int N;
        cin>>N;
        set<string> uq;
        stack<string> st;
        for(int i=0; i<N; i++)
        {
            string s;
            cin>>s;
            uq.insert(s);
            st.push(s);
        }


        int loop = uq.size();
        while(loop>0)
        {
            string s = st.top();
            st.pop();
            if(uq.count(s)!= 0)
            {
                int sz = s.size();
                cout<<s[sz-2]<<s[sz-1];
                uq.erase(s);
                loop--;
            }

        }

        cout<<endl;



    return 0;
}



