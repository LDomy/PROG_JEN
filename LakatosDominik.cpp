#include<stdio.h>
#include<iostream>
int main() {
	setlocale(LC_ALL,"hun");
	int tavasz = 0;
	int nyar = 0;
	int osz = 0;
	int tel = 0;
	char bekert;
	
	printf("K�rek h�napokat:");scanf("%d",&bekert);
	
	
	while (bekert != 0) {
	switch(bekert) {
		case 1:case 2:case 12: tel += 1; printf("A t�li h�napokban tal�lhat� \n");break;
		case 3:case 4:case 5: tavasz += 1; printf("A tavaszi h�napokban tal�lhat� \n");break;
		case 6:case 7:case 8: nyar += 1; printf("A ny�ri h�napokban tal�lhat� \n"); break;
		case 9:case 10:case 11: osz += 1; printf("Az �szi h�napokban tal�lhat� \n"); break;
		default: printf("Hib�s adatott adott meg \n"); break;
		case 0: break;
		
		
		
	}	
		printf("K�rek h�napokat:");scanf("%d",&bekert);
		
	}
	
	
	
	
	
	if (tavasz > 0 | nyar > 0 | osz > 0 | tel > 0){	
	printf("%d tavaszi h�napot adtunk meg. \n%d ny�ri h�napot adtunk meg. \n%d �szi h�napot adtunk meg. \n%d t�li h�napot adtunk meg \n", tavasz,nyar,osz,tel);
	}else{
		printf("Hib�s adatot adott meg, ind�tsa �jra a programot");
	}
	
}
