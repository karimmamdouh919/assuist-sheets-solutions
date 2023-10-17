

#include <bits/stdc++.h>
using namespace std;

long long GCD(long long a, long long b)
{
    while(b!=0)
    {
        long long x = a;
        a = b;
        b = x%a;
    }
    return a;
}
long long LCM(long long a, long long b)
{
    return (a*b)/GCD(a,b);
}


int main()
{
long long a,b;
cin >> a >> b;
cout << GCD(a,b) << ' ' << LCM(a,b);
}


