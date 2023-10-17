#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    /*int n,q;
    cin >> n >> q;*/
    string s, k="hello";
    int j=0;
    cin >> s;
    for(int i=0 ; i<s.size() && j!=k.size(); ++i)
    {
        if(s[i]==k[j]){
            j++;}
    }

    if(j==k.size())cout << "YES";
    else cout << "NO";

}
