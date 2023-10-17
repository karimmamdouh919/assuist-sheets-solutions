#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n,m;
    cin >> n >> m;
    char a[n][m];
    for(int i=0 ; i<n ; ++i)
        for(int j=0 ; j<m ; ++j)
            cin >> a[i][j];

    int x,y;bool flag = true;
    cin >> x >> y;
    --x,--y;
    int X[8]={-1,0,1,-1,1,-1,0,1};
    int Y[8]={-1,-1,-1,0,0,1,1,1};
    int best_i=-1,best_j=-1;
    for(int i=0 ; i<8 ; ++i)
    {

        best_i=x+X[i],best_j=y+Y[i];

        if((best_i<n &&  best_i>-1) && (best_j<m && best_j>-1))
        {

           if(a[best_i][best_j]!='x')
            {
                flag=false;break;
            }

        }
   }
     if(flag==false)cout << "no";
    else cout << "yes";

}
