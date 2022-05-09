#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	BOOL VER� T�P�
	
	mant�ksal ifadeler do�ru ise true
	mant�ksal ifadeler yanl�� ise false
	ayn� zamanda b�t�n 0 olmayan say�lar (1,132,2500..vs) true say�l�r
	0 ise false de�eridir
	
	
	MANTIKSAL OPERAT�RLER
	
	<  ---> k���k m�d�r
	>  ---> b�y�k m�d�r
	<= ---> k���k ya da e�it midir
	>= ---> b�y�k ya da e�it midir
	== ---> e�it midir
	!= ---> e�it de�il midir
	
	MANTIKSAL BA�LA�LAR
	
	&& ---> mant�ksal and (ve)    -->
	 
	c�mlenin true olmas� i�in b�t�n ifadelerin true olmas� gerekir
	bir tane bile false varsa o mant�ksal c�mle false olur
	
	
	|| ---> mant�ksal or  (ya da) -->
	
	c�mlenin true olmas� i�in en az bir ifadenin true olmas� gerekir
	b�t�n ifadeler false ise o mant�ksal c�mle false olur
	
	
	!  ---> mant�ksal not (de�il) -->
	
	do�ru olan true ifadeyi yanl�� false yapar
	yanl�� olan false ifadeyi do�ru true yapar
	
	
	�ARTLI C�MLELER
	
	a = x > y ? x : y;

	*/
	
	int a, b = 20 , c = 30;
	a = b < c ? b : c; // b < c mi? �yleyse e�iti b de�ilse e�iti c 
	printf("%d", a);
	
	return 0;
}
