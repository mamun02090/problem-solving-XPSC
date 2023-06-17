

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<int> q;
    while(T--)
    {
        int n, k;
        cin>>n>>k;
        vector<string> v;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }


        int ans = INT_MAX;
        for(int i=0; i<n; i++)
        {

            for(int j=0; j<n; j++)
            {
                if(i==j) continue;
                int sum = 0;
                for(int m=0; m<k; m++)
                {
                    sum+= abs(v[i][m]-v[j][m]);
                }
                ans = min(ans, sum);
            }
        }
        q.push(ans);

    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}


