


#include <bits/stdc++.h>

using namespace std;

long long xorRange(long long n) {
    int mod = n % 4;
    if (mod == 0) return n;
    if (mod == 1) return 1;
    if (mod == 2) return n + 1;
    return 0;
}
int main()
{
    long long A, B;
    cin>>A>>B;
    if(A==B)
    {
        cout<<A<<endl;
        return 0;
    }
    long long xorA = xorRange(A - 1);
    long long xorB = xorRange(B);

    cout<<(xorA^xorB)<<endl;
    return 0;
}


