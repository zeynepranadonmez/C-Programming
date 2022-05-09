#include <stdio.h>
#include<string.h>

void tersCevir (char dizi[]){
	
	int i, uzunluk, gecici;
	
	uzunluk = strlen(dizi);
	
	// origomi --> imogiro
	
	for(i=0 ; i<uzunluk/2 ; i++){
		
		gecici = dizi[i];
		dizi[i] = dizi[uzunluk-1-i];
		dizi[uzunluk-1-i] = gecici;
}

}

int main(int argc, char *argv[]) {
	
	char text[200];
	
	scanf("%s", text);
	
	tersCevir(text);
	printf("%s",text);
	

	

	return 0;
}
