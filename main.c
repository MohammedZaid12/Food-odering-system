#include <stdio.h>
#include <stdlib.h>
#define INPUT_FILE"cart.txt"
int main(int argc, char** argv) {
	printf("\n-----------------------------------------");
	printf("\nWelcome to the food ordering system\n\nPlease choose your desired selection\n");
	filterByParent();
	fflush(stdin);
	return 0;
}

