#include <stdio.h>

//funcao recursiva do fibonacci
long fib (int numero) {
	if (numero <= 2)
		return (1);
	else 
	return (fib(numero-1) + fib(numero-2));
}

int main () {
	int numero;
	int i;
	printf("Digite um numero: ");
	scanf("%d", &numero);
	
	//chamada da funcao recursiva do fibonacci
	fib(numero);
	printf("Sequencia Fibonacci: %d\n", numero); 
    
	for(i = 0;i<numero;i++) {
      printf("%ld ",fib(i));            
   }

return 0;
	
}
