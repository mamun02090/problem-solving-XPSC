

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b, c;
    cin>>a>>b>>c;
    int ans = 0, i = 1;
    while(1)
    {
        if(i*a>(c+0.5))
            break;
        ans += b;
        i++;
    }
    cout<<ans<<endl;


    return 0;
}


