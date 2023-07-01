
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
        int a, b, c;
        cin>>a>>b>>c;
        int timeA = a-1;
        long long timeB = 0;
        if(b>c)
        {
            timeB = b-1;
        }else{
            timeB= 2*c-b-1;
        }
        if(timeA<timeB)
        {
            cout<<1<<endl;
        }else if(timeA>timeB)
            cout<<2<<endl;
        else cout<<3<<endl;


    }
    return 0;
}




