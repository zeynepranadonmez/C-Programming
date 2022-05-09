#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int sayilar[]={10,15,20,25};
	int toplam = 0;
	int i;
	
	for(i=0 ; i<4 ; i++){
		toplam = toplam + sayilar[i];
	}
	
	printf("Toplam: %d",toplam);


	 

	return 0;
}
