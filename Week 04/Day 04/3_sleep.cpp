




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
        int n, h, m;
        cin>>n>>h>>m;
        int bedTime = h*60+m;
        set<int> st;
        for(int i=0; i<n; i++)
        {
            int a, b;
            cin>>a>>b;
            int alarmTime = a*60+b;
            if(alarmTime<bedTime)
                st.insert(1440-bedTime+alarmTime);
            else{
                st.insert(alarmTime- bedTime);
            }
        }
        auto it = st.begin();
        int ans = *it;
        int ansHour = ans/60;
        int ansMinute = ans%60;
        cout<<ansHour<<" "<<ansMinute<<endl;


    }
    return 0;
}




