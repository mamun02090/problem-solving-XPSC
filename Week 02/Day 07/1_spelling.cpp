#include <bits/stdc++.h>

using namespace std;


int main()
{
    int T;
    cin>>T;
    queue<string> q;
    while(T--)
    {
        int N;
        cin>>N;



        string s;
        cin>>s;
        bool isCorrect = true;
        if(N!=5)
        {
            isCorrect = false;
        }
        else
        {
            sort(s.begin(), s.end());
            if(s!= "Timru")
                isCorrect = false;

        }

        if(isCorrect) q.push("YES");
        else q.push("NO");
    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }


    return 0;
}

