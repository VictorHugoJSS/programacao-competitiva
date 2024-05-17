#include <bits/stdc++.h>

using namespace std;

int mdc(int numberA, int numberB){
	if (numberB == 0){
		return numberA;
	}

	return mdc(numberB, numberA%numberB);
}

int main(){
	int sum;
	int num, deno, confirm = 0;
	cin >> sum;

	for(int i = 2; i <= 1000; i++){
		for (int j = 0; j < i; j++){
			if ((i + j) == sum){
				if (mdc(i,j) == 1){
					num = j;
					deno = i;
					confirm = 1;
					break;
				}
			}
		}
		if (confirm == 1){break;}
	}

	cout << num << " " << deno << "\n";
	return 0;
}
