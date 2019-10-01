#include <stdio.h>
#include <stdlib.h>

int contarStr(char str[30]){               
	int i=0, counter = 0;                                  //Contagem de coracteres
	
	for(i=0;i<30;i++)                       
	{
		if(str[i] != '\0')				          	
			counter++;                		
		else
			return counter;                     
	}
	return counter;
}

int main()   
 

{
	char str1[30];							                  
	printf("Digite um texto: ");
	scanf("%[a-z A-Z]",str1);				              
    
	printf("Essa frase possui %d caracteres.\n",contarStr(str1));			

	return 0;
}	

