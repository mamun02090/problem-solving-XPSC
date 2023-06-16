#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long N, K;
    cin>>N;
    long long arr[N];
    for(int i=0; i<N; i++)
        cin>>arr[i];
    cin>>K;


    queue<long long>q;
    long long i=0, j=0;
    //-8 2 3 -6 10
    vector<long long> negativeElement;

    while(j<N)
    {
        if(arr[j]<0)
            q.push(arr[j]);
        //window check
        if(j<K-1)
            j++;
        else
        {
            if(q.empty()) negativeElement.push_back(0);
            else negativeElement.push_back(q.front());
            if(arr[i]<0)
                q.pop();
            i++;
            j++;
        }
    }
    for(int i=0; i<negativeElement.size(); i++)
        cout<<negativeElement[i]<<" ";
    return 0;
}

