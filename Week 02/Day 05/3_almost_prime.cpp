

#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    cin>>n;
    int ans = 0;

    for(int i=3; i<=n; i++)
    {
        vector<int> v;
        for(int j = 2; j<=ceil(sqrt(i)); j++)
        {
            if(i%j==0)
               {
                    v.push_back(j);
                    if((i/j)>ceil(sqrt(i)))
                        v.push_back(i/j);
               }
        }

        //prime check
        int tm=0;
        for(int k=0; k<v.size(); k++)
        {
            bool isPrime = true;
            if(v[k]==2)
            {
                tm++;
                continue;
            }
            for(int j = 2; j<=ceil(sqrt(v[k])); j++)
            {
                if(v[k]%j==0)
                    {
                        isPrime = false;
                        break;
                    }
            }
            if(isPrime)
                tm++;
            if(tm>2)
                break;
        }
        if(tm==2)
            {
                ans++;
            }
    }

    cout<<ans<<endl;
    return 0;
}



