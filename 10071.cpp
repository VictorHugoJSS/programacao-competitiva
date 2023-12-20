// UVA Oline Judge
// Question: 10071 - Back to High School Physics

#include <stdio.h>

int main(){
	int velocity, seconds, displacement;
	int i = 0;

	while (scanf("%d %d", &velocity, &seconds) != EOF){
		displacement = (velocity * seconds) * 2;

		printf("%d\n", displacement);
	}
	return 0;
}
