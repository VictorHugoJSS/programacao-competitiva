// UVA ONLINE JUDGE
// Question: 11614

#include <iostream>

using namespace std;

int rows(long int);

int main(){
	int tests;

	cin >> tests;

	for (int i = 0; i < tests; i++){
        long int n, row;

		cin >> n;

		if (n == 1){
			cout << 1 << endl;
			continue;
		}
        row = rows(n);
        cout << row << endl;
	}
}

int rows(long int n){

    long int q = n;
    int row = 1;

    for (int i = 2; q != 1; i++){
        q /= i;
        row++;
    }

    return row;
}
