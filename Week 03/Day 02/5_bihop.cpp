


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<pair<int, int>> q;
    while(T--)
    {
        int arr[9][9];
        for(int i=1; i<=8; i++)
        {
            string s;
            cin>>s;
            for(int j=0; j<8; j++)
            {
                if(s[j]=='.')
                    arr[i][j+1] = 0;
                else arr[i][j+1] = 1;
            }
        }
        pair<int, int> pr;
        for(int i=1; i<=8; i++)
        {

            for(int j=1; j<=8; j++)
            {
                if(arr[i][j]==1 && arr[i-1][j+1]==1 && arr[i+1][j+1]==1 && arr[i-1][j-1]==1 && arr[i+1][j-1]==1)
                    pr = {i, j};

            }
        }
        q.push(pr);

    }

    while(!q.empty())
    {
        auto pr = q.front();
        cout<<pr.first<<" "<<pr.second<<endl;
        q.pop();
    }
    return 0;
}


