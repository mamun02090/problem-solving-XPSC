#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<int, int> mp;
    mp.insert({1, 1});
    for(int i=2; i<15; i++)
        mp[i] = i;

    auto it = mp.begin();
    mp.erase(++it);
    auto itr = mp.begin();
    mp.erase(3);
    while(itr!= mp.end())
    {
        cout<<itr->first<<" "<<itr->second<<endl;
        ++itr;
    }
    auto itrange = mp.equal_range(14);
    cout<<itrange.first->first<<" : "<<itrange.first->second<<endl;
    cout<<itrange.second->first<<" : "<<itrange.second->second<<endl;
    cout<<mp[3]<<endl;
    cout<<it->first<<" "<<it->second<<endl;
    return 0;
}
