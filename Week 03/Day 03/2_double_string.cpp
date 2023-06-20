
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
        vector<string> str;
        unordered_set<string> mp;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            str.push_back(s);
            mp.insert(s);
        }
        string ans = "";
        for(int i=0; i<n; i++)
        {

            bool isEqual = false;

            for(int j=0; j<str[i].size(); j++)
            {
               for(int k=j+1; k<str[i].size(); k++)
               {
                   string substr1 = str[i].substr(0, j+1);
                   string substr2 = str[i].substr(j+1, str[i].size());
                   if(mp.count(substr1) && mp.count(substr2))
                    isEqual = true;

               }
            }
            if(isEqual)
            {
                ans = ans+ '1';
            }else ans+='0';
        }
        cout<<ans<<endl;

    }


    return 0;
}

/*
1
10
oxx
xo
xoo
ooo
xox
x
o
oxo
o
xx
*/


