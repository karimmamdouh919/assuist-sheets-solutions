#include <bits/stdc++.h>
using namespace std;
long long factorSum(long long n)
{
    long long sum = 0;
    for(long long i = 1 ; i*i <= n ; i++)
    {
        if(n%i==0)
        {
            sum+=i;
            if(i*i!=n){sum+=n/i;}
        }
    }

    return sum;
}



int main()
{
    long long n;
    cin >> n;
    cout << factorSum(n);

}
