#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int PALINDROMO() {
	char nombre[20];
	int longitudpalabra = strlen(nombre);
	int primeraletra = 0;
	int ultimaletra = longitudpalabra - 1;


	while (nombre[primeraletra] = nombre[ultimaletra])
	{
		if (primeraletra >= ultimaletra)
			return 1;
		primeraletra++;
		ultimaletra--;
	}
	return 0;
}



int main() {
	char nombre[20];
	printf("Ingresa tu nombre: ");
	scanf("%s", nombre);
	int resultado = PALINDROMO(nombre);
	if (resultado)
		printf("%s Es PALINDROMO\n", nombre);
	else {
		printf("%s No es PALINDROMO\n", nombre);
	}

	int i = 0;
	while (nombre[i]) {
		nombre[i] = toupper(nombre[i]);
		i++;
	}
	printf("Tu nombre en mayusculas es: %s\n", nombre);
	return 0;
}