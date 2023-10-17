#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,t;
        cin >> s >> t;
        int maxSTr = s.size();
        if(s.size()<t.size())maxSTr = t.size();
        for(int i=0 ; i<maxSTr ; ++i)
        {
            if(i<s.size())cout << s[i];
            if(i<t.size())cout << t[i];
        }
        cout << endl;
    }

}
