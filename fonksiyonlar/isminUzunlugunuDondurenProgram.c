#include <stdio.h>
#include <string.h>

int uzunlukDon(char name[]){
	
	int uzunluk = 0;
	int i;
	
	// i deðeri null karakter olmadýðý zaman Z e y ... \0
	for(i=0 ; name[i] != '\0' ; i++){
		
		uzunluk++;
	}
	
	return uzunluk;
}

int main(int argc, char *argv[]) {
	
	char isim[] = "Zeynepr";
	
	printf("%d", uzunlukDon(isim));

	return 0;
}
