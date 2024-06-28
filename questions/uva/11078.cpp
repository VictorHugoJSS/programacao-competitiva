#include <iostream>
#include <climits>
using namespace std;

long long int max(long long int a, long long int b){
	if (a > b){
		return a;
	}
	return b;
}
long long int min(long long int a, long long int b){
	if (a < b){
		return a;
	}
	return b;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	long long int temp;
	
	cin >> tc;

	while (tc--){
		long long int n, mx, mn, diff = LONG_LONG_MIN;
		cin >> n;
		long long int arr[n];

		for (int i = 0; i < n; i++){
			cin >> arr[i];
		}
		mx = mn = arr[0];
		for (int i = 1; i < n; i++){
			diff = max(diff, max(mx-arr[i], mx-arr[i]));
			mx = max(mx, arr[i]);
			mn = min(mn, arr[i]);
		}

		cout << diff << "\n";
	}

	return 0;
}
