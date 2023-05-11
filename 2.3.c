
#include <stdio.h>
#include <stdlib.h>
int main() {
	float preco, pagamento;
	int forma;

	printf("Informe o valor do produto: ");
	scanf("%f", &preco);
	printf("Escolha um numero: ");
	scanf("%d", &forma);


	switch (forma) {
	case 1:

		pagamento = preco * 0.20;
		printf("O valor a pagar is: %.2f", pagamento);
		break;
	case 2:

		pagamento = preco * 0.18;
		printf("O valor a pagar is: %.2f", pagamento);
		break;
	case 3:

		pagamento = preco * 0.15;
		printf("O valor a pagar is: %.2f", pagamento);
		break;
	case 4:

		pagamento = preco / 2;
		printf("O valor a pagar is: %.2f", pagamento);
		break;
	case 5:
		pagamento = preco + (preco * 0.22);
		break;
	default:
		printf("comando invalido");
	}
		return 0;

	}


