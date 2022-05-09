#include <stdio.h>

int main(int argc, char *argv[]) {
	
/*
KARAR YAPILARI VE DÖNGÜLER

for( baþlangýç ; bitiþ ; artýþ miktarý )

i   sayaç = 0     ( (n*(n+1)) / 2 )
1   1
2   3
3   6
4   10
5   15
6   21
7   28
8   36
9   45
10  55

*/
     int sayac = 0;
     int i;
     
     for(i=1 ; i<=10 ; i++){
     	
     	sayac = sayac + i;
     	
	 }
	 
	 printf("Sayac = %d", sayac);


	return 0;
}
