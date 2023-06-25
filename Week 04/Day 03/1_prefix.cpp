

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
        long long n;
        cin>>n;
        set<int> st;
        vector<int> vec;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
//            st.insert(a);
            vec.push_back(a);
        }
        int ans=0;
        for(int i=n-1; i>=0; i--)
        {

            st.insert(vec[i]);
            if(st.size()==ans)
                break;
            ans++;
        }



        cout<<n-ans<<endl;
    }


    return 0;
}



