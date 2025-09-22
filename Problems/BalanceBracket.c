#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	char str[n][1000];
	for(int i=0; i<n; i++) {
		scanf(" %[^\n]",str[i]);
	}
	for(int i=0; i<n; i++) {
		int bal=0,valid=1,group=0;
		int len=strlen(str[i]);
		for(int k=0; k<len; k++) {
			if(str[i][k]=='(') bal++;
			else bal--;
			if(bal<0) {
				valid=0;
				break;
			}
			if(bal==0) group++;
		}
		if(valid==1 && group>=2 && bal==0){
		    printf("YES\n");
		}
		else printf("NO\n");
	}

	return 0;
}