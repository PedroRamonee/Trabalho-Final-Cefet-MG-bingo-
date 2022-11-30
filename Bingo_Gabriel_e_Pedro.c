
#include <stdio.h>
#include <stdlib.h>
//Biblioteca que tr�s a fun��o que gera nums aleat�rios
#include <time.h>
//Pedro Correa & Gabriel Agostinho -- Bingo LALP


int main(){
	
	srand(time(NULL)); //gerando a semente que gerar� nums randons. 
	fflush(stdin);
	
	int jogador1[16], jogador2[16], rec, num[60]; //definindo vetor para cada jogador e para os n�meros gerados
	int i, j, k=0, l, m, t, cont=0; //variaveis de controle 
	int pont1 = 0, pont2 = 0; //variaveis para o score
	int pode = 1; // Variavel booleana improvisada, vai determinar se � falso ou verdadeiro um loop
	
	for( i = 0; i < 16 ; i++){ //tabela 1
		
		t = rand() % 60;
		// Caso T seja 0 ele vira 60 autom�ticamente
		if( t == 0){
			t = 60;
		}
		// o vetor do jogador recebe o numero de t
		jogador1[i] = t;
		// loop que vai verificar se o num repete
		for(m = 0; m < i; m++){
			//caso o num repita ele volta um passo para tr�s
			if(jogador1[m] == t){
				i--;
			}
		}
	}
	

	
	
	/* mesmo passo a passo da tabela acima ;)*/
	
    for( i = 0; i < 16 ; i++){ //tabela 2
		
		t = rand() % 60;
		// Caso T seja 0 ele vira 60 autom�ticamente
		if( t == 0){
			t = 60;
		}
		
		jogador2[i] = t;
		
		for(m = 0; m < i; m++){
			if(jogador2[m] == t){
				i--;
			}
		}
	}


	
	
	
	while(pont1 != 16 && pont2 != 16){  
		
		pode = 1;
		/*Loop que n�o deixar� gerarmos dois numeros iguais ou zero;
		 enquanto a vari�vel "pode" for diferente de 0, ou seja, verdadeira, o loop vai rodar, isso quer dizer que o numero � igual a 0 ou foi repetido;
		 qando a v�riavel for 0, isto �, falso o loop vai parar e o resto do jogo ser� processado;
		 com ele sendo falso o numero gerado � completamente novoe diferente de 0.
		 */
		while(pode){
		
			t = rand() % 60;
		
			if( t == 0){
				t = 60;
			}
		
			num[k] = t;								/* Mesmo passo a passo da gera��o das cartelas, em rela��o a repeti��o de numeros e do numero 0*/
		
			pode = 0;
		
			for(l = 0; l < k; l++){
				if(num[l] == t){
				pode = 1;
			}
		}
	}	
	// PINGUINS !!!!!!!! (n�s)
printf("            PEDRO                                      GABRIEL                   \n\n\n");
printf("          ,888888b.                                  ,888888b.                   \n");
printf("        .d888888888b                               .d888888888b                  \n");
printf("    _..-'.`*'_,88888b                          _..-'.`*'_,88888b                 \n");
printf("  ,'..-..`\"ad88888888b.                      ,'..-..`\"ad88888888b.               \n");
printf("         ``-. `*Y888888b.                           ``-. `*Y888888b.             \n");
printf("             \\   `Y888888b.                             \\   `Y888888b.           \n");
printf("             :     Y8888888b.                           :     Y8888888b.         \n");
printf("             :      Y88888888b.                         :      Y88888888b.       \n");
printf("             |    _,8ad88888888.                        |    _,8ad88888888.      \n");
printf("             : .d88888888888888b.                       : .d88888888888888b.     \n");    // :)
printf("             \\d888888888888888888                       \\d888888888888888888     \n");
printf("             8888;'''`88888888888                       8888;ss'`88888888888     \n");
printf("             888'     Y8888888888                       888'N\"N Y8888888888      \n");
printf("             `Y8      :8888888888                       `Y8 N  \" :8888888888     \n");
printf("              |`      '8888888888                        |` N    '8888888888     \n");
printf("              |        8888888888                        |  N     8888888888     \n");
printf("              |        8888888888                        |  N     8888888888     \n");
printf("              |        8888888888                        |  N     8888888888     \n");
printf("              |       ,888888888P                        |  N    ,888888888P     \n");
printf("              :       ;888888888'                        :  N    ;888888888'     \n");
printf("               \\      d88888888'                         :  N    ;888888888'     \n");
printf("              _.>,    888888P'                            \\ N    d88888888'      \n");
printf("            <,--''`.._>8888(                             _.>N    888888P'        \n");
printf("             `>__...--' `''` SSt                       <,--'N`.._>8888(          \n");
printf("                                                        `>__N..--' `''` SSt      \n");
    for ( i = 0; i < 16; i++){ // acumulo de pontua��o caso o numero seja igual ao da tabela referente ao jogador, (score)
			
			if(num[k] == jogador1[i]){
				pont1++;
			}
			if(num[k] == jogador2[i]){
				pont2++;
			}
		}
		// Impress�o da cartela do jogador 1
		printf("Jogador 1: \n");
		
		for(i = 0 ; i < 16; i++){
		// A cada 4 numeros ele salta linha como se fosse uma matriz.
		if(i % 4 == 0){
			printf("\n");
		}
		
		printf("%d\t", jogador1[i]);
	}
	// Score do jogador 1
	printf("\n Pontuacao do Jogador 1: %d", pont1);			
			
	printf("\n\n");
	
	// Impress�o da cartela do jogador 1
	printf("Jogador 2: \n")	;
		for(i = 0 ; i < 16; i++){
		
		if(i % 4 == 0){
			printf("\n");
		}
		
		printf("%d\t", jogador2[i]);
	}
	// Score do jogador 1
	printf("\n Pontuacao do Jogador 2: %d", pont2);	
	//Total de nums gerados
	printf("\n\nForam gerados %d numeros: \n", cont);
	
	for(l = 0; l < k; l++){
		//Impress�o dos numeros gerados
		printf("%d ", num[l]); 
	}
		//condi��es de pontua��es iguais, maior que ou  menor que (decis�o do jogo)
		if(pont1 == 16 && pont2 == 16){
		printf("\n\nEMPATE !!!!!!!!!"); 
	}	
	
		else if(pont1 == 16){
		printf("\n\nJogador 1 VENCEU !!!!!!!");
	}
	
		else if (pont2 == 16){
		printf("\n\nJogador 2 VENCEU !!!!!!!");
	}
		
		// Incrementa��o das vari�veis que usamos acima
		cont++;	
		k++;
		// coisas para quando executar fica bonitinho
		printf("\n\n");	
		system("pause");
		system("cls");
	}
	
	

	
	return 0;
}
