#include<stdio.h>
int main(void) {
	int a[5];
	float b[3];
	char c[7];//배열에 문자열을 저장할 때는 항상 문자열의 끝을 알리는 널 문자가 들어갈 공간을 마련해야 한다.

	char str[7] = "coding";//[c][o][d][i][n][g]
	printf("%s\n", str);
	return 0;
}
