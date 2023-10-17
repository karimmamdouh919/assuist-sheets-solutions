#include <bits/stdc++.h>
using namespace std;

int main(){

int n,q;
cin >> n >> q;
long long arr[n];


for(int i=0 ; i<n ; i++){
    cin >> arr[i];
   }

sort(arr, arr + n);

while(q--){
    long long x;
    cin >> x;

    int start=0, high = n-1, mid;
    bool isFound = false;
    while (start<=high)
    {

        mid=(start+high)/2;
        if(arr[mid]==x){isFound=true;break;}
        else if(arr[mid]<x){start = mid + 1;}
        else {high = mid - 1;}

    }
    if(isFound){cout << "found" << endl;}
  else {cout << "not found"<< endl;}

}


}
