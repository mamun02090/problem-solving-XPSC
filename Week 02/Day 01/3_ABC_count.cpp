#include<bits/stdc++.h>


using namespace std;

int main()
{
    int N;
    cin>>N;
    string s;
    cin>>s;
    int pos = s.find("ABC", 0);
    int sz = s.size();
    while(pos!=s.npos)
    {
        s.replace(pos, 2, "");
        pos = s.find("ABC", 0);
    }
    int sz2 = s.size();

    cout<<(sz-sz2)/2<<endl;
    return 0;
}

