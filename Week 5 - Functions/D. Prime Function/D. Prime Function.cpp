#include <bits/stdc++.h>

using namespace std;

bool isPrime(long long n)
{
     bool flag = true;
    for(long long i=2 ; i*i<=n ; ++i)
    {
        if(n%i==0){flag = false; break;}

    }
    return flag;
}
int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n==1)cout << "NO";
        else
        {if(isPrime(n))cout << "YES";
        else cout << "NO";}
        cout << endl;
    }
}
