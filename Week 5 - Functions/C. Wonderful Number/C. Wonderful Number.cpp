#include <bits/stdc++.h>

using namespace std;

bool isPal(int x)
{
    int y = x;long long freq = 0;
    while(y)
    {
       y /= 2;
       freq++;
    }
    int arr[freq];
    for(int i=0 ; i<freq ; ++i)
    {
        arr[i]=x%2;
        x/=2;
    }
    int j = freq - 1;bool flag = true;
    for(int i=0 ; i<=freq/2 ; ++i)
    {
        if(arr[i]!=arr[j]){flag = false;break;}
        j--;
    }
    return flag;
}

bool isOdd(int x)
{
    if(x%2)return true;
    else return false;
}

int main()
{
    int x;
    cin >> x;
    if(isOdd(x)&&isPal(x))cout << "YES";else cout << "NO";
}
