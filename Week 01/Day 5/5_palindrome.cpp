
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[26] = {0};
    string str = to_string(N);
    int sz = str.size();
    string isPalindrome = "YES";
    for(int i=1; i<=sz/2; i++)
    {
        if(str[i-1] != str[sz-i])
            {
                isPalindrome = "NO";
                break;
            }
    }
    queue<int>st;
    while(N>0)
    {
        st.push(N%10);
        N = N/10;
    }
    while(!st.empty())
    {
        if(st.front()!= 0)
            break;
        st.pop();
    }
    while(!st.empty())
    {
        cout<<st.front();
        st.pop();
    }
    cout<<endl;
    cout<<isPalindrome<<endl;

    return 0;
}






