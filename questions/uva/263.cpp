#include <bits/stdc++.h>

using namespace std;
vector <long long int> vlli;
vector <string> vs;

bool is_greatest(int n1, int n2){
    return n1 > n2;
}

int has_appear(string result){
    if (vs.size() == 0){
        return 0;
    }
    for (string i: vs){
        if (result.compare(i) == 0){
            return 1;
        }
    }

    return 0;
}
string sort_minor(string n){
    string t;
    for (int i = 0; i < n.size(); i++){
        
        vlli.push_back(n[i]-'0');
    }

    sort(vlli.begin(), vlli.end());

    for (int i = 0; i < vlli.size(); i++){
        t.push_back(vlli[i]+'0');
    }

    vlli.clear();
    return t;
}
string sort_greatest(string n){
    string t;
    for (int i = 0; i < n.size(); i++){
        
        vlli.push_back(n[i]-'0');
    }

    sort(vlli.begin(), vlli.end(), is_greatest);

    for (int i = 0; i < vlli.size(); i++){
        t.push_back(vlli[i]+'0');
    }
    vlli.clear();
    return t;
}
int main(){
    long long int ascending, descending;
    int i;
    string original;
    string result;

    getline(cin, original);

    while (!(original.compare("0") == 0)){
        i = 0;
        cout <<"Original number was " << original << "\n";

        descending = stoll(sort_greatest(original));
        ascending = stoll(sort_minor(original));
        result = to_string(descending - ascending);
        cout << descending << " - " << ascending << " = "  << result << "\n";
        i++;
        while (!(has_appear(result))){
            vs.push_back(result);
            ascending = stoll(sort_minor(result));
            descending = stoll(sort_greatest(result));
            result = to_string(descending - ascending);
            cout << descending << " - " << ascending << " = "  << result << "\n";
            i++;
        }

        cout << "Chain length " << i << "\n\n";
        vs.clear();
        getline(cin, original);
    }

    return 0;
}