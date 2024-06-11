#include <bits/stdc++.h>
#define ll long long
using namespace std;
int f[100001];
int get_root(int u){
return(f[u] == 0 ? u : f[u] = get_root(f[u]));
}
void Union(int x,int y){
int u,v;
u = get_root(x);
v = get_root(y);
if(u == v)return;
if(f[u] < f[v])f[u]+=f[v], f[v]=u;
else f[v]+=f[u], f[u]=v;
}
int n,m,u,v,k = 0;
int main()
{
ios::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
freopen("ROUTE.inp", "r", stdin);
freopen("ROUTE.out", "w", stdout);
memset(f,0,sizeof f);
cin >> n >> m;
while(m--){
cin >> u >> v;
Union(u,v);
}
for(int i = 1;i <= n;i++)
if(f[i] == 0)k++;
cout << (k-1);
return 0;
}
