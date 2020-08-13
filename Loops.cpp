//Day 5: Loops
#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n, temp;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=1;i<=10;i++)
    {
        temp = n*i;
        cout<<n<<" x "<<i<<" = "<<temp<<endl;
    }
    return 0;
}
