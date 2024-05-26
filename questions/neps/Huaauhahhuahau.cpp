#include <bits/stdc++.h>

using namespace std;

int is_vowel (char a){
  switch(a){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': return 1; break;
  }
  return 0;
}

string vowel(string o, string v){

  for (int i = 0; i < o.size(); i++){
    if (is_vowel(o[i])){
      v.push_back(o[i]);
    }
  }
  return v;
}
string reverse(string o, string r){

  for (int i = 0; i < o.size(); i++){
      r.push_back(o[o.size()-i-1]);
  }
  return r;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  string o, vowels, reverseVowels;
  int confirm = 0;

  getline(cin, o);
  vowels = vowel(o, vowels);
  reverseVowels = reverse(vowels, reverseVowels);

  for (int i = 0; i < vowels.size(); i++){
    if (vowels[i] == reverseVowels[i]){
      confirm = 1;
    }
    else{
      confirm = 0;
    }
  }

  if (confirm){
    cout << "S\n";
  }
  else{
    cout << "N\n";
  }

  return 0;
}
