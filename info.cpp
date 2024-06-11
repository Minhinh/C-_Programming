
    int i,j;
    while (!cin.eof())
    {
        cin>>i>>j;
        a[i][j]=1;
        a[j][i]=1;
    }
    int t=0;
    for (int i=1;i<=n;i++)
        if (tham[i]==0)
        {#include <bits/stdc++.h>
using namespace std;
int n,a[5000][5000],tham[(int)1e7+10],dem=0,kq=INT_MIN;
void dfs(int k)
{
    tham[k]=1;
    for (int d=1;d<=n;d++)
    if (a[k][d]!=0&&tham[d]==0)
    {
        dem++;
        kq=max(kq,dem);
        dfs(d);
    }
}
int main()
{
    freopen("INFO.INP","r",stdin);
    freopen("INFO.OUT","w",stdout);
    cin>>n;
    int i,j;
    while (!cin.eof())
    {
        cin>>i>>j;
        a[i][j]=1;
        a[j][i]=1;
    }
    int t=0;
    for (int i=1;i<=n;i++)
        if (tham[i]==0)
        {
            dem=0;
            dfs(i);
            t++;
        }
    cout<<t<<endl<<kq;
}
            dem=0;
            dfs(i);
            t++;
        }
    cout<<t<<endl<<kq;
}