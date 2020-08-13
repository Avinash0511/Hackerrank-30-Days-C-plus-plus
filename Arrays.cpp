//Day 7: Arrays
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, num;
    vector<int> s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        s.push_back(num);
    }
    for(auto i=s.rbegin(); i!=s.rend(); i++)
    {
        cout<<*i<<" ";
    }
    return 0;
}
