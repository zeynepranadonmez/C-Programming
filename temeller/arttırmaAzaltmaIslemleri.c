#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	ATAMALAR, ARTTIRMA AZALTMA İŞLEMLERİ
	
	arttırma:  i = i+1 aynı zamanda i +=1
	           i++  ++i
	           
	           int i = 4
	           i++ --> 4 basar sonra 5 yapar hafızada
	           
	           int i = 4
	           ++i --> arttırır yazar 5 basar
	
	*/
	
	
	int x =5;
	int y = 7;
	int a =2;
	
	x = y;           // y = 7 , x = 7
	y = x + a + 1;   // 7 + 2 + 1 = 10 = y
                     // x = 7 , y = 10 , a = 2
					 
	printf("x:%d y:%d a:%d\n", x, y, a);	
	
	
	x = 4;
	y = 5;
	a = 6;
	int b = 8;
	
	printf("x:%d y:%d a:%d b:%d\n", --x, ++y, a++, b--);
	printf("a:%d b:%d", a, b);
			  	

	return 0;
}
