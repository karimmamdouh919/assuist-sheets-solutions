#include <bits/stdc++.h>
using namespace std;

void sum(int n)
{

    double x, sum = 0.0;
    for(int i=0; i<n ; ++i)
    {
        cin >> x;
        sum +=  x;
    }

     cout << setprecision(8) << sum/n;
}

int main()
{
    int n;double x;
    cin >> n;
    sum(n);


}
