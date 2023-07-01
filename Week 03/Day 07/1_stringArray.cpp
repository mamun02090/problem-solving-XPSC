


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
        int N;
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        string s;
        cin>>s;


        char str[N];
        for(int i=0; i<N; i++)
            str[i] = '0';
        for(int i=0; i<N; i++)
        {
            if(str[i]=='0')
            {
                str[i]=s[i];
                for(int j=i+1; j<N; j++)
                {
                    if(arr[i]==arr[j])
                        str[j] = s[i];
                }

            }


        }


        string s2 = "";
        for(int i=0; i<N; i++)
            s2+=str[i];
        if(s2==s)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }


    return 0;
}


