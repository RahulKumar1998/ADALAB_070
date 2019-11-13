#include <iostream>
using namespace std;

#define INF 999

//denominations available
#define N 3

//amount for which we are making change
#define A 6

void display(int arr[A+1]);
        

void coinChange(int d[N+1], int C[A+1], int S[A+1]);
void coinSet(int d[N+1], int S[A+1]);

int main() {
  
  int d[N+1] = {0, 1, 2, 5};
  
  //Minimum number of coins required to make change
  int C[A+1];
  
  //S contain the index of the coin to be included
  //in the optimal solution
  int S[A+1];
  coinChange(d, C, S);
  
  cout<<"\nC[p]\n";
  display(C);
  
  cout<<"\nS[p]\n";
  display(S);

  
  cout<<"\nMin. no. of coins coin required to make change for amount "<<A<<" = "<< C[A]<<"\n";
  
  
  cout<<"\nCoin Set\n";
  coinSet(d, S);
    
  return 0;
}

void coinChange(int d[N+1], int C[A+1], int S[A+1]) {
  int i, p, min, coin;
  
  //when amount is 0
  //then min coin required is 0
  C[0] = 0;
  S[0] = 0;
  
  for(p = 1; p <= A; p++) {
    min = INF;
    for(i = 1; i <= N; i++) {
      if(d[i] <= p) {
        if(1 + C[p - d[i]] < min) {
          min = 1 + C[p - d[i]];
          coin = i;
        }
      }
    }
    C[p] = min;
    S[p] = coin;
  }
}

void coinSet(int d[N+1], int S[A+1]) {
  int a = A;
  while(a > 0) {
        cout<<"Use coin of denomination: "<< d[S[a]]<<"\n";
    a = a - d[S[a]];
  }
}

void display(int arr[A+1]) {
  int c;
  for(c = 0; c <= A; c++) {
    printf("%5d", arr[c]);
  }
  cout<<"\n";
}
