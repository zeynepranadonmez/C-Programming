#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	
	MOD OPERAT�R�
	
	*/
	
	// 0 ile 50 aras�nda 5 e tam b�l�nen say�lar� listeleyen program
	
	int i,sayi;
	
	for(i=1 ; i<=50 ; i++){
		
		if(i%5==0){
			printf("%d\n",i);
		}
		else{
			printf("Hicbir sayi 5 e bolunmuyor..");
		}
		
		
	}

	return 0;
}
