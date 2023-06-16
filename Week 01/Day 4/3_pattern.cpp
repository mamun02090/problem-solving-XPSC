

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    for(int i = 0; i<N; i++)
    {
        for(int k=i+1; k<N; k++)
            cout<<" ";
        for(int j=2*i+1; j>0; j--)
            cout<<"*";
        cout<<endl;
    }
    for(int i = N-1; i>=0; i--)
    {
        for(int k=i+1; k<N; k++)
            cout<<" ";
        for(int j=2*i+1; j>0; j--)
            cout<<"*";
        cout<<endl;
    }


    return 0;
}




