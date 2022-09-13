#include <stdio.h>

/* Écrivez un programme en C pour calculer la somme du maximum de 10 nombres en ignorant les nombres négatifs du calcul.*/

int main() {
	int n,i=1;
	int somme = 0;

	while(i<=10){
		printf("entre un nombre %d :",i);
		scanf("%d",&n);
		if(n<0)
		   continue;
		somme+=n;
		i++;
	}
	printf("la somme est %d",somme);
	
	
	return 0;
}
