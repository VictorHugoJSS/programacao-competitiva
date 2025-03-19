#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    vector<int> st;

    scanf("%d", &tc);

    while(tc--){
        int mn = INT_MAX;
        string t;

        cin >> t;

        if (t.compare("PUSH") == 0){
            int temp;
            scanf("%d", &temp);
            st.push_back(temp);
        }
        else if(t.compare("MIN") == 0){

            if (st.empty()){
                printf("EMPTY\n");
            }
            else{
                for (int i = 0; i < st.size(); i++){
                    mn = min(mn, st[i]);
                }
                printf("%d\n", mn);   
            }
        }
        else if(t.compare("POP") == 0){
            if (st.empty()){
                printf("EMPTY\n");
            }
            else{
                st.pop_back();
            }
        }
    }

    return 0;
}