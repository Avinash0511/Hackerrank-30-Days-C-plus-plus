//Day 8: Dictionaries and Maps
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, val;
    string name;
    cin>>n;
    map<string, int> m;
    for(int i=0;i<n;i++)
    {
        cin>>name>>val;
        if(m.find(name) == m.end())
            m.insert(make_pair(name,val));
        else
            m[name]+=val;
    }
    while(cin>>name)
    {
        if(m.find(name) != m.end())
            cout<<name<<"="<<m[name]<<endl;
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}
