
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int sz = s.size();
    bool isPalindrom = true;
    for(int i=0; i<sz/2; i++)
    {
        if(s[i]!=s[sz-i-1])
            isPalindrom = false;
    }
    if(isPalindrom) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}


