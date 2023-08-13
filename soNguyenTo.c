#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool ngTo(int n) {
	if(n < 2) {
		return false;
	}
	int i;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int a, b;
	printf("Nhap [a,b]: ");
	scanf("%d%d", &a, &b);
	if(a > 0 && b > 0) {
		int i;
		for(i = a; i <= b; i++) {
			if(ngTo(i)) {
				printf("%10d", i);
			}
		}
	} else {
		printf("Nhap lai [a,b].");
	}
	
	return 0;
}