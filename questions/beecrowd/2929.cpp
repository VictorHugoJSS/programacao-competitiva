#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    vector<int> st, min;

    scanf("%d", &tc);
    getchar();

    while(tc--){
        string t;

        cin >> t;

        if (t.compare("PUSH") == 0){
            int temp;
            scanf("%d", &temp);
            st.push_back(temp);
            if (st.size() == 1){
                min.push_back(temp);
            }

            if (temp < min[min.size()-1]){
                min.push_back(temp);
            }
            else{
                min.push_back(min[min.size()-1]);
            }
        }
        else if (t.compare("POP") == 0){
            if (st.empty()){
                printf("EMPTY\n");
            }
            else{
                st.pop_back();
                min.pop_back();   
            }
        }
        else{
            if (st.empty()){
                printf("EMPTY\n");
            }
            else{
                printf("%d\n", min[min.size()-1]);
            }
        }
    }
    return 0;
}