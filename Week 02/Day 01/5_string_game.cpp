#include<bits/stdc++.h>


using namespace std;

/*
3
1
abc
def
abc
3
orz for qaq
qaq orz for
cod for ces
5
iat roc hem ica lly
bac ter iol ogi sts
bac roc lly iol iat
*/

int main()
{
    int T;
    cin>>T;
    queue<vector<int>>q;
    while(T--)
    {
        int N;
        cin>>N;
        string s;
        map<string, int> mp, mp1, mp2, mp3;
        vector<int> ans(3,0);
        for(int i=0; i<N*3; i++)
        {
            cin>>s;
            if(i<N)
                mp1[s]++;
            else if(i<2*N)
                mp2[s]++;
            else mp3[s]++;
            if(mp[s]==2)
            {
                mp.erase(s);
                continue;
            }
            mp[s]++;
        }
        for(auto it: mp1 )
        {

            if(mp.find(it.first)!=mp.end())
            {
                if(mp[it.first]==2)
                    ans[0]++;
                else ans[0]+=3;
//                mp.erase(it.first);
            }
//            cout<<"mp1 "<<T<<" "<<it.first<<" "<<it.second<<endl;
        }
        for(auto it: mp2 )
        {
            auto val = mp.find(it.first);
            if(val!=mp.end())
            {
                if(mp[it.first]==2)
                    ans[1]++;
                else ans[1]+=3;
//                mp.erase(it.first);
            }
        }
        for(auto it: mp3 )
        {
            auto val = mp.find(it.first);
            if(val!=mp.end())
            {
                if(mp[it.first]==2)
                    ans[2]++;
                else ans[2]+=3;
//                mp.erase(it.first);
            }


        }


        q.push(ans);
    }

    while(!q.empty())
    {
        vector<int> v = q.front();
        for(int i=0; i<3; i++)
            cout<<v[i]<<" ";
        cout<<endl;
        q.pop();
    }
    return 0;
}


