#include <bits/stdc++.h>
#include <iostream>
#define x first
#define y second
using namespace std;
const int di[]={-2,-2,-1,-1,1,1,2,2};
typedef long long ll;
const int dj[]={-1,1,-2,2,-2,2,-1,1};
typedef pair <int,int> ii;
deque <ii> q;
ll d[1001][1001],xff,yff,xss,yss,n,m;
bool check(ll a,ll b)
{
        return(a >=1 && b >=1 && a <=m && b <=n && d[a][b]==0);
}
void BFS(ll a, ll b)
{
    memset(d,0,sizeof(d));
    q.push_back(ii(a,b));
    d[a][b]=0;
    while (!q.empty())
    {
        ii t = q.front();
        q.pop_front();
        for (int k=0; k<=8; k++)
        {
            ll tmp=d[t.x][t.y];
            ll u  =t.x + di[k];
            ll v  =t.y + dj[k];
            if (check(u,v))
            {
                d[u][v]= tmp+1;
                if (u==xff && v==yff)
                {
                    cout << d[u][v];
                    return;
                }
                q.push_back(ii(u,v));
            }
        }
    }
    cout << -1;
}
int main()
{
    freopen("quanma.inp","r",stdin);
    freopen("quanma.out","w",stdout);
    cin >> m >> n >> xss >> yss >> xff >> yff;
    BFS(xss, yss);
    return 0;
}
