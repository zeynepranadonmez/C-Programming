#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	D�NG�LERDE CONT�NUE DEY�M�
	
	*/
	
	int toplam = 0;
	int i;
	
	while( i<=10 ){
		
		if(i%2 == 1){ // tek say� ise cont yapar ve a�a��daki i�lemlerin hi�birini yapmaz ancak i ++ y� yapar 
			i++; //buraya ekledik sonsuz olmas�n diye
			continue;
		}
		
		toplam += i;
		i++;  // d�ng� sonsuz d�ng� oldu hi� artm�yor i hep 1 kal�yor o y�zden
		// ��z�m� i++ ba�ka yerlere koy
		
	}
	
	printf("%d", toplam);
	
// 1 den 10 a kadar olan �ift say�lar�n toplam�n� bulmu� olduk WHILE

	return 0;
}
