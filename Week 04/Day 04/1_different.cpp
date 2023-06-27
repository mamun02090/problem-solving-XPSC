




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
        int a, b;
        cin>>a>>b;
        set<int> st;
        int i=1, j=1;
        while(1){
            st.insert(i);
            i= i+j;
            j++;
            if(i>b || st.size()==a)
                break;
        }
        int tmp=b;
        while(st.size()<a)
        {
            if(st.count(b)==0)
                st.insert(b);
            b--;
        }
        auto it = st.begin();
        while(it!=st.end())
        {
            cout<<*it<<" ";
            it++;
        }
        cout<<endl;


    }
    return 0;
}





