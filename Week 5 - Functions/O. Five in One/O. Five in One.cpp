#include <bits/stdc++.h>
using namespace std;

int maximum(int arr[], int n);

int minimum(int arr[], int n);

int prime(int arr[], int n);

int palindrome(int arr[], int n);

int maxDivisors(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; ++i)
        cin >> arr[i];

    cout << "The maximum number : " << maximum(arr,n) << endl;
    cout << "The minimum number : " << minimum(arr,n) << endl;
    cout << "The number of prime numbers : "  << prime(arr,n) << endl;
    cout << "The number of palindrome numbers : " << palindrome(arr,n)<< endl;
    cout << "The number that has the maximum number of divisors : " << maxDivisors(arr,n)<< endl;
    }


int maximum(int arr[], int n)
{
    int mx = arr[0];
    for(int i=0 ; i<n ; ++i)
    {
        if(arr[i]>mx)mx = arr[i];
    }
        return mx;
}
int minimum(int arr[], int n)
{
    int mn = arr[0];
    for(int i=0 ; i<n ; ++i)
    {
        if(arr[i]<mn)mn = arr[i];
    }
        return mn;
}
int prime(int arr[], int n)
{
    int c = 0;
    for(int i=0 ; i<n ; ++i)
    {
        if(arr[i]==1)continue;

        bool flag = true;

        for(int j=2 ; j*j<=arr[i] ; ++j)
        {
            if(arr[i]%j==0){flag = false;break;}
        }
        if(flag)c++;
}
    return c;
}
int palindrome(int arr[], int n)
{
    int c = 0;
    for(int i=0 ; i<n ; ++i)
    {
        if(arr[i]==100)continue;
        else if(arr[i]<10)
            c++;
        else if(arr[i]%11==0)
            c++;
    }
        return c;
}
int maxDivisors(int arr[], int n)
{
           int mx[102] = {0};
    for(int i=0 ; i<n ; ++i)
    {
        if(mx[arr[i]])mx[arr[i]]=0;
        for(int j=1; j*j<=arr[i] ; ++j)
        {
            if(arr[i]%j==0)mx[arr[i]]+=2;
            if(j*j==arr[i])mx[arr[i]]--;
        }
    }
    int maxi = mx[arr[0]],idx;
    for(int i=0 ; i<n ; ++i)
    {
        if(maxi<mx[arr[i]]){maxi = mx[arr[i]], idx = arr[i];}
        else if(maxi==mx[arr[i]]){if(idx<arr[i])idx=arr[i];}

    }
    return idx;
}
