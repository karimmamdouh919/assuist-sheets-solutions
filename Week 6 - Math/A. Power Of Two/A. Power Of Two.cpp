#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    bool flag = true;
    while(n!=1)
    {
        if(n%2){flag = false;break;}
         n/=2;
    }
    if(flag) cout << "YES";
    else  cout << "NO";
}
