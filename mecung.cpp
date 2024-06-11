#include <bits/stdc++.h>
#define nMax 100
using namespace std;
int matrix[nMax][nMax];
bool reached;

void visit(int x,int y){
  if(matrix[x][y] == 3)
  {
    reached = true; return;
  }
 matrix[x][y] = '1';
 if(reached == false && x-1 >=0 && (matrix[x-1][y] == '0' || matrix[x-1][y] == '3')) visit(matrix,x-1,y);
 if(reached == false && x+1 <nMax && (matrix[x+1][y] == '0' || matrix[x+1][y] == '3')) visit(matrix,x+1,y);
 if(reached == false && y-1 >=0 && (matrix[x][y-1] == '0' || matrix[x][y-1] == '3')) visit(matrix,x,y-1);
 if(reached == false && y+1 <nMax && (matrix[x][y+1] == '0' || matrix[x][y+1] == '3')) visit(matrix,x,y+1);
}
int main(){

 freopen("mecung.INP","r", stdin);
 freopen("mecung.OUT","w", stdout);

 int testCase;
 int loop =1;
 int beginX, beginY;
 while(loop++ <= 10){
  reached = false;
  cin>>testCase;
  for(int i=0;i<nMax;i++){
   cin>>matrix[i];
   for(int j=0;j<nMax;j++)
    if(matrix[j][i] == '2'){
     beginX = j; beginY = i;
   }
  }
  visit(matrix,beginX,beginY);
  if(reached){
   cout<<"#"<<testCase<<" "<<1<<endl;
  }else{
   cout<<"#"<<testCase<<" "<<0<<endl;
  }
 }
 return 0;
}
