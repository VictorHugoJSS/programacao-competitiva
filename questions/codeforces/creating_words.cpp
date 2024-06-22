#include <bits/stdc++.h>

using namespace std;

void swap(char *a, char *b){
	char t = *a;
	*a = *b;
	*b = t;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tc;
	char a[4], b[4];
	scanf("%d", &tc);
	getchar();

	while (tc--){
		scanf("%s %s", a , b);
		swap(a[0],b[0]);
		printf("%s %s\n", a, b);
	}

	return 0;
}
