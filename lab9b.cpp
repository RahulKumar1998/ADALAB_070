#include<bits/stdc++.h>
using namespace std;



int cost[20][20];
void prims(int n){
    int count=0,mini;
    int mincost=0,u,v;
    int visited[n];
    for(int i=1;i<=n;i++){
        visited[i]=1;
        }
    visited[1]=1;
    while(count!=n-1){
        mini=9999;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
            if(visited[j]==1){
                if(cost[i][j]<mini){
                    mini=cost[i][j];
                    u=i;
                    v=j;
                }
            }
        }
    }
    if(visited[v]==1){
        cout<<u<<"-->"<<v<<"="<<mini<<"\n";
        visited[v]=0;
        count=count+1;
        mincost=mincost+mini;
    }
    cost[u][v]=9999;
    cost[v][u]=9999;
    }
    cout<<"mincost="<<mincost;

}
int main(){
   int n;
   cout<<"enter no. of vertices";
   cin>>n;
   cout<<"\nenter cost matrix";
   for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>cost[i][j];
    }
   }
   prims(n);
   return 0;
}
/*OUTPUT
enter no. of vertices4
enter cost matrix9999 3 4 1
3 9999 2 9999
4 2 9999 9999
1 9999 9999 9999
1-->4=1
2-->3=2
1-->2=3
mincost=6
*/