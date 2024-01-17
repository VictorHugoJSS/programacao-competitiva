// CodeForces
// Question: 266A - Stones on the table
// Student: Victor Hugo José Sales da Silva

#include <bits/stdc++.h>

using namespace std;

int main(){
    int stones, stone_r = 0, stone_b = 0, stone_g = 0;

    cin >> stones;

    char colors[stones];
    int total;

    cin >> colors;

    for (int i = 0; i < stones; i++){

        if (colors[i] == 'R' && colors[i-1] != 'R'){
            stone_r += 1;
        }
        else if (colors[i] == 'B' && colors[i-1] != 'B'){
            stone_b += 1;
        }
        else if (colors[i] == 'G' && colors[i-1] != 'G'){
            stone_g += 1;
        }
    }

    total = stones - (stone_b + stone_g + stone_r);

    cout << total << "\n";
    return 0;
}