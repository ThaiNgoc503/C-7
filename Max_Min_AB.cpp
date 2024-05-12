#include <iostream>

//a ,b
// find max number <= a % b == 0
//find min nunber >= a % b == 0
int main(int argc, char** argv) {
	int a, b;
	scanf("%d %d", &a, &b);
	int so1 = (a / b) * b;
	int so2 = (a / b + 1) * b;
	printf("%d %d", so1, so2);
}
