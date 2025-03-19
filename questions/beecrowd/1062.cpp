#include<bits/stdc++.h>

using namespace std;

int main(){
    int size;

    while(cin >> size){
        bool ord = false;
        if (size == 0){
            break;
        }

        while (true){
            stack<int> s;
            int temp, i = 1, j = 0;
            cin >> temp;

            if (temp == 0){
                break;
            }
            
            s.push(temp);

            while (i <= size){

                while (!s.empty() && j < size){
                    cin >> temp;
                    s.push(temp);
                    j++;
                    if (s.top() == i){}
                }

                if (s.top() == i){
                    s.pop();
                    i++;
                    ord = true;
                }
                else{
                    ord = false;
                    break;
                }
            }
            
            if (ord){
                cout << "Yes\n";
            }
            else{
                cout << "No\n";
            }
        }
    }

    return 0;
}