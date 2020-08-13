//Day 6: Let's Review
#include<bits/stdc++.h>
using namespace std;
void st(string& s)
{
    int l = s.length();
    char c[l+1];
    string odd, even;
    strcpy(c, s.c_str());
    for(int i=0;i<l;i++)
    {
        if(i%2 != 0) odd+=c[i];
        else even+=c[i];
    }
    cout<<even<<" "<<odd<<endl;
}
int main()
{
    int t;
    string s1;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>s1;
        st(s1);
    }
    return 0;
}
