#include <bits/stdc++.h>

using namespace std;

typedef struct participant{
    char *name;
    int min;
    int sec;
    int ms;
}participant;

typedef struct participantOrd{
    char *name;
}participantOrd;

int main(){
    int participants;

    while (cin >> participants){
        participant person[participants];
        participantOrd ord[participants];

        for (int i = 0; i < participants; i++){
            person[i].name = (char*) malloc(21 * sizeof(char*));
            scanf("%s : %d min %d sec %d ms", person[i].name, &person[i].min, &person[i].sec, &person[i].ms);

            for (int j = 0; j < i; j++){
                if(person[i].min < person[j].min){
                    ord[i].name = person[i].name;
                } else if(person[i].sec < person[j].sec){
                    ord[i].name = person[i].name;
                } else if(person[i].ms < person[j].ms){
                    ord[i].name = person[i].name;
                } else if(strlen(person[i].name) < strlen(person[j].name)){
                    ord[i].name = person[i].name;
                }
            }
            cout << ord[0].name << endl;
        }

        cout << ord[0].name << endl;
    }

    return 0;
}