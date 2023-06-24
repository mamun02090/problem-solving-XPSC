
#include <bits/stdc++.h>

using namespace std;
/*
1
10
1 1 2 3 3 7 8 9 5 4
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        multiset<int> st;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            st.insert(a);
        }

        int ans =0;

        auto it = st.begin();
        auto it2 = st.end();
        auto tmp = it;

        it2--;
//        while(tmp!=st.end())
//        {
//            cout<<*tmp<<" ";
//            tmp++;
//        }
//        cout<<endl;
        while(st.size()>1)
        {

            int a =  *it2;
            int b = *it;
            ans+=a-b;
            auto tmp1 = it;
            auto tmp2 = it2;
            it++;
            it2--;
            st.erase(tmp1);
            st.erase(tmp2);

        }

        cout<<ans<<" ";
    }


    cout<<endl;

    return 0;
}



