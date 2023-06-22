



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
        string s1, s2;
        cin>>s1>>s2;

        int sz1 = s1.size();
        int sz2 = s2.size();
         char sch1 = s1[sz1-1];
        char sch2 = s2[sz2-1];

        if(sz1>sz2 && sch1=='L' )
            cout<<">"<<endl;
        else if(sz1>sz2 && sch1=='S' )
            cout<<"<"<<endl;
        else if(sz1<sz2 && sch2=='S')
            cout<<">"<<endl;
        else if(sz1<sz2 && sch2=='L')
            cout<<"<"<<endl;
        else {
                char sh1 = s1[sz1-1];
        char sh2 = s2[sz2-1];
            if(sh1==sh2)
                cout<<"="<<endl;
            else if(sh1=='L')
                cout<<">"<<endl;
            else if(sh1=='M' && sh2=='L')
                cout<<"<"<<endl;
            else if(sh1 == 'M' && sh2=='S')
                cout<<">"<<endl;
            else cout<<"<"<<endl;

        }
    }



return 0;
}


