#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// StrCpy - StrnCpy
	
	// KOPYALAMA
	
	char kaynak[30]="Merhana Balýkesir";
	char kopya[30]="";
	
	strcpy(kopya,kaynak);
	
	printf("%s", kopya);
	
	


	return 0;
}
