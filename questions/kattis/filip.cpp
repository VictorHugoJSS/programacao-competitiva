#include <bits/stdc++.h>

using namespace std;

void swap(char *pos1, char *pos2){
	char t = *pos1;
	*pos1 = *pos2;
	*pos2 = t;
}

int main(int argc, char *argv[]){

	char *num1 = (char *) malloc(3 * sizeof(char*));
  char *num2 = (char *) malloc(3 * sizeof(char*));
	int t1, t2;

	scanf("%s %s", num1, num2);

	swap(num1[0], num1[2]);
	swap(num2[0], num2[2]);

	t1 = atoi(num1);
	t2 = atoi(num2);

	if (t1 > t2){
		printf("%s\n", num1);
	}
	else{
		printf("%s\n", num2);
	}
  
  free(num1);
  free(num2);  
	return 0;
}
