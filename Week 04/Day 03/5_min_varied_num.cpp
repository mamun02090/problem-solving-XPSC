


#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--)
    {
        int s;
        cin>>s;
        int i=1, j=2;
        string str ="";
        for(int i=9; i>=1; i--)
        {
            if(s-i>0)
            {
                str+= i+'0';
                s-=i;
            }
            else if(s-i==0)
               {
                   str+=i+'0';
                   break;
               }
        }

        for(int i=str.size()-1; i>=0; i--)
            cout<<str[i];
        cout<<endl;
    }
    return 0;
}




