#include <bits/stdc++.h>
#include <string>


using namespace std;

int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    bool flag = false;
    for(int i=0 ; i<sz/2 ; ++i)
    {
        if(s[i]!=s[sz-1]){
            flag = true;
            break;}
        sz--;
    }
    if(flag)cout << "NO";
    else cout << "YES";
}
