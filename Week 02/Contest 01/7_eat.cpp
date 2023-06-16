


#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<int> q;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
        }
        int aliceCandies = arr[n];

        int bobCandies = arr[1];
        map<int, int> mpBob;
        map<int, int> mpAlice;
        mpBob[1] = bobCandies;
        for(int i=2; i<=n; i++)
        {
            bobCandies+= arr[i];
            mpBob[i]= bobCandies;
        }
        int j=1;
        mpAlice[1] = aliceCandies;
        for(int i=n-1; i>=1; i--)
        {
            aliceCandies+= arr[i];
            j++;
            mpAlice[j]= aliceCandies;

        }


        auto it = mpBob.begin();
        auto it2 = mpAlice.rend();
        int ans =0;
        while(it!=mpBob.end())
        {
            int a = it->first;

            auto itr3 = mpAlice.find(a);
            if(itr3 != mpAlice.end())
                ans = it->first + itr3->first;
            it++;
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
