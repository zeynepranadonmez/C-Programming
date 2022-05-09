#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	BOOL VERÝ TÝPÝ
	
	mantýksal ifadeler doðru ise true
	mantýksal ifadeler yanlýþ ise false
	ayný zamanda bütün 0 olmayan sayýlar (1,132,2500..vs) true sayýlýr
	0 ise false deðeridir
	
	
	MANTIKSAL OPERATÖRLER
	
	<  ---> küçük müdür
	>  ---> büyük müdür
	<= ---> küçük ya da eþit midir
	>= ---> büyük ya da eþit midir
	== ---> eþit midir
	!= ---> eþit deðil midir
	
	MANTIKSAL BAÐLAÇLAR
	
	&& ---> mantýksal and (ve)    -->
	 
	cümlenin true olmasý için bütün ifadelerin true olmasý gerekir
	bir tane bile false varsa o mantýksal cümle false olur
	
	
	|| ---> mantýksal or  (ya da) -->
	
	cümlenin true olmasý için en az bir ifadenin true olmasý gerekir
	bütün ifadeler false ise o mantýksal cümle false olur
	
	
	!  ---> mantýksal not (deðil) -->
	
	doðru olan true ifadeyi yanlýþ false yapar
	yanlýþ olan false ifadeyi doðru true yapar
	
	
	ÞARTLI CÜMLELER
	
	a = x > y ? x : y;

	*/
	
	int a, b = 20 , c = 30;
	a = b < c ? b : c; // b < c mi? öyleyse eþiti b deðilse eþiti c 
	printf("%d", a);
	
	return 0;
}
