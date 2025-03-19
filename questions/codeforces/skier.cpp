#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;

    scanf("%d", &tc);
    getchar();

    while(tc--){
        string t;
        getline(cin, t);

        pair<int,int> coord, novo;

        coord.first = 0;
        coord.second = 0;

        map<pair<int,int>, vector<pair<int,int>>> mp;

        int total = 0;

        for (int i = 0; i < t.size(); i++){
            if (t[i] == 'N'){
                novo.first = coord.first;
                novo.second = coord.second+1;
                

                if (mp.find(novo) != mp.end()){
                    bool found = false;
                    for (int j = 0; j < mp[novo].size(); j++){
                        if (mp[novo][j] == coord){
                            found = true;
                            break;
                        }
                    }
                    if (found){
                        total++;
                    }   
                    else{
                        total += 5;
                    }
                    mp[novo].push_back(coord);
                    mp[coord].push_back(novo);
                }
                else{
                    mp[novo].push_back(coord);
                    mp[coord].push_back(novo);
                    total += 5;
                }
                
            }
            if (t[i] == 'S'){
                novo.first = coord.first;
                novo.second = coord.second-1;
                

                if (mp.find(novo) != mp.end()){
                    bool found = false;
                    for (int j = 0; j < mp[novo].size(); j++){
                        if (mp[novo][j] == coord){
                            found = true;
                            break;
                        }
                    }
                    if (found){
                        total++;
                    }   
                    else{
                        total += 5;
                    }
                    mp[novo].push_back(coord);
                    mp[coord].push_back(novo);
                }
                else{
                    mp[novo].push_back(coord);
                    mp[coord].push_back(novo);
                    total += 5;
                }
                
                
            }
            if (t[i] == 'W'){
                novo.first = coord.first-1;
                novo.second = coord.second;
                
                if (mp.find(novo) != mp.end()){
                    bool found = false;
                    for (int j = 0; j < mp[novo].size(); j++){
                        if (mp[novo][j] == coord){
                            found = true;
                            break;
                        }
                    }
                    if (found){
                        total++;
                    }   
                    else{
                        total += 5;
                    }
                }
                else{
                    mp[novo].push_back(coord);
                    mp[coord].push_back(novo);
                    total += 5;
                }
                mp[novo].push_back(coord);
                mp[coord].push_back(novo);
            }
            if (t[i] == 'E'){
                novo.first = coord.first+1;
                novo.second = coord.second;
                
                if (mp.find(novo) != mp.end()){
                    bool found = false;
                    for (int j = 0; j < mp[novo].size(); j++){
                        if (mp[novo][j] == coord){
                            found = true;
                            break;
                        }
                    }
                    if (found){
                        total++;
                    }   
                    else{
                        total += 5;
                    }
                    mp[novo].push_back(coord);
                    mp[coord].push_back(novo);
                }
                else{
                    mp[novo].push_back(coord);
                    mp[coord].push_back(novo);
                    total += 5;
                }
                
                
            }
            coord = novo;
        }
        printf("%d\n", total);
    }
}