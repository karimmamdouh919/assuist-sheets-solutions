#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    bool flag = true;
    if(n==1)cout << "NO";
    else {for(long long i=2 ; i*i <= n ; ++i)
    {


    if(n%i==0){flag =false;break;}

    }
    if(flag)cout << "YES";
    else cout << "NO";}
}
