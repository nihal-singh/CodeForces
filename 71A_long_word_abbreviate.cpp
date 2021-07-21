#include<bits/stdc++.h>
using namespace std;
int main(){
  int test;
  string wrd, res; //word and result
  cin >> test; //no. of test cases
  while(test--){
    cin >> wrd;
    int len = wrd.length();
    res = (len > 10) ? wrd[0]+to_string(len-2)+wrd[len-1] : wrd; //length greater than 10 then abbreviate else return the word itself.
    cout << res << endl;
  }
  return 0;
}
