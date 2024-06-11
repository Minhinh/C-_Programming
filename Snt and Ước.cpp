#include <bits/stdc++.h>
using namespace std;
long long nn;
int snt(long long  a)
{
    if (a < 2) return 0;
    else if (a > 2)
    {
        if (a == 2) return 0;
        for (int i=2; i<= trunc(sqrt(a)); i++)
        {
            if(a % i ==0)
            {
                nn=i;
                return nn;
            }
        }
        return 1;
    }
}
int main ()
{
    long long  n;
    cin >> n;
    int kq = snt(n);
    if (kq == 1 )
        cout << "YES";
    else cout << nn;
    return 0;
}
