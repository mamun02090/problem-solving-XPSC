#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<string> q;
    while(T--)
    {
        int N, B;
        cin>>N>>B;
        int arr[N];

        for(int i=0; i<N; i++)
        {
            cin>>arr[i];

        }
        int i=0, j=0;
        long sum=0, mx = INT_MIN;
        int m =1;
        bool isPossible =false;
        while(j<N)
        {


            if(j<m)
            {
                j++;
            }
            else
            {
                if((arr[i] & arr[j]) == (j-i+1) && i!=j)
                {
                    isPossible = true;
                    break;
                }

                if(m==N-1)
                {
                    i++;
                    j=i;
                }
                else
                {
                    m++;
                }


            }
        }
        if(isPossible)
            q.push("YES");
        else q.push("NO");


    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}



