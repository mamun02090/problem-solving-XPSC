
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans= "";
        for(int i=n-1; i>=0; i--)
        {

        }
        int i=n-1;
        while(i>=0)
        {
            if(s[i]=='0')
            {
                int a = (int)s[i-1]-'0'+((int)s[i-2]-'0')*10;
                ans+= 'a'+a-1;
                i=i-3;
            }else{
                int a = (int)s[i]-'0';
                ans+= 'a'+a-1;
                i--;
            }
        }
        reverse(ans.begin(), ans.end());
        cout<<ans<<endl;


    }
    return 0;
}





