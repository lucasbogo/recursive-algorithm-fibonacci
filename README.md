# recursive-algorithm-fibonacci
Programa em **C** que implementa um função recursiva cuja função é retornar os termos da série de Fibonacci.

### Fórmula Fibonacci:
```Fn = Fn – 1 + Fn – 2```

### Funçao Recursiva:

```
long fib (int numero) {
	if (numero <= 2)
		return (1);
	else 
	return (fib(numero-1) + fib(numero-2));
}
```
### Resultado para o numero inteiro 5:

```
Sequencia Fibonacci: 5
1 1 1 2 3
```
