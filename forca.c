#include <stdio.h>
#include <string.h>

int main(){


	char palavra[20];
	sprintf(palavra, "MELANCIA");

	int acertou = 0;
	int enforcou = 0;

  
	do{
		char chute;
		printf("letra?\n");
		scanf("%c", &chute);

		for (int i = 0; i < strlen(palavra); i++)
		{
			if(palavra[i] == chute){
				printf("na posicao %d tem essa letra!\n", i);
			}
		}


	}while(acertou == 0 && enforcou == 0);

}