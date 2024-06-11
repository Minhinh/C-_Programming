#include <bits/stdc++.h>
using namespace std;
unsigned long long n;
int main()
{
    cin  >>n;
    //while (n > 0)
    {
        for (int i=2; i<=n; i++)
            if (n % i ==0) cout << i << " ";
    }
    return 0;
}
