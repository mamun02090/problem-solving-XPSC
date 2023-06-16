
#include<bits/stdc++.h>

using namespace std;



int main()
{
    int a,b;
    cin>>a>>b;
    queue<int>q;
    for(int i=a; i<=b; i++)
    {
       string s = to_string(i);
       bool isFourOrSeven = true;
       for(int j=0; j<s.size(); j++)
       {
           if(s[j]!='4' && s[j]!='7')
           {
               isFourOrSeven = false;
               break;
           }

       }
       if(isFourOrSeven)
        q.push(i);

    }
    if(q.empty())
        cout<<-1<<endl;
    else{
        while(!q.empty())
        {
            cout<<q.front()<<" ";
            q.pop();
        }
        cout<<endl;
    }


    return 0;
}


