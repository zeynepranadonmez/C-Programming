#include <stdio.h>
#define PI 3.14

int main(int argc, char *argv[]) {
	
	/*
	
	GÝRÝÞ ÇIKIÞ FONKSÝYONLARI
	
	PRÝNTF SCANF
	
	kullanýcýdan gelen deðeri atama
	
	*/
	
	// kullanýcýdan bir yarýçap (r) deðeri iste ve o yarýçap deðerine göre kürenin hacmini hesapla
	// kürenin hacmi V=(4/3)*pi*r^3
	
	float hacim;
	int yaricap;
	
	printf("Bir yaricap degeri giriniz: ");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("Kurenin hacmi: %f", hacim);
	
	

	return 0;
}
