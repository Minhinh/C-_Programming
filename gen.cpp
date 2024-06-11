#include <bits/stdc++.h>
using namespace std;
unsigned int m,n;
const unsigned int matrix[7] = {1e6+1,1e5+1,1e4+1,1e3+1,1e2+1,11,2};
void xuly(unsigned int x)
{
    for (int g=0;g<=9;g++)
    for (int i=0;i<=9;i++)
        for (int j=0;j<=9;j++)
            for (int k=0;k<=9;k++)
                for (int l=0;l<=9;l++)
                    for (int b=0;b<=9;b++)
                        for (int o=0;o<=9;o++)
                        {
                            n = matrix[6]*o + matrix[5]*b + matrix[4]*l + matrix[3]*k
                                + matrix[2]*j + matrix[1]*i + matrix[0]*g;
                            unsigned int p = (matrix[6]-1)*o + (matrix[5]-1)*b + (matrix[4]-1)*l + (matrix[3]-1)*k
                                + (matrix[2]-1)*j + (matrix[1]-1)*i + (matrix[0]-1)*g;
                            if (n==x) {cout << p << endl; return;}
                        }
    cout << 0 << endl;
}
int main()
{
    ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
    freopen("gen.inp", "r", stdin);
    freopen("gen.out", "w", stdout);
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> m;
        xuly(m);
    }
}
