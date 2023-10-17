#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
   string s;
   int n,sz = 0;
   cin >> n >> s;
   for(int i=0 ; i<n-1 ;++i)
   {
       if(s[i]!=s[i+1])sz++;
   }
    cout << ++sz;

}
