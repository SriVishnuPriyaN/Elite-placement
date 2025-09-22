#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	char str[n][1000];

	for(int i = 0; i < n; i++) {
		scanf(" %[^\n]", str[i]);
	}

	for(int i = 0; i < n; i++) {
		int j=0;
		if(str[i][0]!='\0')
			printf("%c",str[i][0]);
		while(str[i][j]!='\0') {
			if(str[i][j]==' ' && str[i][j+1]!='\0') {
				printf("%c",str[i][j+1]);
			}
			j++;
		}
		printf("\n");
	}

	return 0;
}
