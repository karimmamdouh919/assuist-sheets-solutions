#include <bits/stdc++.h>
using namespace std;



int main()
{

    int n,m;
    bool isFound = false;
    cin >> n >> m;
    long long a[n],s[m];

    for(int i=0 ; i<n ; ++i)
        cin >> a[i];

    for(int i=0 ; i<m ; ++i){
       cin >> s[i];
      }
        int j=0;
      for(int i=0 ; i<n && j!=m ; ++i)
      {
          if(s[j]==a[i]){
            j++;}
      }

    if(j==m)cout << "YES";
    else cout << "NO";

}


