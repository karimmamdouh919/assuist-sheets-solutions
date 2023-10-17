#include <bits/stdc++.h>

using namespace std;

void shiftright(int arr[], int n, int x)
{

    while(x--)
    {
        int temp1=arr[n-1],temp2;
        for(int i=0 ; i<n ; ++i)
        {
            temp2 = arr[i];
            arr[i] = temp1;
            temp1=temp2;

        }
    }
    for(int i=0 ; i<n ; ++i)
       cout << arr[i] << ' ';
}

int main()
{
   int n,x;
   cin >> n >> x;
   int arr[n];
   for(int i=0 ; i<n ; ++i)
        cin >> arr[i];

    shiftright(arr,n,x);
}
