#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	DÖNGÜLERDE CONTÝNUE DEYÝMÝ
	
	*/
	
	int toplam = 0;
	int i;
	
	while( i<=10 ){
		
		if(i%2 == 1){ // tek sayý ise cont yapar ve aþaðýdaki iþlemlerin hiçbirini yapmaz ancak i ++ yý yapar 
			i++; //buraya ekledik sonsuz olmasýn diye
			continue;
		}
		
		toplam += i;
		i++;  // döngü sonsuz döngü oldu hiç artmýyor i hep 1 kalýyor o yüzden
		// çözümü i++ baþka yerlere koy
		
	}
	
	printf("%d", toplam);
	
// 1 den 10 a kadar olan çift sayýlarýn toplamýný bulmuþ olduk WHILE

	return 0;
}
