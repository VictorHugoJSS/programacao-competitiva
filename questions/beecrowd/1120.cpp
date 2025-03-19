#include <stdio.h>
#include <stdlib.h>

void removedefeito(char*, char);
void changechar (char*);

int main(){
    char ch, number[1001];
    while (1){

        scanf(" %c", &ch);
        getchar();
        fgets(number, 1001, stdin);

        if (ch == '0' && number[0] == '0'){
            break;
        }

        removedefeito(number, ch);
        changechar(number);

        printf("%s", number);
    }
}

void removedefeito (char *s, char ch){
    int i;
    for (i = 0; s[i] != '\0'; i++){
        if (s[i] == ch) {
            s[i] = 'A';
        }
    }
}
void changechar (char *s){
    int i = 0, j = 0;
    while (s[i]){
        if (s[i] != 'A'){
            s[j++] = s[i];
        }
        i++;
    }
    if (j == 0){
        s[j] = '0';
    }
    i = j = 0;
    while (s[i] == '0'){
        i++;
    }
    while (s[i]){
        s[++j] = s[i++];
    }
    s[j] = '\0';
}
