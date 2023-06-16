

#include<bits/stdc++.h>


using namespace std;

int sumOfDigit(long long n)
{
    int ans =0;
    while(n>0)
    {

        ans+= n%10;
        n=n/10;
    }
    return ans;
}

int main()
{
    string s;
    cin>>s;
    int ans =0;
    int n = s.size();
    int sum = 0;
    if(n<=1)
    {
        cout<<ans<<endl;
        return 0;
    }
    for(int i=0; i<n; i++)
        sum+= (int)s[i]-'0';
    ans++;
    while(sum>1)
    {

        if(to_string(sum).size()>1)
            ans++;
         sum = sumOfDigit(sum);
         if(to_string(sum).size()==1)
            break;

    }
    cout<<ans<<endl;
    return 0;
}



