#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
 string num;
 int sum;
 cin >> num;
 for(int i=0 ; i<num.size() ; ++i)
 {
     sum += num[i] - '0';
 }
    cout << sum;

}
