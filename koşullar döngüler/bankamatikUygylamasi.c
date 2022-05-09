#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int islem;
	int bakiye = 1000;
	int tutar;
	
	printf("ISLEMLER:\n");
	printf("1- Para cekme:\n");
	printf("2- Para yatirma:\n");
	printf("3- Havale yapma:\n");
	printf("4- Bakiye sorgulama:\n");
	printf("5- Karti iade etme:\n\n");
	
	printf("Yapmak istediginiz islemi seciniz:\n");
	scanf("%d", &islem);
	
	switch(islem){
		case 1:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Cekilecek tutar:");
			scanf("%d", &tutar);
			if(tutar>bakiye){
				printf("Bakiye yetersiz\n");
			}
			bakiye -= tutar; //bakiyeyi tutar kadar düşürme
			printf("Bakiyeniz: %d", bakiye);
			break;
		
		case 2:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Yatirilacak tutar:");
			scanf("%d", &tutar);

			bakiye += tutar; //bakiyeyi tutar kadar arttırma
			printf("Bakiyeniz: %d", bakiye);
			break;
			
		case 3:
			printf("Bakiyeniz: %d\n", bakiye);
			printf("Havale yapilacak tutar:");
			scanf("%d", &tutar);
			if(tutar>bakiye){
				printf("Bakiye yetersiz\n");
			}
			bakiye -= tutar; //bakiyeyi tutar kadar düşürme
			printf("Bakiyeniz: %d", bakiye);
			break;
			
		case 4:
			printf("Bakiyeniz: %d\n", bakiye);
			break;
			
		case 5:
			printf("Kartiniz iade edildi.. \n");
         	break;
			
		default:
			printf("Bilinmeyen islem yaptiniz. Lutfen tekrar kontrol ediniz..");
			break;
		
	return 0;
}

}
