#include <bits/stdc++.h>
#include <map>

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
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int arr2[n];
        for(int i=0; i<n; i++){
            cin>>arr2[i];
        }
        multimap<int, int> mp;
        for(int i=0; i<n; i++){
            mp.insert(make_pair(arr[i], arr2[i]));
        }
        auto it = mp.begin();
        int ans = k;
        while(it != mp.end()){
            if(it->first<=k){
                ans+= it->second;
                k+= it->second;
            }

            it++;
            if(it != mp.end()){
                if(it->first>k){
                break;
            }
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}


