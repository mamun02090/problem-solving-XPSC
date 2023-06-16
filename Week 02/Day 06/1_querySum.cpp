

#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n, k;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cin>>k;
    queue<int> q;
    for(int i=0; i<k; i++)
    {
        int a, b;
        cin>>a>>b;
        int sum = 0;
        for(int m=a; m<=b; m++)
        {
            sum+= arr[m];
        }
        q.push(sum);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}


