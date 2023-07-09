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
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int  sum =0;
        for(int i=0; i<n; i++){
            sum+=arr[i];
        }
        if(sum%n==0){
            cout<<sum/n<<endl;
        }else{
            cout<<(sum/n)+1<<endl;
        }
        
    }


    return 0;
}


