  #include<bits/stdc++.h>
  using namespace std;
  int main(){
    int test_case;
    cin>>test_case;
    map<string, int> db; //creating a map
    string s;
    while(test_case--){
      cin >> s;
      if(db.count(s) == 0){ //count return 0 if element present else returns 1
        cout<<"OK"<<endl;
        db[s]=1; //adding 1 if element i snewly added
      }
      else{
        cout<<s<<db[s]<<endl;
        db[s] +=1;
      }
    }
     return 0;
  }
