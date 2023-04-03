#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<stdio.h>
#include<time.h>
#include <stdbool.h>

int main(void){
	int user,aleatorio,box1 =1,box2 =1,box3 =1,box4 =1,box5 =1;
	int loop = 0,loop2 = 0;
	bool player1Turn;
	char player1[61],player2[61];
	
	while(loop == 0){
	printf("Bem vindo ao CesuGames!\n");
	printf("Escolha o que deseja jogar\n");
	printf("1 - Pergunta e resposta\n2 - Cobra na caixa\n3 - sair do aplicativo\nEscolha: ");
	scanf("%d",&user);
	
	switch(user){
	case 1:
		printf("------------------------\n");
		printf("Perguntas e respostas!\n");
		printf("Descricao: Este e um jogo onde serao feitas 5 perguntas, cada uma com 4 alternativas\n");
		printf("Deseja continuar?\n");
		printf("1 - jogar\n2 - Voltar ao menu\nEscolha: ");
		scanf("%d",&user);
		
		if(user == 1){	
			printf("Primeira pergunta: Quem e considerado o pai da Ciencia da Computacao?\n");
			printf("1 - Von Neuman\n2 - Albert Einstein\n3 - Ricardo Casseb\n4 - Alan turing\n");
			printf("Escolha: ");
			scanf("%d",&user);
			
			if(user == 4){
			printf("------------------------\n");
			printf("Resposta correta!\nProxima pergunta...\n");
			printf("------------------------\n");
			printf("Segunda pergunta: Quais o menor e maior pais do mundo respectivamente?\n");
			printf("1 - Vaticano e Russia\n2 - Angola e Canada\n");
			printf("3 - Japao e Brasil\n4 - india e Estados Unidos\n");
			printf("Escolha: ");
			scanf("%d",&user);
			
			if(user == 1){
			printf("------------------------\n");
			printf("Resposta correta!\nProxima pergunta...\n");
			printf("------------------------\n");
			printf("Terceira pergunta: Quem é o autor de 'O Principe'?\n");
			printf("1 - Maquiavel\n2 - Antoine de Saint-Exupéry\n");
			printf("3 - Montesquieu\n4 - Thomas Hobbes\n");
			printf("Escolha: ");
			scanf("%d",&user);
				
			if(user == 1){
			printf("------------------------\n");
			printf("Resposta correta!\nProxima pergunta...\n");
			printf("------------------------\n");
			printf("ultima pergunta!: Quem pintou o famoso quadro 'Monalisa'?\n");
			printf("1 - Richarlison\n2 - Vincent van Gogh\n");
			printf("3 - Leonardo Da Vinci\n4 - Pablo Picasso\n");
			printf("Escolha: ");
			scanf("%d",&user);
				
			if(user == 3){
			printf("------------------------\n");
			printf("Resposta correta!\n");
			printf("Parabens! Voce ganhou o jogo!\n");
			printf("Voltando ao menu principal...\n");
			printf("------------------------\n");
			}else{
			printf("------------------------\n");
			printf("Resposta errada...\nVoltando ao menu\n");
			printf("------------------------\n");
			}
			
			}else{
			printf("------------------------\n");
			printf("Resposta errada...\nVoltando ao menu\n");
			printf("------------------------\n");
			}
				
			}else{
			printf("------------------------\n");
			printf("Resposta errada...\nVoltando ao menu\n");
			printf("------------------------\n"); 
			}
			
			}else{
			printf("------------------------\n");
			printf("Resposta errada...\nVoltando ao menu\n");
			printf("------------------------\n");
			}
		}else if(user == 2){
			printf("------------------------\n");
			printf("Voltando ao menu...\n");
			printf("------------------------\n");
		}else{
			printf("------------------------\n");
			printf("Digite um valor valido!\n");
			printf("------------------------\n");
		}
	break;
	case 2:
		printf("------------------------\n");
		printf("Cobra na caixa!\n");
		printf("Descricao: Escolha entre 5 caixas, 1 tem uma cobra, outra tem o botao para a saida ");
		printf("e as restantes estao vazias. O jogador que encontrar a cobra perde e quem achar o botao ganha!\n");
		printf("(jogo para 2 pessoas)\n");
		printf("Deseja continuar?:\n1 - jogar\n2 - voltar para o menu\nEscolha: ");
		scanf("%d",&user);
		
		if(user == 1){
			loop2 = 0;
			printf("------------------------\n");
			printf("Digite o nome do Jogador 1: ");
			scanf("%s",&player1);
			printf("Digite o nome do Jogador 2: ");
			scanf("%s",&player2);
			
			srand(time(NULL));
			aleatorio = rand()%2;
			
			if(aleatorio == 0){
				player1Turn = true;
				while(loop2 == 0){
					if(player1Turn == true){
						printf("Rodada de %s \n",player1);
						printf("1 - Caixa 1\n2 - Caixa 2\n3 - Caixa 3\n4 - Caixa 4\n5 - Caixa 5\nEscolha: ");
						scanf("%d",&user);
						
						switch(user){
							case 1:
								if(box1 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn=!player1Turn;
								box1 = 0;
								}else{
								printf("A caixa ja foi aberta!");
								player1Turn=!player1Turn;
								}
							break;
							case 2:
								printf("A caixa tinha um Cobra!\n");
								printf("%s ganhou o jogo!\n",player2);
								printf("Voltando ao menu principal...\n");
								printf("------------------------\n");
								loop2 = 1;
							break;
							case 3:
								if(box3 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn=!player1Turn;
								box3 = 0;
								}else{
								printf("A caixa ja foi aberta!");
								player1Turn=!player1Turn;
								}
							break;
							case 4:
								printf("A caixa tinha um botao para a saida!\n");
								printf("%s ganhou o jogo!\n",player1);
								printf("Voltando ao menu principal...\n");
								printf("------------------------\n");
								loop2 = 1;
							break;
							case 5:
								if(box5 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn=!player1Turn;
								box5 = 0;
								}else{
								printf("A caixa ja foi aberta!");
								player1Turn=!player1Turn;
								}
							break;
						}
					}else{
						printf("Rodada de %s \n",player2);
						printf("1 - Caixa 1\n2 - Caixa 2\n3 - Caixa 3\n4 - Caixa 4\n5 - Caixa 5\nEscolha: ");
						scanf("%d",&user);
						
						switch(user){
							case 1:
								if(box1 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn!=player1Turn;
								box1 = 0;
								}else{
								printf("A caixa já foi aberta!");
								player1Turn=!player1Turn;
								}
							break;
							case 2:
								printf("A caixa tinha um Cobra!\n");
								printf("%s ganhou o jogo!",player1);
								loop2 = 1;
							break;
							case 3:
								if(box3 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn=!player1Turn;
								box1 = 0;
								}else{
								printf("A caixa já foi aberta!");
								player1Turn=!player1Turn;
								}
							break;
							case 4:
								printf("A caixa tinha um botao para a saida!\n");
								printf("%s ganhou o jogo!\n",player2);
								printf("Voltando ao menu principal...\n");
								printf("------------------------\n");
								loop2 = 1;
							break;
							case 5:
								if(box5 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn=!player1Turn;
								box1 = 0;
								}else{
								printf("A caixa já foi aberta!");
								player1Turn=!player1Turn;
								}
							break;
						}
					}
				}
			}else if(aleatorio == 1){
				player1Turn = false;
				while(loop2 == 0){
					if(player1Turn == true){
						printf("Rodada de %s \n",player1);
						printf("1 - Caixa 1\n2 - Caixa 2\n3 - Caixa 3\n4 - Caixa 4\n5 - Caixa 5\nEscolha: ");
						scanf("%d",&user);
						
						switch(user){
							case 1:
								if(box1 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn=!player1Turn;
								box1 = 0;
								}else{
								printf("A caixa ja foi aberta!\n");
								player1Turn=!player1Turn;
								}
							break;
							case 2:
								printf("A caixa tinha um Cobra!\n");
								printf("%s ganhou o jogo!\n",player2);
								printf("Voltando ao menu principal...\n");
								printf("------------------------\n");
								loop2 = 1;
							break;
							case 3:
								if(box3 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn=!player1Turn;
								box3 = 0;
								}else{
								printf("A caixa ja foi aberta!\n");
								player1Turn=!player1Turn;
								}
							break;
							case 4:
								printf("A caixa tinha um botao para a saida!\n");
								printf("%s ganhou o jogo!\n",player1);
								printf("Voltando ao menu principal...\n");
								printf("------------------------\n");
								loop2 = 1;
							break;
							case 5:
								if(box5 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn=!player1Turn;
								box5 = 0;
								}else{
								printf("A caixa ja foi aberta!\n");
								player1Turn=!player1Turn;
								}
							break;
						}
					}else{
						printf("Rodada de %s \n",player2);
						printf("1 - Caixa 1\n2 - Caixa 2\n3 - Caixa 3\n4 - Caixa 4\n5 - Caixa 5\nEscolha: ");
						scanf("%d",&user);
						
						switch(user){
							case 1:
								if(box1 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn=!player1Turn;
								box1 = 0;
								}else{
								printf("A caixa já foi aberta!\n");
								player1Turn=!player1Turn;
								}
							break;
							case 2:
								printf("A caixa tinha um Cobra!\n");
								printf("%s ganhou o jogo!",player1);
								loop2 = 1;
							break;
							case 3:
								if(box3 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn=!player1Turn;
								box1 = 0;
								}else{
								printf("A caixa já foi aberta!\n");
								player1Turn=!player1Turn;
								}
							break;
							case 4:
								printf("A caixa tinha um botao para a saida!\n");
								printf("%s ganhou o jogo!\n",player2);
								printf("Voltando ao menu principal...\n");
								printf("------------------------\n");
								loop2 = 1;
							break;
							case 5:
								if(box5 == 1){
								printf("A caixa esta vazia...\n");
								player1Turn=!player1Turn;
								box1 = 0;
								}else{
								printf("A caixa já foi aberta!\n");
								player1Turn=!player1Turn;
								}
							break;
						}
					}
				}
			}
		}else if(user == 2){
			printf("------------------------\n");
			printf("Voltando ao menu...\n");
			printf("------------------------\n");
		}else{
			printf("------------------------\n");
			printf("Digite um valor valido!\n");
			printf("------------------------\n");
		}
	break;
	case 3:
		printf("Obrigado por jogar!\n");
		printf("Sistema finalizado");
		loop = 1;
	break;
	default:
		printf("Digite um valor valido!");
	break;
	}
	}	
}
