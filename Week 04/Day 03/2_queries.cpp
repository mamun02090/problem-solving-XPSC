



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
        int n, k;
        cin>>n>>k;
       map< long long, int> firstIndex;
       map< long long, int> lastIndex;
        for(int i=1; i<=n; i++)
        {
            long long a;
            cin>>a;
            if(firstIndex[a]){

            }else{
                firstIndex[a]=i;
            }
            lastIndex[a] = i;
        }

        for(int i=0; i<k; i++)
        {
            long long a,b;
            cin>>a>>b;
            auto it = firstIndex.find(a);
            auto it2 = lastIndex.find(b);

            if(it!=firstIndex.end() && it2!=lastIndex.end() && it->second<it2->second)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
    return 0;
}




