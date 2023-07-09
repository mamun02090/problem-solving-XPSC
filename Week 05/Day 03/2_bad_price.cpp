#include <bits/stdc++.h>
#include <map>

using namespace std;


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
        vector<int>v;
        for(int i=0; i<n; i++){
            int a;
            cin>>a;
            v.push_back(a);
        }

        int ans = 0;
        int index = 0;
        stack<int> st;
        st.push(v[0]);
        for(int i=1; i<n; i++){
            if(v[i]<v[i-1]){

                if(v[i])
                cout<<index<<" "<<i<<" "<<v[i]<<endl;
                ans += i-index;
                index = i;

            }
                
        }
        cout<<ans<<endl;
        
    }


    return 0;
}


