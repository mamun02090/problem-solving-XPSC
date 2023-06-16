#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b)
{
    while(1)
    {
        int tmp = a;
        a = b;
        b = tmp%a;
        if(b==0)
            return a;
    }
}

int main()
{
    int N;
    cin>>N;
    int ans =0;
    for(int i =1; i<=N; i++)
        for(int j =1; j<=N; j++)
        {
            int gcd = GCD(i, j);

            for(int k =1; k<=N; k++)
            {
                ans+= GCD(gcd, k);
            }
        }
    cout<<ans<<endl;


    return 0;
}

