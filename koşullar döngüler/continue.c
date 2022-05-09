#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	DÖNGÜLERDE CONTÝNUE DEYÝMÝ
	
	*/
	
	int toplam = 0;
	int i;
	
	for(i=1 ; i<=10 ; i++){
		
		if(i%2 == 1){ // tek sayý ise cont yapar ve aþaðýdaki iþlemlerin hiçbirini yapmaz ancak i ++ yý yapar 
			continue;
		}
		
		toplam += i;
		
	}
	
	printf("%d", toplam);
	
// 1 den 10 a kadar olan çift sayýlarýn toplamýný bulmuþ olduk

	return 0;
}
