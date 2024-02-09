#include <bits/stdc++.h>

const int MAX_ALUNOS = 100;

struct{
    int SID, CID, chi, math, Eng, programming;
    char name[20];
}alunos[MAX_ALUNOS];

int i = 0;

void add(){
    int n;
    printf("Please enter the SID, CID, name and four scores. Enter 0 to finish\n");
    while (1){
        scanf("%d %d %s %d %d %d %d", &alunos[i].SID, &alunos[i].CID, alunos[i].name, &alunos[i].chi, &alunos[i].math, &alunos[i].Eng, &alunos[i].programming);
        if (alunos[i].SID == 0){
            break;
        }
        i++;
    }
}
void menu(){
    int n;
    printf("Welcome to Student Performace Management System\n");
    printf("1 - Add\n2 - Remove\n3 - Query\n4 - Show ranking\n5 - Show Statistics\n0 - Exit\n");
    scanf("%d", &n);
    switch (n)
    {
        case 1: add(); break;
    }
}
int main(){
    menu();
    return 0;
}
