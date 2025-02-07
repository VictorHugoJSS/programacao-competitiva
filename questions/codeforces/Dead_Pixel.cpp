#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
	int tc;

	scanf("%d", &tc);

	while (tc--){
		int a,b, x, y;
		

		scanf("%d %d %d %d", &a, &b, &x, &y);
		

		ll dist1 = a*y;
		ll dist2 = b*x;
		ll dist3 = (a-x-1) * b;
		ll dist4 = a * (b-y-1);

		ll ans = max(dist1, dist2);
		ans = max(ans, max(dist3, dist4));

		printf("%lld\n", ans);
	}
}