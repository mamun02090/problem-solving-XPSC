#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    queue<int> aq;
    while(t--)
    {
        long long N, K, q;
        cin>>N>>K>>q;
        long long arr[N];
        for(int i=0; i<N; i++)
        {
            cin>>arr[i];
        }
        int j=0;
        int ans = 0;
        int m=0;
        while(j<N)
        {

            if(arr[j]<=q)
            {
                if(m<K-1)
                {
                    m++;
                    j++;
                }
                else
                {
                    ans++;
                    int i=2;
                    j++;
                    while(arr[j]<=q)
                    {
                        ans+=i;


                        i++;
                        j++;
                    }
                    m =0;


                }
            }
            else
            {
                j++;
            }
        }
        aq.push(ans);


    }
    while(!aq.empty())
    {
        cout<<aq.front()<<endl;
        aq.pop();
    }

    return 0;
}









