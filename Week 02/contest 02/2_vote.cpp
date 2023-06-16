#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<long long> q;
    while(T--)
    {
        long long N, M;
        cin>>N>>M;
        q.push((M/2)+1);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}



