#include<bits/stdc++.h>

using namespace std;


int main()
{
    int n, k; cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    int i=0, j=0;
    vector<int> q;
    multiset<int > mset;
    while(j<n)
    {
        mset.insert(arr[j]);

        //window check
        if(j<k-1)
            j++;
        else
        {
            auto itr = mset.rbegin();
            q.push_back(*itr);
            auto itr2 = mset.find(arr[i]);
            mset.erase(itr2);

           i++;
           j++;
        }
    }
    for(int i =0; i<q.size(); i++)
        cout<<q[i]<<" ";
    return 0;
}

