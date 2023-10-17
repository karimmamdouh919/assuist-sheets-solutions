#include <bits/stdc++.h>


using namespace std;

long long sumEqn(long long x, long long n)
{
    long long s = 0;
    for(int i=2 ; i<=n ; i+=2)
    {
        long long f = 1;
        for(int j=0 ; j<i ; ++j)
            {f*=x;}
        s+=f;
    }
    return s;
}
int main()
{
    long long x,n;
    cin >> x >> n;
    cout << sumEqn(x,n);
}
