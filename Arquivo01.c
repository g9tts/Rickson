#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> 
#include <math.h>
#include <conio.h>
 
 int main(void){               //Questao 1
 	//Adaptação do programa para PT-BR
 	
	 setlocale(LC_ALL, "Portuguese");
 	
	 //Definição de variavel
 	
	 int a, num, in, c, x, y, k, pot; 
	 float cd1, cd2, cd3, cr, media, b, n1 = 1, n2 = 2, mp;
	 long decimal, q, r;
	 int i, j = 0;
	 char hexadecimal[100];
	 char nome[45];
	 double w = 10;
	 double h = 10;
	 double logaritmo_natural = 0;
	 double logaritmo_xbase10 = 0;
 	
	 //Informações sobre selecionaveis + leitor de variavel
 	 system("cls");
	 printf("\nDigite 0 para finalizar o programa\n"
	       "1 para o menu um\n"
		   "2 para o menu dois\n"
		   "3 para o menu três\n"
		   "4 para o menu quatro\n"
		   "5 para o menu cinco\n"
		   "6 para o menu seis\n"
		   "7 para o menu sete\n"
		   "8 para o menu oito\n"
		   "9 para o menu nove\n");
	scanf("%d", &a); 
	system("cls");
	
	   //Estrutura a ser repitida
	
	while(a)
	{
	   //Condicionais
	   
	   if(a == 1){                            //Questao 2
	   printf("Bem-vindo ao menu 1\n");  
	   printf("digite um numero inteiro: ");     //Indentifica se o numero é par ou impar
		scanf("%d",&num);
		if(num%2==0)//operador %
		{
		printf("Par");
		}
		else{
		printf("Ímpar");
		}
       }
	   else if(a == 2){                       //Questao 3
	   printf("Bem-vindo ao menu 2\n");         //Potenciação
	   printf ("Primeiro numero: ");
     	scanf ("%d",&x);
     	printf ("Segundo numero: ");
     	scanf ("%d",&y);
 
     	for (k>0;k<y;k++)
     	{
     	pot = x*(x*k);
     	}
    	 
        printf ("\n O resuldo é : %d", pot);
	   }
	   else if(a == 3){               
	   printf("Bem-vindo ao menu 3\n");      //Logaritmo     //Questao 4
	   printf("Digite suas 2 numeros para operação logaritmo: \n");
	   scanf("%f %f", &w, &h);  
	   logaritmo_natural = log(w);
	   
	   printf("Logaritmo natural de x %.2f = %.2f\n",w, logaritmo_natural);
	
	   logaritmo_xbase10 = log10(w);
	   printf("Logaritmo de x na base10 %.2f = %.2f\n",w, logaritmo_xbase10);
	   
	   logaritmo_natural = log(h);
	   
	   printf("Logaritmo natural de y %.2f = %.2f\n",w, logaritmo_natural);
	   
	   logaritmo_xbase10 = log10(h);
	   printf("Logaritmo de y na base10 %.2f = %.2f\n",w, logaritmo_xbase10);
	   
       }
	   else if(a == 4){                   //Questao 5
	   printf("Bem-vindo ao menu 4\n");   //Indentifica se o ano é bissexto ou nao
	  printf("digite um ano: ");
		scanf("%d",&num);
		if(num%4==0)   //operador %
		{
		printf("Ano Bissexto");
		}
		else{
		printf("Ano nao Bissexto");
		}
       }
	   else if(a == 5){                    //Questao 6
	   printf("Bem-vindo ao menu 5\n");       
	  printf("Digite suas 3 notas, para o calculo da media\n");
	   scanf("%f %f %f", &cd1, &cd2, &cd3);
	   cr=(cd1*n1)+(cd2*n1)+(cd3*n2)/cd1+cd2+cd3; //Calculo do CRE
	   media = (cd1 + cd2 + cd3)/3;               //Calculo da media
	   mp=(cd1*n1)+(cd2*n1)+(cd3*n2)/1+2+3;             //Calculo da media ponderada
	   printf("Sua media é %f\n", media);
	   printf("Media pondera é %f\n", mp);
	   printf("Seu CRE é %f\n", cr);
	   if(media>=6.0){
	   	printf("Parabens, voce foi aprovado!");
	   }
	   else
	   printf("Infelizmente, voce foi reprovado!");
       }
	   else if(a == 6){                      //Questao 7
	   printf("Bem-vindo ao menu 6\n");
	     printf("Digite suas 2 notas, para o calculo da media\n"); //Calculo da media
	   scanf("%f %f", &cd1, &cd2);  
	   media = (cd1 + cd2)/2;
	   
	   if(cd1>0 && cd1<=10 && cd2>0 && cd2<=10){         //Notas apenas entre 0 e 10
	   	printf("Sua media é %f", media);
       }
       else{
       	printf("ERROR404\n");
	   } 
        
       }
	   else if(a == 7){
	   printf("Bem-vindo ao menu 7\n");
  	   }
	   else if(a == 8){
	   printf("Bem-vindo ao menu 8\n");
	   }
	   else if(a == 9){                    //Questao 8
	   printf("Bem-vindo ao menu 9\n"); //Transformação da matricula em hexa-decimal e a repitação do nome
       printf("sua matricula, por favor: \n");
	   scanf("%ld", &decimal);
	   printf("seu nome, por favor: ");
	   scanf("%s",nome);
	 
	   q = decimal;
	 
	   while (q != 0)
	   {
	   r = q % 16;          
	   if (r < 10)
	   hexadecimal[j++] = 48 + r;   
	   else
	   hexadecimal[j++] = 55 + r;   
	   q = q / 16;            
	   }
	   printf("olá %s ",nome);
	   printf("sua matricula em hexadecimal :",decimal);
	   
	 
	 
	  for (i = j; i >= 0; i--)
	  printf("%c", hexadecimal[i]);
	  printf("\n");
	 }
	   else{ 
	   printf("\nComando inválido, por favor digite outro número: ");
       } 
    //Opções a serem repetidas + Leitor de variavel
    
	printf("\nDigite 0 para finalizar o programa\n"
	       "1 para o menu um\n"
		   "2 para o menu dois\n"
		   "3 para o menu três\n"
		   "4 para o menu quatro\n"
		   "5 para o menu cinco\n"
		   "6 para o menu seis\n"
		   "7 para o menu sete\n"
		   "8 para o menu oito\n"
		   "9 para o menu nove\n");
	scanf("%d", &a); 
	system("cls");
	
	   

	  if (a==0){  //Finaliza o programa
	printf("Programa finalizado!");
    }
}
    system("cls");
 	return 0;
 }
