#include <bits/stdc++.h>

using namespace std;
vector <long long int> vi;

int verify (int position){
  int i = position;

  if (position == 0){
    return 1;
  }

  while (i){
    if (vi[i-1] == vi[position]){
      return 0;
    }
    i--;
  }

  return 1;
}

int main(){
  long long int t, i = 0;

  ifstream file;

  file.open("input.txt");

  while (file >> t){
    vi.push_back(t);
  }
  file.close();
  while (i < vi.size()){
    if (verify(i)){
      printf("%lld %ld\n", vi[i], count(vi.begin(), vi.end(), vi[i]));
    }
    i++;
  }
  return 0;
}