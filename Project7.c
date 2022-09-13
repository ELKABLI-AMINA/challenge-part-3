#include <stdio.h>

/* Écrire un programme C qui calcule le nième terme de la suite de Fibonacci, définie comme suit: Un=Un-1+Un-2 où U1=U0=1. */

int main() {
	int n , i;
	printf("veuillez enter la valeur de n:");
	scanf("%d",&n);
	if (n<1)
	printf("erreur: nombre negatif est interdit");
	else if (n==1 || n==2)
	printf("U%d = 1",n);
	else{
	}
	int U1=1, U2= 1, Un=i;
	for (i= 3;i<n;i++){
		Un = U1+U2;
		U1 = U2;
		U2 = Un;
	}
	printf("U%d =%d",n,Un);
	return 0;
}
