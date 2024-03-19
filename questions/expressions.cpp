#include <bits/stdc++.h>

using namespace std;

struct stacks
{
	int size;
	int top;
	char * simbol; 
};
typedef stacks Stacks;
int is_Empty(Stacks * s){
	if (s->top == -1){
		return 1;
	}
	return 0;
}
char getOpen(char current){
	switch (current)
	{
	case '}': return '{'; 
	case ']': return '[';
	case ')': return '(';
	}
}

Stacks * Create_Stacks(Stacks * s){
	Stacks arr = (Stacks *) malloc(sizeof(Stacks));
	arr->simbol = (char *) malloc(10 * sizeof(char));
	arr->top = -1;
	arr->size = 10;
	return arr;
}
void Stack_Resize(Stacks * s){
	int NewCapacity = s->size * 2;
	char * NewArray = (char *) malloc(NewCapacity * sizeof(char));

	for (int i = 0; i < s->size; i++){
		*(NewArray+i) = *(s->simbol+i);
	}
	free(s->simbol);
	s->simbol = NewArray;
	s->size = NewCapacity;
}
void Push(Stacks * s, char simbol){
	if (s->top == s->size){
		Stack_Resize(s);
	}
	*(s->simbol+s->top++) = simbol;
}
int Pop(Stacks * s){
	
}
int verify(char * arr){
	Stacks * s = Create_Stacks(s);

}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int tc;
	cin >> tc;

	while(tc--){
		char * s = (char *) malloc(10000 * sizeof(char));
		scanf("%s", s);

		if (verify(s)){
			printf("S\n");
		}
		else{
			printf("N\n");
		}
		free(s);
	}
}
