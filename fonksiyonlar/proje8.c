#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	char kitap[40];
	printf("Kitabin ismi: ");
	scanf("%s", kitap);
	
	printf("%s", kitap);
	
	printf("\n");
	
	printf("%10s", kitap); // ilk 10 karakteri kullan�r 5 karakterli kelimeyse 5 karakterli bir bos alan b�rak�r
	
	printf("\n");
	
	printf("%20.5s", kitap); // 20 karakterli alan ay�rd� .5s diyerek 5 karakteri kulland�rd�k
	
	printf("\n");
	
	printf("%-20s", kitap); // sola do�ru dayayl� olarak yap�yor bo�lar null 
	
	return 0;
}
