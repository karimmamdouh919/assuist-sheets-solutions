#include <bits/stdc++.h>

using namespace std;

void newArray(int a[],int b[],int n)
{
    int c[n*2];
    for(int i=0 ; i<n*2 ; i++)
    {
        if(i>=n)c[i]=a[i-n];
        else c[i]=b[i];

        cout << c[i];
        if(i!=n*2-1)cout << ' ';
    }

}

int main()
{
    int n;
    cin >> n;
    int a[n],b[n];
    for(int i=0 ; i<n ; i++)
        cin >> a[i];

    for(int i=0 ; i<n ; i++)
        cin >> b[i];

    newArray(a,b,n);


}
