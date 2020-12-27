#include <stdio.h>
#include <string.h>

int main() {
	char cadeia[5];
	int a = 0;
	int b = 0;
	
	printf("Digite uma cadeia: ");
	gets(cadeia);
	
	printf("Temos a seguinte cadeia: %s\n",cadeia);	
  printf("\n======Verficando se a cadeia pode ser reconhecida pela gramatica...=====\n");
	
  for(int i = 0; i < 5;i++){
	  if(cadeia[i] == 'a'){
			a++;
		}	 
		if(cadeia[i] == 'b'){
			b++;
		}
		if((cadeia[i] != 'a') && (cadeia[i] != 'b')){

      printf("Cadeia não suportada pela gramatica\n");	
      exit(0);
    }				
	}

	switch(cadeia[0]){
		case 'a':	
      printf("\n\t\t\t======Cadeia reconhecida! derivações=====\n\n");
      printf("S->AB\t");
			for(int i = 0; i<a-1;i++){						
				printf("A->aA\t");
			} 
				printf("A->a\t");

      for(int i = 0; i<b-1;i++){						
				printf("B->bB\t");
			} 
				printf("B->b\t");
      break;

		case 'b':
      printf("\n\t\t\t======Cadeia reconhecida! derivações=====\n\n");
      printf("S->AB\t");
      for(int i = 0; i<b-1;i++){						
          printf("B->bB\t");
        } 
          printf("B->b\t");

        for(int i = 0; i<a-1;i++){						
          printf("A->aA\t");
        } 
          printf("A->a\t");	
        break;
      default:
        printf("Cadeia não suportada pela gramatica\n");	
    }
}
