#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int n,vt,vt1,maxx,minn,i,j,I,J;
int a[100000];
int b[100000];
int c[100000];
int main() {
    int bp=1,cp=1;
    cin >> n;
    minn=10000;
    maxx=0;
    for (int i=1 ; i<=n ; i++)
    {
        cin >> a[i];
        if (a[i] < minn)  minn=a[i];
        if (a[i] > maxx)  maxx=a[i];
    }
    for (int i=1 ; i<=n ; i++)
    {
        if (a[i] == maxx)
        {
            b[bp] = i;
            bp++;
        }
        if (a[i] == minn)
        {
            c[cp] = i;
            cp++;
        }
    }
    cout << minn << ' ' << maxx << endl;
    for (int i=1; i<=n ;i++)
    cout << b[i] << ' ' ;
    cout << endl;
    for (int i=1; i<=n ;i++)
    cout << c[i] << ' ' ;
    return 0;
}
