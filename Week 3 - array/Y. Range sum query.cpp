#include <bits/stdc++.h>
using namespace std;

int main(){

int n,q;
cin >> n >> q;
long long arr[n], prefix_sum[n];


for(int i=0 ; i<n ; i++){
    cin >> arr[i];
    prefix_sum[0]=arr[0];
    if(i>0)prefix_sum[i]=prefix_sum[i-1]+arr[i];}



while(q--){
    int l,r;
     cin >> l >> r;


     if(--l!=0)cout << prefix_sum[--r]-prefix_sum[l-1] << endl;
     else cout << prefix_sum[--r] << endl;
}


}
