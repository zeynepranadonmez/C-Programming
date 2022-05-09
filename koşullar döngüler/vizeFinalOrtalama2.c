#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int vize;
	int final;
	float ortalama;
	
	printf("Vize notunuzu giriniz:");
	scanf("%d", &vize);
	printf("Final notunuzu giriniz:");
	scanf("%d", &final);
	
	ortalama = ( ( vize + final ) / 2);
	
	printf("Dersinizin ortalamasi: %f\n", ortalama);
	
	if(ortalama >= 90){
		printf("Harf notunuz AA ve dersten gectiniz");
	}
	else if(ortalama >= 60 && ortalama < 90){
		printf("Harf notunuz BB ve dersten gectiniz");
	}
	else if(ortalama >= 50 && ortalama < 60){
		printf("Harf notunuz CC ve dersten gectiniz");
	}
	else{
		printf("Harf notunuz FF ve dersten kaldiniz");
		printf("\nLutfen butunleme sinavina giriniz...");
	}


	return 0;
}
