#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, M;
    cin>>N>>M;
    int arr[N+1][M+1];
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++)
            cin>>arr[i][j];

    int x;
    cin>>x;
    for(int i=1; i<=N; i++)
        for(int j=1; j<=M; j++)
            {
                if(arr[i][j]==x)
                {
                    cout<<"will not take number"<<endl;
                    return 0;
                }
            }
   cout<<"will take number"<<endl;

    return 0;
}

