/*Écrire un programme C qui lit un entier puis détermine s'il est premier ou non.
On rappelle qu'un entier est dit premier s'il a exactement deux diviseurs différents; 1 et lui-même.
Ex: 2, 3, 7, 17, 101 sont tous premiers, et 4, 10, 27 ne le sont pas. */






#include <stdio.h>


int main() {
	int n ,i, drp=0;
	printf("veuillez entre n :");
	scanf("%d",&n);
	for(i=2;i<=(n/2);i++)
	if(n%i== 0){
		drp = 1;
		break;
	}
	if (drp == 0)
	printf("ce nombre est premier");
	else 
	printf("ce nombre n'est pas premier");
	
	return 0;
}
