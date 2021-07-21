//Codeforces Problem : 231A
#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  int p1, p2, p3; //three participants
  int res=0;
  cin >> test; //no. of test cases
  while(test--){
    cin >> p1 >> p2 >> p3; //participant have solution or not
    if((p1+p2+p3) > 1)res += 1; //if sum is greater than 1 means 2 or more friends have solution.
  }
  cout << res; //outputing result.
  return 0;
}
