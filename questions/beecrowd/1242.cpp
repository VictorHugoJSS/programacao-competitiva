#include <bits/stdc++.h>

using namespace std;

int main(){
    string dna;
    
    while (cin >> dna){
        stack<char> st;
        int count = 0;
        
        
        for (int i = 0; i < dna.size(); i++){
            if (!st.empty() && (st.top() == 'B' && dna[i] == 'S' || st.top() == 'S' && dna[i] == 'B')){
                st.pop();
                count++;
            }
            else if (!st.empty() && (st.top() == 'F' && dna[i] == 'C' || st.top() == 'C' && dna[i] == 'F')){
                st.pop();
                count++;
            }
            else{
                st.push(dna[i]);
            }
        }
        
        cout << count << "\n";
    }
    
    return 0;
}
