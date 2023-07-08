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
        long long n;
        cin>>n;
        if(n%2==0) {
            cout<<0<<endl;
            continue;
        }
        string s = to_string(n);
        int ans = -1;
        for(int i=0; i<s.size(); i++){
            int tmp1 =0;
            int tmp2 = 0;
            if((s[i]+'0')%2==0){

                tmp1 = i+1;
            }
            if((s[s.size()-i-1]+'0')%2==0){
                tmp2 = 2;
            }
            if(tmp1 !=0 && tmp2!=0 )
                {
                    ans = min(tmp1, tmp2);
                    break;
                }
            else if(tmp1!=0)
                {
                    ans = tmp1;
                    break;
                }
            else if(tmp2 !=0) {
                ans = tmp2;
                break;
            }


        }
        cout<<ans<<endl;
    }


    return 0;
}


