#include <stdio.h>
#include <locale.h>

bool primo(int numero)
{	
	/**
	 * Contador armazena a quantidade de n�meros que dividem perfeitamente o n�mero
	 * informado no par�metro da fun��o
	 */
	int contador = 0;
	
	/**
	 * Se o n�mero informado for 1, a fun��o retorna true e nenhuma outra verifica��o
	 * � executada
	 */
	if(numero == 1) {
		return true;
	}	
	
	// Percorre todos os n�meros entre 1 e o n�mero informado
	for(int i=1; i<=numero; i++) {
		
		// Verifica se o n�mero atual do lasso divide perfeitamente o n�mero informado
		if(numero % i == 0) {
			contador++;
		}
		
		/**
		 * A cada volta do lasso o valor de contador � verificado, assim, ao ser
		 * identificado que contador � maior que 2 (ou seja, n�o � um n�mero primo)
		 * a fun��o retorna false e o c�digo � parado. Com isso n�o � necess�rio
		 * percorrer todos os n�meros dentro do intervalo de 1 at� o n�mero.
		 */
		if(contador > 2) {
			return false;
		}
	}
	
	/**
	 * Caso nenhuma das condi��es acima sejam satisfeitas, retorna true determinando 
	 * que o n�mero informado � primo
	 */
	return true;
}

int main(int argc, char *argv)
{
	// Habilitar a acentua��o
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Informe um n�mero inteiro: ");	
	scanf("%d", &numero);
	
	if(primo(numero)) {
		printf("%d � um n�mero primo \n", numero);
	} else {
		printf("%d n�o � um n�mero primo \n", numero);
	}
	
	return 0;
}
