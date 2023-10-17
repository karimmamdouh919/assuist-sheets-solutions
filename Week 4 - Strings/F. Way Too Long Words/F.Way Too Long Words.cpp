#include <iostream>
#include <string>


using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
    string s;
    cin >> s;
    int sz = s.size() - 2;
    if(s.size()<=10)
        cout << s << endl;
    else
        cout << s[0] << sz << s[sz+1] << endl;

    }
}
