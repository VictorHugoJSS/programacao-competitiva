#include <bits/stdc++.h>
using namespace std;

int main(){
	int part, B, hotels, weeks;
	int value = 999999;

	cin >> part >> B >> hotels >> weeks;

	while (hotels--){
		int t, sum = 0, b;

		scanf("%d", &b);

		for (int i = 0; i < weeks; i++){
			scanf("%d", &t);

			if (t >= part){
				sum = part * b;
			}
		}

		value = sum;
	}

	if (value > B || value == 0){
		printf("stay home\n");
	}
	else{
		printf("%d\n", value);
	}

	return 0;
}