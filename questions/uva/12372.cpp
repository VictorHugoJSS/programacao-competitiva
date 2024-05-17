// UVA ONLINE JUDGE
// Question: 12372

#include <iostream>

using namespace std;

int main(){
	int tests;

	cin >> tests;

	for (int i = 0; i < tests; i++){
		int L, W, H;

		cin >> L >> W >> H;

		if ((L <= 20) && (W <= 20) && (H <= 20)){
			cout << "Case " << i+1 << ": good" << endl;
		}
		else{
			cout << "Case " << i+1 << ": bad" << endl; 
		}
	}
	return 0;
}
