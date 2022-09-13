#include <stdio.h>

int main() {
	 int x, i, j;
	 printf("donner un nombre :");
	 scanf ("%d",&x);
	 for( i=1; i<=7;i++){
	 	for(j=x-i; j>=1;j--)
	 	printf(" ");
	 	for (j=1;j<=i+i-1; j++)
	 printf("*");
	 printf("\n");
	 }
	 
	return 0;
}
