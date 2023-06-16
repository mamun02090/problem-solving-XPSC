
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int S, N;
    cin>>S>>N;
    int  count_num=0;
    for(int i=0; i<=S; i++)
        for(int j=0; j<=S; j++)
            for(int k=0; k<=S; k++)
            {
                if(i+j+k<=S && i*j*k<=N)
                    count_num++;

            }
    cout<<count_num<<endl;
    return 0;
}
