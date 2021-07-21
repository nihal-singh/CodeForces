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



//Problem faced in this problem
//while using getline in this problem for taking inputs for words, the first word it is taking was newline character from cin>>test, so to avoid this
//we have to use cin.ignore(); statement to ignore the new line character to be taken as input.
//https://stackoverflow.com/questions/18725522/getline-keeps-on-getting-newline-character-how-can-i-avoid-this
