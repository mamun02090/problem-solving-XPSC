
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> v;
    for(int i=0; i<N; i++)
    {
        int n;
        cin>>n;

        if(n==0)
        {
            reverse(v.begin(), v.end());

        }
        v.push_back(n);
    }
    for(int i=0; i<N; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    return 0;
}
