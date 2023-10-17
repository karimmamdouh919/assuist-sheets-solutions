#include <bits/stdc++.h>

using namespace std;

void printChar(char c, int n);

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char c;
        int n;
        cin >> n >> c;
        printChar(c,n);
        cout << endl;
    }


}

void printChar(char c, int n)
{
    for(int i=0 ; i<n-1 ; ++i)
    {
        cout << c << ' ';
    }
    cout << c;
}
