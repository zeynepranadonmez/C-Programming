#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	D�NG�LERDE CONT�NUE DEY�M�
	
	*/
	
	int toplam = 0;
	int i;
	
	for(i=1 ; i<=10 ; i++){
		
		if(i%2 == 1){ // tek say� ise cont yapar ve a�a��daki i�lemlerin hi�birini yapmaz ancak i ++ y� yapar 
			continue;
		}
		
		toplam += i;
		
	}
	
	printf("%d", toplam);
	
// 1 den 10 a kadar olan �ift say�lar�n toplam�n� bulmu� olduk

	return 0;
}
