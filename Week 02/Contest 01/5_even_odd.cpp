

#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<string> q;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        bool isEvenOdd = true;
        int even =0;
        int odd = 0;
        if(arr[1]%2!=0) odd = 1;
        if(arr[2]%2!=0) even = 1;


        for(int i=3; i<=n; i++)
        {
            if(i%2==0)
            {
                if(arr[i]%2 != even)
                {
                    isEvenOdd = false;
                    break;
                }
            }else{
                if(arr[i]%2 != odd)
                {
                    isEvenOdd = false;
                    break;
                }
            }
        }


        if(isEvenOdd)
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
