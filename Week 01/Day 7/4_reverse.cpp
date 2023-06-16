
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int sz = s.size();
    string ans = "";
    for(int i=0; i<=sz; i++)
    {

        if(s[i]== ' ' || i==sz)
        {
            for(int j=ans.size()-1; j>=0; j--)
            {
                cout<<ans[j];
            }
            if(i!=sz)
                cout<<" ";
            ans = "";

        }
        else{
            ans+= s[i];
        }

    }



    return 0;
}



