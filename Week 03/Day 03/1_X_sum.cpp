#include <bits/stdc++.h>

using namespace std;

int arr[202][202];
int xSum( int x, int y, int n, int m)
{
    int tmpX = x, tmpY =y;
    int sum =0;

    for(int i = x; i>=1; i--)
    {
        sum= sum+ arr[i][tmpY--];
        if(tmpY==0)
            break;
    }
    tmpY = y+1;
    for(int i = x+1; i<=n; i++)
    {
        sum+= arr[i][tmpY++];
        if(tmpY>m)
            break;
    }

    tmpY =y+1;
    for(int i = x-1; i>=1; i--)
    {
        sum+= arr[i][tmpY++];
        if(tmpY>m)
            break;
    }
    tmpY =y-1;
    for(int i = x+1; i<=n; i++)
    {
        sum+= arr[i][tmpY--];
        if(tmpY==0)
            break;
    }

    return sum;
}
int main()
{
    int T;
    cin>>T;
    queue<int> q;
    while(T--)
    {
        int n, m;

        cin>>n>>m;
        for(int i=1; i<=n+5; i++)
        {
            for(int j=1; j<=m+5; j++)
            {
                arr[i][j]=0;
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cin>>arr[i][j];
            }
        }



        int maximumSum = 0;

        for(int i=1; i<=n; i++)
        {

            for(int j=1; j<=m; j++)
            {


                int ans = xSum( i, j, n, m);
                maximumSum = max(maximumSum, ans);

            }
        }
        q.push(maximumSum);

    }

    while(!q.empty())
    {

        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}



