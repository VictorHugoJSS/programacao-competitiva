#include <bits/stdc++.h>

using namespace std;

int main(){
    int size;

    scanf("%d", &size);
    getchar();

    string t, num;

    getline(cin, t);

    for (int i = 0; i < t.size(); i++){
        if (t[i] == 'z'){
            num.push_back('0');
        }
        if (t[i] == 'n'){
            num = '1' + num;
        }
    }

    for (int i = 0; i < num.size(); i++){
        printf("%c", num[i]);

        if (i < t.size()-1){
            printf(" ");
        }
    }

    printf("\n");
}