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
        int l, r;
        cin>>l>>r;
        int ans = INT_MIN;
        int lucky = r;
        while(r>=l)
        {
            string str = to_string(r);
            sort(str.begin(), str.end());
            
            int tmp = str[str.size()-1] - str[0];
            if(tmp>ans) lucky = r;
            r--;
            ans = max(ans, tmp);
            
            if(ans==9) break;
        }
       
       cout<<lucky<<endl;  
    }


    return 0;
}


