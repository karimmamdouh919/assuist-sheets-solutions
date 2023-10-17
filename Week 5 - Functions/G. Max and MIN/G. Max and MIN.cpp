#include <bits/stdc++.h>

using namespace std;

 void minNmax(int arr[], int sz)
{
    int mx = arr[0], mn = arr[0];
    for(int i=0 ; i<sz ; ++i)
    {
        if(mx<arr[i])mx=arr[i];
        if(mn>arr[i])mn=arr[i];
    }
    cout << mn << ' ' << mx;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; ++i)
    {
        cin >> arr[i];
    }
    minNmax(arr,n);

}
