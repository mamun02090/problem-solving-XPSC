#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int ebony = c-b;
    int ivory = c-a;
    if(ebony%a==0 || ivory%b==0)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

