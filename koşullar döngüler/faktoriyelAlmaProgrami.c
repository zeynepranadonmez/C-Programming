#include <stdio.h>

int main(int argc, char *argv[]) {
	
	// fakt�riyel alma program�
	
	int n;
	int fact = 1;
	
	printf("Faktoriyelini istediginiz sayiyi giriniz:");
	scanf("%d", &n);
	
	while( n != 0){
		
		printf("%d\n",n);
		
		fact = fact * n; 
		
		/*
		
		faktoriyel ba�ta 1 n imiz girdi�imiz sayi 6 ise 
		6*1 = 6 yani yeni fact 6 oldu sonra n bir azald� n 5 fact 6
		6*5 = 30 �eklinde devam ediyor
		*/
		
		n--;
	}
	
	printf("Girdiginiz sayinin faktoriyeli: %d", fact);
		
	return 0;
}
