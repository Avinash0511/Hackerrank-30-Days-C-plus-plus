//Day 10: Binary Numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t=0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(n>0)
    {
        n = (n & (n>>1));
        t++;
    }
    cout<<t;
    return 0;
}
