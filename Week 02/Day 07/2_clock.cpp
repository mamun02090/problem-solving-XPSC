
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string s){
    for(int i=0; i<2; i++)
    {
        if(s[i]!=s[4-i])
            return false;
    }
    return true;
}

string convertToStringTime(int n)
{
    if(n==1440)
        return "00:00";

    int h = n/60;
    int m = n%60;
    string s = "";
    if(h<10)
    {
        s+='0';
        s+= char(h+'0');
    }else{
        s = to_string(h);
    }
    s+=':';
    if(m<10)
    {
        s+='0';
        s+= char(m+'0');
    }else{
        s += to_string(m);
    }
    return s;

}

int main()
{
    int T;
    cin>>T;
    queue<int> q;
    while(T--)
    {
        string s;
        cin>>s;
        int x;
        cin>>x;
        int ans =0;
        int h = 0;
        if(s[0]=='0')
            h = (int)s[1]-'0';
        else{
            h= ((int)s[0]-'0')*10+(int)s[1]- '0';
        }
        int m = 0;
        if(s[3]=='0')
            m = (int)s[4]-'0';
        else{
            m = ((int)s[3]-'0')*10+(int)s[4]- '0';
        }
        int time = h*60+ m;
        int time4 = time;
        time += x;
        while(true)
        {
            if(time>1440)
                time = time - 1440;

            string str = convertToStringTime(time);

            bool isPalin = isPalindrome(str);
            if(isPalin) ans++;
            if(str==s)
                break;
            time = time+x;

        }

        q.push(ans);
    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }


    return 0;
}

