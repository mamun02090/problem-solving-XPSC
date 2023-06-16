#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<int> q;
    while(T--)
    {
        int N;
        cin>>N;
        char str[N];
        for(int i=0; i<N; i++)
            cin>>str[i];
        int freq[26]= {0};
        for(char c: str)
        {
            freq[c-'A']++;
        }
        int ans =0;
        for(int i=0; i<26; i++)
        {
            if(freq[i]>0)
                ans += freq[i]+1;
        }
        q.push(ans);
    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }


    return 0;
}

