

#include<bits/stdc++.h>


using namespace std;

int digitCounts(int n, int x)
{
    int ans =0;
    while(n>0)
    {
        ans++;
        n = n/x;
    }
    return ans;
}

int main()
{
    int N, X;
    cin>>N>>X;
    cout<<digitCounts(N, X)<<endl;
    return 0;
}



