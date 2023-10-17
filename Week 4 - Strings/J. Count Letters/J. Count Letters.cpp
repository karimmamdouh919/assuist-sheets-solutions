#include <bits/stdc++.h>
#include <string>


using namespace std;

int main()
{
   string s;
   cin >> s;
   int freq[150] = {0};

   for(int i=0 ; i<s.size() ; ++i)
   {
       freq[s[i]]++;
   }

   for(int i='a' ; i<='z' ; ++i)
   {
       if(freq[i])
        cout << char(i) << " : " << freq[i] << endl;
    }
}
