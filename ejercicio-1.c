#include <stdio.h>

#define TIMES 10

int main(int argc, char const *argv[]){
	int i = 1;
	while (i <= TIMES) {
		printf("Hola mundo\n", i);
		i = i + 1;
	}

	return 0;
}