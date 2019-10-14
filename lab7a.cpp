#include<bits/stdc++.h>
using namespace std;
int L[50][50];
int LCS(char *x,char *y,int m,int n){
    int i,j;
    for(i=0;i<=m;i++){
        for(j=0;j<=n;j++){
            if(i==0 || j==0){
                L[i][j]=0;
            }
            else if (x[i-1]==y[j-1]){
                L[i][j]=L[i-1][j-1]+1;
            }
            else{
                L[i][j]=max(L[i-1][j],L[i][j-1]);
            }
        }
    }
    return L[m][n];

}
int main(){
    int m,n;
    char x[30],y[30];
    cout<<"enter sequence x";
    cin>>x;
    cout<<"\n enter sequence y";
    cin>>y;
    m=strlen(x);
    n=strlen(y);
    int index=LCS(x,y,m,n);
    char lcss[index+1];
    lcss[index]='\0';
    int i=m,j=n;
    while(i>0 && j>0){
        if(x[i-1]==y[j-1]){
            lcss[index-1]=x[i-1];
            i--;
            j--;
            index--;
        }
        else if(L[i-1][j]>L[i][j-1]){
            i--;
        }
        else{
            j--;
        }
    }
    cout<<lcss;
    cout<<"\n length ="<<strlen(lcss);
}