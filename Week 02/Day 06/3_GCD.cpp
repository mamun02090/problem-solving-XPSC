

#include<bits/stdc++.h>


using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    int maxValue = 0;
    for(int i=0; i<N; i++)
    {
        cin>>arr[i];
        if(arr[i]>maxValue)
            maxValue = arr[i];
    }
    int ans =0;
    int digit = arr[0];

    for(int i=2; i<=maxValue; i++)
    {
        int sum =0;
        for(int j=0; j<N; j++)
        {
            if(arr[j]%i==0)
                sum++;

        }
        if(sum>ans){
            ans = sum;
            digit = i;
        }
    }
    cout<<digit<<endl;

    return 0;
}


