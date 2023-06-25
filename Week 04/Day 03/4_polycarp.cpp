

#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        set<char> st;
        int ans=0;
        string s;
        cin>>s;
        for(int i=0; i<s.size(); i++)
        {

            st.insert(s[i]);
            if(st.size()==4)
            {
                ans++;
                st.clear();
                st.insert(s[i]);
            }
        }
        if(st.size())
            ans++;

        cout<<ans<<endl;
    }


    return 0;
}




