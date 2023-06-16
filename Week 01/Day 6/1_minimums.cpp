
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N, K;
    cin>>N>>K;
    long long arr[N];
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
    }
    int i=0, j=0;
    int tmp= K;
    set<long long>st;
    if(K>N)
        K=N;
    while(j<N)
    {
        st.insert(arr[j]);

        if(j<K-1)
        {
            j++;
        }
        else
        {
            cout<<*st.begin()<<" ";
            st.clear();
            if(j+tmp<N)
                K = j+tmp+1;
            else
                K = N;
            j++;

        }

    }


    return 0;
}








