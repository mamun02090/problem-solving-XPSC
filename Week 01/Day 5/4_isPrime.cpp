
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    if(N==2)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    if(N<=1)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    for(int i=2; i<= ceil(sqrt(N)); i++)
    {
        if(N%i==0)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}







