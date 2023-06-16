

#include<bits/stdc++.h>


using namespace std;

int main()
{
    int y;
    cin>>y;
    while(1)
    {
        y++;
        string st = to_string(y);
        set<char> s;
        for(int i=0; i<st.size(); i++)
        {
            s.insert(st[i]);
        }
        if(s.size()==4)
            break;

    }
    cout<<y<<endl;
    return 0;
}


