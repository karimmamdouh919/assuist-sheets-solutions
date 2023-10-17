#include <bits/stdc++.h>
using namespace std;

void shiftZeros(int arr[],int n)
{
    for(int i=n-2 ; i>-1 ; --i)
    {
        int j=i;
        while(arr[j]==0 && arr[j+1]!=0){

            swap(arr[j],arr[j+1]);
            j++;
            if(j==n-1)break;}
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; ++i)
        cin >> arr[i];
    shiftZeros(arr,n);

        for(int i=0 ; i<n ; ++i){
        cout << arr[i];
        if(i!=n-1)cout << ' ';}

}
