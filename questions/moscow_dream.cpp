#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	int a, b, c, n;

	cin >> a >> b >> c >> n;

	if ((a >= 1) && (b >= 1) && (c >= 1) && (n >= 3) && ((a+b+c) >= n)){
		cout << "YES" << endl;
	}
	else{
		cout << "NO" << endl;
	}

	return 0;
}
