#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


void solve() {
	double pi = 3.14159265;
	printf("pi = %.2f\n", pi);
	printf("%.4f\n", pi);
	printf("%.6f\n", pi);
	printf("%.8f\n", pi);
	printf("%e\n", pi);

}

int main()
{
	solve();
	return 0;
}