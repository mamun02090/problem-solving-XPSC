

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
        int N;
        cin>>N;
        if(N>6)
            cout<<"GOLD"<<endl;
        else if(N<=6 && N>3)
            cout<<"SILVER"<<endl;
        else cout<<"BRONZE"<<endl;
    }


    return 0;
}



