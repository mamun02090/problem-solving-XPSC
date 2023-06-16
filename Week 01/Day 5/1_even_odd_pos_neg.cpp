#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int num[N];
    for(int i=0; i<N; i++)
    {
        cin>>num[i];
    }
    vector<pair<string, int>>pr(4);
    pr[0].first = "Even";
    pr[1].first = "Odd";
    pr[2].first = "Positive";
    pr[3].first = "Negative";
    for(int i=0; i<4; i++)
        pr[i].second = 0;
//    mp["Negative"] = 0;
//
//    mp["Positive"] = 0;
//      mp["Odd"] = 0;
//    mp["Even"]=0;

    for(int i=0; i<N; i++)
    {
        if(num[i]%2==0)
            pr[0].second++;
        if(num[i]%2!=0)
            pr[1].second++;
        if(num[i]>0)
           pr[2].second++;
        if(num[i]<0)
            pr[3].second++;
    }
//    auto it = mp.begin();
//    while(it!=mp.end())
//    {
//        cout<<it->first<<": "<<it->second<<endl;
//        it++;
//    }
    for(int i=0; i<4; i++)
    {
        cout<<pr[i].first<<": "<<pr[i].second<<endl;
    }



    return 0;
}





