#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,i = 1;
	long long int temp;
	while (cin >> n){
		long long int max = LONG_LONG_MIN, min = LONG_LONG_MAX, range;
		for (int i = 0; i < n; i++){
			cin >> temp;
			max = temp > max ? temp:max;
			min = temp < min ? temp:min;
		}
		range = max - min;
		printf("Case %d: %lld %lld %lld\n", i++, min, max, range);
	}

	return 0;
}
