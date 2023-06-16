#include<bits/stdc++.h>

using namespace std;

int main()
{
    string txt, pat;
    cin>>txt;
    cin>>pat;

    int N = txt.size();
    int K = pat.size();
    int patFreq[26] = {0};
    int subTxtFreq[26] = {0};
    for(int i=0; i<pat.size(); i++)
    {
        patFreq[pat[i] - 'a']++;
    }
    int i =0, j=0, ans=0;
    while(j<N)
    {
        subTxtFreq[txt[j]- 'a']++;
        //window check
        if(j<K-1) j++;
        else
        {
            bool isAnagram = true;
            for(int i=0; i<26; i++)
            {
                if(patFreq[i]!=subTxtFreq[i])
                    isAnagram = false;
            }
            if(isAnagram) ans++;
           subTxtFreq[txt[i]- 'a']--;
           i++;
           j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}

