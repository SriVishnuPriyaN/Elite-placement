/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
	int count=0,val=0;
	for(int i=0; i<n; i++) {
		count=0;
		int len=strlen(str[i]);
		for(int k=0; k<len-1; k++) {
			if(str[i][k]=='$') continue;
			if(str[i][k]==str[i][k+1]) {
				str[i][k+1]='$';
				count++;
			}
		}
        if(count>0){
            printf("%d\n",count);
        }
        else
            printf("%d\n",len);
	}
	return 0;
}
