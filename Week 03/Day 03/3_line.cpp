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
        vector<long long> v(n+1) ;
        unordered_set<string> mp;
        long long sum=0;
        for(long long i=1; i<=n; i++)
        {
            char ch;
            cin>>ch;
            if(ch=='L')
                v[i] = i-1;
            else v[i] = n-i;
            sum+=v[i];

        }
        long long maxSum = 0;
        for(int i=1; i<=n/2; i++)
        {
            maxSum+= (n-i)*2;
        }
        if(n%2!=0)
        {
            maxSum+= (n/2);
        }
        cout<<maxSum<<endl;
        long long ans=sum;
        for(int m=0; m<n; m++)
        {
            long long j=1;
            if(ans>=maxSum)
            {
                ans=maxSum;


            }
            else
            {
                while(j<=n)
                {

                    long long s1=0, s2=0;
                    long long tmpans = ans-v[j];
                    if(v[j]<j-1)
                    {
                        s1 = j-1;
                    }
                    if(v[j]<n-j)
                    {
                        s2 = n-j;
                    }
                    if(s1>s2)
                    {
                        v[j] = s1;
                    }
                    else v[j] = s2;
                    if(tmpans+v[j]>ans)
                    {
                        ans = tmpans+v[j];
                        break;
                    }

                    j++;
                    if(maxSum==ans)
                    {
                        ans=maxSum;
                        break;

                    }

                }
            }

            cout<<ans<<" ";
        }


        cout<<endl;

    }


    return 0;
}



