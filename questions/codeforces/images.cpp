#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tc, total = 0;
	int row, col;
	cin >> tc;

	while (tc--){
		cin >> row >> col;
		char v[row][col];
		for (int i = 0; i < row; i++){
			for (int j = 0; j < col; j++){
				cin >> 	v[i][j];
			}
		}

		for (int i = 0; i < col; i++){
			if (v[0][i] == '0' || v[col-1][i] == '0'){
				total += 1;
			}
		}

		for (int i = 0; i < row; i++){
			if (v[i][0] == '0' || v[i][col-1] == '0'){
				total += 1;
			}
		}
		
		if (total >= row || total >= col){
			printf("-1\n");
		}
		else{
			printf("%d\n", total);
		}
		total = 0;
	}
}