#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){

	*div = a / b;
	*mod = a % b;

}


int main(){
	
	int a, b, div, mod;
	a = 10;
	b = 3;
	
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d\nmod = %d\n",div, mod);
	return 0;
}
