#include <bits/stdc++.h>
using namespace std;



int main()
{
int n;
bool flag = 0, isPer = 1;
cin >> n;
long long a[n],b[n];
for(int i=0 ; i<n ; i++)
    cin >> a[i];
flag = 1;
for(int i=0 ; i<n ; i++){
    cin >> b[i];

    for(int j=0 ; j<n ; j++){
        if(b[i]==a[j]){a[j]=0; flag=1;break;}
        else flag = 0;
    }
    if(flag==0)isPer=0;
}
if(isPer)cout << "yes";
else cout << "no";
    return 0;
}





