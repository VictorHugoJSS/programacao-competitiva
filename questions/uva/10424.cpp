#include <bits/stdc++.h>
char low[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char high[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
using namespace std;

int value_char(char t){
    for (int i = 0; i < 26; i++){
        if (t == low[i] || t == high[i]){
            return i+1;
        }
    }

    return 0;
}

int value(string t){
    int sum = 0;

    for (size_t i = 0; i < t.size(); i++){
        sum += value_char(t[i]);
    }

    if (sum % 9 == 0){
        return 9;
    }
    else{
        return sum % 9;
    }
}

int main(){
    string name1, name2;

    while (getline(cin, name1)){
        getline(cin, name2);
        int value1 = value(name1);
        int value2 = value(name2);
        double ratio = min((double) value1/value2, (double) value2/value1);
        printf("%.2lf %\n", ratio * 100);
    }

    return 0;
}