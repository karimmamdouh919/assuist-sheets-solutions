#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

void swap_nums(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a,b;
    cin >> a >> b;
    swap_nums(a,b);
    cout << a << ' ' << b;
}
