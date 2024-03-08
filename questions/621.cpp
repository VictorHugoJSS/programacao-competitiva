#include <bits/stdc++.h>

using namespace std;

int main(){
  int tc;
  string t;
  scanf("%d", &tc); getchar();

  while (tc--){
    getline(cin,t);
    if (t.compare("1") == 0 || t.compare("4") == 0 || t.compare(0,t.size(),"78") == 0){
      printf("+\n");
    }
    else if (t.compare(t.size()-2, t.size()-1, "35") == 0){
      printf("-\n");
    }
    else if (t[0] == '9' && t[t.size()-1] == '4'){
      printf("*\n");
    }
    else if (t[0] == '1' && t[1] == '9' && t[2] == '0'){
      printf("?\n");
    }
    else{
      printf("+\n");
    }
    t.clear();
  }
  return 0;
}
