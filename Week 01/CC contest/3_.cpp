#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int T;
    cin>>T;
    queue<string>q;
    while(T--)
    {
        int N, M;
        cin>>N>> M;
        int tmp=N;
        int tmp2 =M;
        bool isEqual = false;
        if(N==M)
        {
            isEqual = true;
        }
        else
        {
            while(tmp>0 || tmp2>0)
            {
                if(tmp-1==tmp2+1)
                {
                    isEqual = true;
                    break;
                }

                if(tmp2-1==tmp+3)
                {
                    isEqual = true;
                    break;
                }
                tmp--;
                tmp2--;
            }
        }

        if(isEqual) cout<<"tue"<<endl;
        if(!isEqual) q.push("NO");
        else q.push("YES");
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}
