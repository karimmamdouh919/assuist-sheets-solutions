#include <iostream>
using namespace std;

int main()
{
    // fibanocci seq results in large numbers that require datatypes with larger memory size e.g. long long;
int n;
cin >> n;
long long fib[100];
fib[0]=0,fib[1]=1;
for(int i=2 ; i<n ; i++)
    fib[i]=fib[i-1]+fib[i-2];

cout << fib[n-1];
    return 0;
}
