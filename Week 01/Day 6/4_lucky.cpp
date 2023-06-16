#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    multiset<int> ms;
    for(int i=1; i<=N; i++)
    {
        int x;
        cin>>x;
        ms.insert(x);
    }

    int a = *ms.begin();
    int ans = ms.count(a);
    if(ans%2==0)
    {
        cout<<"Unlucky"<<endl;
    }
    else cout<<"Lucky"<<endl;
    return 0;
}

