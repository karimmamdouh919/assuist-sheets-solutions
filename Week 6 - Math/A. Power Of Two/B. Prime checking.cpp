#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*long long n;
    cin >> n;
    bool flag = true;
    for(int i=2 ; i*i <= n ; ++i)
    {


    if(n%i==0){flag =false;break;}

    }
    if(flag)cout << "YES";
    else cout << "NO";*/

        long long a,b;
        long long sum = 0, Vsum = 0, Dsum = 0;
        cin >> a >> b;
        for(long long i=min(a,b) ; i<=max(a,b) ; ++i)
        {
            sum+=i;
            if(i%2)Dsum+=i;
            else Vsum+=i;
        }
        cout << sum << endl << Vsum << endl << Dsum;
}
