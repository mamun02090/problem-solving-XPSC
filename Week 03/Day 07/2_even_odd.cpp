

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
        int N, q;
        cin>>N>>q;
        long long arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        long long q1 = 0;
        long long q2 = 0;
        int c1 =0;
        int c2=0;
        for(int i=0; i<N; i++)
        {
            if(arr[i]%2==0)
            {
                q2+=arr[i];
                c2++;
            }
            else
            {
                q1+=arr[i];
                c1++;
            }
        }
        cout<<q1<<" "<<q2<<" c1"<<" " <<c2<<endl;
        for(int i=0; i<q; i++)
        {
            int a, x;
            cin>>a>>x;
            if(a==1)
            {
                q1 = q1+ c1*x;
            }
            else
            {
                q2 = q2+ c2*x;
            }
            cout<<q1+q2<<endl;


        }

    }


    return 0;
}


