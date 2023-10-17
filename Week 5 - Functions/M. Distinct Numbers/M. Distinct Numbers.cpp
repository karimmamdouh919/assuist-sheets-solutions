#include <bits/stdc++.h>

using namespace std;

int counter(int arr[], int n)
{
    int freq1[100000] = {0}, freq2[100000] = {0};
    int c = 0;
    for(int i=0 ; i<n ; ++i)
    {
        if(arr[i]>=0){freq1[arr[i]]++; if(freq1[arr[i]]==1)c++;}
        else{ freq2[-arr[i]]++;if(freq2[-arr[i]]==1) c++;}




    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; ++i)
        cin >> arr[i];
    cout << counter(arr,n);

}
