#pragma warning(disable: 4996) 
#include <cstdio>
#include <iostream>

int main() {
	unsigned int answer = 4294967295;
	unsigned int answer2 = 2147483648;
	int answer3 = 2147483647;
	int answer4 = 2147483647;
	
	unsigned int a = -10;
	unsigned int b = 10;
	
	int c = a + b;
	unsigned int d = a + b;

	//scanf("%i", &answer);
	printf("%u\n", answer);
	printf("%u\n", answer4);
	printf("%d\n", answer4);

	printf("%d", sizeof(int));
	return 0;
}