
#include<bits/stdc++.h>


using namespace std;

int main()
{
    int T;
    cin>>T;
    queue<string> q;
    while(T--)
    {
       int N;
       cin>>N;
       int omDays = 0;
       int addyDays = 0;
       int tmp = 0;
       int tmp2 =0;
       long long arr[N];
       long long arr2[N];
       for(int i=0; i<N; i++)
       {
           cin>>arr[i];

       }
       for(int i=0; i<N; i++)
       {
           cin>>arr2[i];

       }
       for(int i=0; i<N; i++)
       {
           long long a = arr[i];
           long long b = arr2[i];
           if(a==0)
           {
               omDays=max(tmp, omDays);
               tmp=0;
           }else tmp++;
           if(b==0)
           {
               addyDays=max(tmp2, addyDays);
               tmp2=0;
           }else tmp2++;
       }
       addyDays= max(addyDays, tmp2);
       omDays=max(tmp, omDays);
       if(omDays>addyDays) q.push("OM");
       else if(omDays<addyDays) q.push("ADDY");
       else q.push("DRAW");


    }
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    return 0;
}



