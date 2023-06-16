
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    int pos = s.find("EGYPT", 0);

    while(pos!= s.npos)
    {
        s.replace(pos, 5, " ");

        pos = s.find("EGYPT", 0);

    }
    cout<<s<<endl;


    return 0;
}



