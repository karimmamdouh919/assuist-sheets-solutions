/*string s,t;
cin >> s >> t;
cout << s.size() << " " << t.size() << endl;
cout << s+' '+t;*/


#include <bits/stdc++.h>
#include <string>
using namespace std;



int main()
{

int k,s, count = 0;
cin >> k >> s;

for(int x=0 ; x<=k ; ++x)
{
    for(int y=0 ; y<=k ; ++y)
    {
        for(int z=0 ; z<=k ; ++z)
        {
            if(x+y+z==s)count++;
        }
    }
}
cout << count << endl;
}
