
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    set<int> st;
    for(int i=1; i<=ceil(sqrt(N)); i++)
    {
        if(N%i == 0)
        {
            st.insert(i);
            st.insert(N/i);
        }
    }
    auto it = st.begin();
    while(it!=st.end())
    {
        cout<<*it<<endl;
        it++;
    }



    return 0;
}





