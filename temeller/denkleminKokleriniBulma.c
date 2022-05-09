#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
	// ax^2+bx+c þeklindeki denklemin köklerini bulma
	// delta = b^2-4a*c
	// x1 =  ( -b + (sqrt(delta)) ) / 2*a
	// x2 =  ( -b - (sqrt(delta)) ) / 2*a
	
	int a,b,c;
	float x1,x2;
	float delta;
	
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	printf("c: ");
	scanf("%d", &c);
	
	delta = b*b - (4*a*c);
	x1 =  ( -b + (sqrt(delta)) ) / 2*a;
	x2 =  ( -b - (sqrt(delta)) ) / 2*a;
	
	printf("delta: %f\n",delta);
	printf("x1: %f\n",x1);
	printf("x2: %f\n",x2);

	return 0;
}
