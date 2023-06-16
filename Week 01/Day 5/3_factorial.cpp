
#include<bits/stdc++.h>

using namespace std;

long long factorial(int n)
{
    if(n<=1)
        return 1;
    return n*factorial(n-1);
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        cout<<factorial(N)<<endl;

    }

    return 0;
}
