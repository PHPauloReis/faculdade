#include <stdio.h>
#include <locale.h>

bool primo(int numero)
{	
	/**
	 * Contador armazena a quantidade de números que dividem perfeitamente o número
	 * informado no parâmetro da função
	 */
	int contador = 0;
	
	/**
	 * Se o número informado for 1, a função retorna true e nenhuma outra verificação
	 * é executada
	 */
	if(numero == 1) {
		return true;
	}	
	
	// Percorre todos os números entre 1 e o número informado
	for(int i=1; i<=numero; i++) {
		
		// Verifica se o número atual do lasso divide perfeitamente o número informado
		if(numero % i == 0) {
			contador++;
		}
		
		/**
		 * A cada volta do lasso o valor de contador é verificado, assim, ao ser
		 * identificado que contador é maior que 2 (ou seja, não é um número primo)
		 * a função retorna false e o código é parado. Com isso não é necessário
		 * percorrer todos os números dentro do intervalo de 1 até o número.
		 */
		if(contador > 2) {
			return false;
		}
	}
	
	/**
	 * Caso nenhuma das condições acima sejam satisfeitas, retorna true determinando 
	 * que o número informado é primo
	 */
	return true;
}

int main(int argc, char *argv)
{
	// Habilitar a acentuação
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Informe um número inteiro: ");	
	scanf("%d", &numero);
	
	if(primo(numero)) {
		printf("%d é um número primo \n", numero);
	} else {
		printf("%d não é um número primo \n", numero);
	}
	
	return 0;
}
