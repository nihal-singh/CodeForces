#include<bits/stdc++.h>
using namespace std;

int main(){
  int m,n; //board size m*ns
  int max_domino = 0; //max dominoes that can be placed
  cin >> m >> n;
  if(m % 2 == 0)max_domino = (m/2) * n;
  else{
    if(n % 2 == 0)max_domino = ((m-1)/2) * n + n/2;
    else max_domino = ((m-1)/2) * n + (n-1)/2;
  }
  cout << max_domino;
  return 0;
}
