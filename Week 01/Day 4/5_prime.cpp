
#include<bits/stdc++.h>

using namespace std;
bool checkPrime(int N)
{
    if(N==1) return false;
    if(N==2) return true;
    for(int i=2; i<=ceil(sqrt(N)); i++)
    {
        if(N%i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int N;
    cin>>N;
    for(int i= 1; i<=N; i++)
    {
        if(checkPrime(i))
            cout<<i<<" ";
    }

    return 0;
}






