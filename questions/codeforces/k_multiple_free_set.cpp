#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n, k;

	scanf("%d %d", &n, &k);

	vector<ll> v(n), set;
	for (int i = 0; i < n; i++){
		scanf("%lld", &v[i]);
	}

	sort(v.begin(), v.end());

	for (int j = 0; j < n; j++){
		int a = 0, b = set.size()-1;
		bool mult = false;
	
		while (a <= b){
			int mid = (a+b)/2;

			if (set[mid] * 2 == v[j]){
				mult = true;
				break;
			}
			else if (set[mid] * 2 > v[j]){
				b = mid - 1;
			}
			else{
				a = mid + 1;
			}
			
		}
		
		if (!mult){
			    set.push_back(v[j]);
		}
	}
	printf("%d\n", set.size());

	return 0;

}	
