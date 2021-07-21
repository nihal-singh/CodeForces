//Codeforces Problem : 231A
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, k; //n - participant, k - score of k-th place finisher, res- no. of participants for next round
  cin >> n >> k;
  k=k-1;//fixing it as per array indexing.
  int res = n;
  int team[n];
  for(int i=0;i<n;i++){
      cin >> team[i]; //array of team participants
      if((i<=k && team[i]==0) || (i>k && team[i] < team[k])){ // participants ahead of k-th position if 0, then we can return the i(elements ahead that ith participants) and we'll keep checking for participants equal to kth score,
      //even if i is greater than k and returns the i when we found some participant score less than k.
          res = i;
          break;
        }
    }
  cout << res;
  return 0;
}
