#include <stdio.h>
#define PI 3.14

int main(int argc, char *argv[]) {
	
	/*
	
	G�R�� �IKI� FONKS�YONLARI
	
	PR�NTF SCANF
	
	kullan�c�dan gelen de�eri atama
	
	*/
	
	// kullan�c�dan bir yar��ap (r) de�eri iste ve o yar��ap de�erine g�re k�renin hacmini hesapla
	// k�renin hacmi V=(4/3)*pi*r^3
	
	float hacim;
	int yaricap;
	
	printf("Bir yaricap degeri giriniz: ");
	scanf("%d", &yaricap);
	
	hacim = (4/3.0)*PI*(yaricap*yaricap*yaricap);
	printf("Kurenin hacmi: %f", hacim);
	
	

	return 0;
}
