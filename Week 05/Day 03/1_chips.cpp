#include <bits/stdc++.h>
#include <map>
#include <cstdlib>
 
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int ans = INT_MAX;
        for(int i=0; i<n; i++){
            int cnt = 0;
           for(int j=0; j<n; j++){
            if(abs(arr[i] - arr[j])%2!=0){
                cnt++;
                
            }

           }
           ans = min(ans, cnt);
        }
        cout<<ans<<endl;


    return 0;
}
