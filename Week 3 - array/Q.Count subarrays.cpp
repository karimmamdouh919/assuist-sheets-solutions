#include <iostream>
using namespace std;


int main()
{
  int t;
  cin >> t;
  while(t--)
  {
    int n,count = 0;
    cin >> n;
    long long a[n];
    for(int i=0 ; i<n ; i++)
        cin >> a[i];

    for(int i=0 ; i<n ; i++)
        for(int j=i ; j<n ; j++){
            if(i==j)count++;
            else if(a[j]>a[j-1])count++;
            else break;
        }
    cout << count << endl;
  }
    return 0;
}
