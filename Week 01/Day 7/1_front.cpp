#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    deque<long long> dq;
    for(int i=0; i<N; i++)
    {
        int a;
        cin>>a;
        dq.push_back(a);
    }
    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
        if(!dq.empty())
        {
            cout<<dq.back()<<" ";
            dq.pop_back();
        }
    }
    cout<<endl;

    return 0;
}


