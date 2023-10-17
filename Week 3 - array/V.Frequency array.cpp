#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n], count[m+1] = {0};
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
        count[arr[i]]++;
    }
    for(int i=1 ; i<=m ; i++)
    {
        cout << count[i] << endl;
    }
}
