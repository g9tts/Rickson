#include <stdio.h>
#include <stdlib.h>
#include <locale.h> 
#include <conio.h>

int main(){
  
  setlocale(LC_ALL, "Portuguese");

	char text1[500];	
	char text2[500];
   
	printf ("Digite duas frases para compara��o:\n");
	scanf ("%s %s", &text1, &text2);
   
	if (strcmp(text1, text2) == 0 ){

	printf ("� o mesmo texto");
	}
	else{

	printf("N�o � o mesmo texto");  
	}
  }
