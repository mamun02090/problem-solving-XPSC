


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
        stack<char> sch;

        for(int i=0; i<n; i++)
        {
            char ch;
            cin>>ch;
            char ch2 =tolower(ch);
            if(sch.empty()) sch.push(ch2);
            else if(ch2!=sch.top())
                sch.push(ch2);
        }
        string str = "";
        while(!sch.empty())
        {
            str+= sch.top();
            sch.pop();
        }
        string str2="";
        for(int i=str.size()-1; i>=0; i--)
        {
            str2+= str[i];
        }

        if(str2=="meow")
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }


    return 0;
}


