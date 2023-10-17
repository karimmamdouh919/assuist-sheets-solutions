#include <bits/stdc++.h>

using namespace std;

/*long long sum(int a, int b, int x)
{
    long long s = 0;
    for(long long i=a ; i<=b ; ++i)
    {
        if(i%x==0)s+=i;
    }

    return s;
}

void rec(int n)
{
    if(n==0)return;
    else
        {cout << "I love Recursion" << endl;
   rec(n-1);}
}
 */

 void print(int i)
 {
     if(i==0) return;
     else {
     print(i-1);
     cout << i << endl;}

 }
int main()
{
   /* long long a,b,x;
    cin >> a >> b >> x;
    cout << sum(a,b,x);

long long n;
long long freq[1000000000] = {0};
cin >> n;
for(long long i=2 ; i*i<=n ; ++i)
{
    while(n%i==0)
    {
        freq[i]++;

        n/=i;
    }
}


int n;
cin >> n;
rec(n);*/
int n;
cin >> n;
print(n);

}
