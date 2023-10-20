#include <bits/stdc++.h>
using namespace std;

int main(){
int n;
cin >> n;
int arr[n][n];

for(int i=0 ; i<n ; i++)
    for(int j=0 ; j<n ; j++)
        cin >> arr[i][j];


        int x=n-1,prime=0,second=0;
for(int i=0 ; i<n ; i++){
    for(int j=0 ; j<n ; j++)
    {
        if(i==j)prime+=arr[i][j];
        if(j==x)second+=arr[i][j];
    }
    x--;
}
if(prime-second<0)cout << -1*(prime-second);
else cout << prime-second;
    return 0;
}

