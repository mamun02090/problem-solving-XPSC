
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    for(int i = 0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            if(i==N/2 && i==j)
                cout<<'X';
            else if(i==j)
                cout<<'\\';
            else if(j == N-i-1)
                cout<<"/";
            else cout<<"*";

        }
        cout<<endl;
    }


    return 0;
}





