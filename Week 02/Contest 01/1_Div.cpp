#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<int> q;
    while(T--)
    {
        int n;
        cin>>n;
        if(n>=1900)
            q.push(1);
        else if(n<1900 && n>=1600)
            q.push(2);
        else if(n<1600 && n>=1400)
            q.push(3);
        else q.push(4);

    }
    while(!q.empty())
    {
        cout<<"Division "<<q.front()<<endl;
        q.pop();
    }
    return 0;
}




