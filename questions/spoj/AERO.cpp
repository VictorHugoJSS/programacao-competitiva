#include <bits/stdc++.h>

using namespace std;
vector <int> vi;

void max_traversal(int * arr, int A){
	int mx = 0;

	for (int i = 1; i <= A; i++){
		mx = max(mx, arr[i]);
	}

	for (int i = 1; i <= A; i++){
		if (arr[i] == mx){
			vi.push_back(i);
		}
	}
}
void array_of_zeros(int * arr){
	for (int i = 1; i < 101; i++){
		arr[i] = 0;
	}
}

void print_aero(){
	for (int i = 0; i < vi.size(); i++){
		cout << vi[i];
		if (i < vi.size()-1){
			cout << " ";
		}
	}
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int A, V, i = 0;
	int arr[101];

	array_of_zeros(arr);
	cin >> A >> V;

	while (A && V){
		int x, y;

		for (int i = 0; i < V; i++){
			cin >> x >> y;
			arr[x]++;
			arr[y]++;
		}

		max_traversal(arr, A);
		if (i == 0){
			cout << "Teste " << ++i << "\n";
			print_aero();
		}
		else{
			cout << "\nTeste " << ++i << "\n";
			print_aero();
		}

		array_of_zeros(arr);
		vi.clear();
		cin >> A >> V;
	}

	return 0;
}
