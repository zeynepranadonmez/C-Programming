#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	F�BONACC�
	
	1 1 2 3 5...
	
	*/
	
	// fibonacci serisinin ilk 10 eleman�n� listeleyen kod
	
	int a,b,c,i;
	a=1;
	b=1;
	
	printf("%d\n",a);
	printf("%d\n",b);
	
	for(i=1 ; i<=8 ; i++){
		
		c = a + b;
		a = b;
		b = c;
		
		printf("%d\n",c);
	}

	return 0;
}
