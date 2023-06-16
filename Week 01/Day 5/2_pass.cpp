
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int s;
    queue<string> q;
    while(1)
    {
        cin>>s;
        if(s== 1999)
        {
            q.push("Correct");
            break;
        }
        q.push("Wrong");
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}





