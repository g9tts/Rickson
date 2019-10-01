#include <stdio.h>


int contarVogais(char palavra[]) {					//Contagem de vogais
    char vogais[] = "aeiouAEIOU";										
    int numVogais = 0, i, j;

    for (i = 0; palavra[i] != '\0'; i++) {								
        for (j = 0; vogais[j] != '\0'; j++) {
            if (vogais[j] == palavra[i]) {
                numVogais++;
                break;
            }
        }
    }
																										
    return numVogais;
}
    
int main()

{
	int palavra[30];
	printf("Digite um texto: ");
	scanf("%[a-z A-Z]",palavra);
	
	printf("O texto contem: %d vogais.",contarVogais(palavra));
	
	return 0;
	
}
