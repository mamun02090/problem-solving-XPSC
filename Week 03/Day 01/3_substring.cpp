

#include<bits/stdc++.h>


using namespace std;

int solve(string s, int k)
{
    int i=0, j=0;
    int sz = s.size();
    int ans =0, unq=0;
    int freq[26] = {0};

    while(j<sz)
    {
        char ch = s[j];

        if( freq[ch-'a'] == 0)
        {
            unq++;
        }
        freq[ch-'a']++;
        if(unq>k)
        {
            while(unq>k)
            {
                freq[s[i] - 'a']--;
                if(freq[s[i] - 'a']==0)
                    unq--;
                i++;
            }
        }
        if(unq==k)
        {
            ans = max(ans, j-i+1);
        }
        j++;
    }
    return ans;
}


//aabacbebebe
int main()
{
    string s;
    int K;
    cin>>s>>K;

    cout<<solve(s, K)<<endl;
    return 0;
}
