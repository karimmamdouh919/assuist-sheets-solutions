#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string x;
    cin >> x;
    int asccii[n];
    for(int i=0 ; i<n ; ++i)
    {
        asccii[i]=(int)x[i];

    }
    for(int i=0 ; i<n-1 ; ++i)
    {
        for(int j=0 ; j<(n-i-1) ; ++j)
        {
            if(asccii[j]>asccii[j+1])swap(asccii[j],asccii[j+1]);
        }
    }
    for(int i=0 ; i<n ; ++i)
    {
        cout << (char)asccii[i];
    }
}

