#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// faktöriyel alma programý
	
	int n;
	int fact = 1;
	
	printf("Faktoriyelini istediginiz sayiyi giriniz:");
	scanf("%d", &n);
	
	while( n != 0){
		
		printf("%d\n",n);
		
		fact = fact * n; 
		
		/*
		
		faktoriyel baþta 1 n imiz girdiðimiz sayi 6 ise 
		6*1 = 6 yani yeni fact 6 oldu sonra n bir azaldý n 5 fact 6
		6*5 = 30 þeklinde devam ediyor
		*/
		
		n--;
	}
	
	printf("Girdiginiz sayinin faktoriyeli: %d", fact);
		
	return 0;
}
