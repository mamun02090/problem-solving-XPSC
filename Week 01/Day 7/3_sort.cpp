#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int freq[26]={0};
    for(int i=0; i<N; i++)
        {
            char ch;
            cin>>ch;
            freq[ch-'a']++;
        }

    for(int i=0;i<26; i++ )
    {
        while(freq[i]>0)
        {
            cout<<char('a'+i);
            freq[i]--;
            N--;
            if(N==0)
                break;

        }
        if(N==0)
            break;
    }


    return 0;
}
