#include<stdio.h>
#include<iostream>
int main() {
	setlocale(LC_ALL,"hun");
	int tavasz = 0;
	int nyar = 0;
	int osz = 0;
	int tel = 0;
	char bekert;
	
	printf("Kérek hónapokat:");scanf("%d",&bekert);
	
	
	while (bekert != 0) {
	switch(bekert) {
		case 1:case 2:case 12: tel += 1; printf("A téli hónapokban található \n");break;
		case 3:case 4:case 5: tavasz += 1; printf("A tavaszi hónapokban található \n");break;
		case 6:case 7:case 8: nyar += 1; printf("A nyári hónapokban található \n"); break;
		case 9:case 10:case 11: osz += 1; printf("Az õszi hónapokban található \n"); break;
		default: printf("Hibás adatott adott meg \n"); break;
		case 0: break;
		
		
		
	}	
		printf("Kérek hónapokat:");scanf("%d",&bekert);
		
	}
	
	
	
	
	
	if (tavasz > 0 | nyar > 0 | osz > 0 | tel > 0){	
	printf("%d tavaszi hónapot adtunk meg. \n%d nyári hónapot adtunk meg. \n%d õszi hónapot adtunk meg. \n%d téli hónapot adtunk meg \n", tavasz,nyar,osz,tel);
	}else{
		printf("Hibás adatot adott meg, indítsa újra a programot");
	}
	
}
