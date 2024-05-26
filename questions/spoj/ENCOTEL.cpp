// Sphere Online Judge
// Question: Encontre o telefone
// Student: Victor Hugo Jose Sales da Silva
#include <bits/stdc++.h>

void text_for_number(char * arr, int size){
  for (int i = 0; i < size; i++){
    if (arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'C'){
      arr[i] = (char) 50;
    }
    else if (arr[i] == 'D' || arr[i] == 'E' || arr[i] == 'F'){
      arr[i] = (char) 51;
    }
    else if (arr[i] == )
  }
}
int main(){
  char s[30];
  while (scanf("%[^\n]", s) != EOF){
    int size = strlen(s);
    text_for_number(s, size);
    printf("%s\n", s);
  }
}
