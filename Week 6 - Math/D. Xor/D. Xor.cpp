#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,q, f;
    cin >> a >> b >> q;
    if(q==1)cout << a;
    else if(q==2)cout << b;
    else{ for(long long i=3 ; i<q ; ++i )
    {
        f = b^a;
        b=a,a=f;
    }
        cout << (a^b);}
}
