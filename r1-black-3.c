#include <stdio.h>
int main() {

	printf("Enter an integer.\n");
	
	int n;
	scanf("%d", &n);

	int totalParts = n*0x19 + 0x64;

	if (totalParts == 0b001010100011) {
		printf("Right");
	}
	else {
		while (1==1){
			printf("Wrong");
		}
	}

	return 0;
}
