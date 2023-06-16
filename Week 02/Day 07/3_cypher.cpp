#include <bits/stdc++.h>

using namespace std;


int main()
{
    int T;
    cin>>T;
    queue<vector<int>> q;
    while(T--)
    {
        int N;
        cin>>N;
        vector<int> arr;

        for(int i=0; i<N; i++)
        {
            int a;
            cin>>a;
            arr.push_back(a);
        }

        for(int j=0; j<N; j++)
        {
            int x;
            cin>>x;
            int m = 0;
            for(int i = 0; i<x; i++)
            {


                char y;
                cin>>y;
                if(y=='D')
                {
                    m++;
                }else{
                    m--;

                }
            }
            arr[j]= arr[j]+m;
            if(arr[j]>=10)
                arr[j]= arr[j]%10;
            if(arr[j]<0)
                arr[j] = 10+arr[j];

        }


       q.push(arr);
    }

    while(!q.empty())
    {
        vector<int> v = q.front();
        for(int i: v)
        {
            cout<<i<<" ";

        }
        cout<<endl;
        q.pop();
    }


    return 0;
}


