#include <bits/stdc++.h>

long long MDN(long long  n)
{
    long long x = 1;
    while(n>0)
    {
        n-=x;
        if(n>0)
        x++;
        if(n<0)x--;
    }

    return x;
}

using namespace std;

int main()
{
   long long n;
   cin >> n;
   cout << MDN(n);


}
