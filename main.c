#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>
#include "utils.h"
#include "exercicioBase.h"
#include "exercicio1.h"
#include "exercicio2.h"
#include "exercicio3.h"
#include "exercicio4.h"
#include "exercicio5.h"
#include "exercicio6.h"
#include "exercicio7.h"
#include "exercicio8.h"
#include "exercicio9.h"
#include "exercicio10.h"

char menu(char opt);


int main(void) {

  char exercicioOpt = 0;
  bool escape = true;

  system("clear");

  cabecalho();

  printf("\n               Informe qual o numero do exercício gostaria de avaliar    ");
  printf("\n                                         ou");
  printf("\n                                Digite ESC para sair                   \n\n");

  for(int i=1; i<10; i++)
  {
    printf("                               Exercício - %d (Digite %d)\n",i, i);
  }
	printf("                               Exercício - %d (Digite %d)\n",10, 0);

  do
  {
    exercicioOpt = getch();

    if((int)exercicioOpt == 27)
    {
      escape = false;
    }
    else
    {
      char opt = menu(exercicioOpt);

      switch(opt)
			{
				case '1':
				exercicio_base(opt , exercicio_1);
				break;
				case '2':
				exercicio_base(opt , exercicio_2);
				break;
				case '3':
				exercicio_base(opt , exercicio_3);
				break;
				case '4':
				exercicio_base(opt , exercicio_4);
				break;
				case '5':
				exercicio_base(opt , exercicio_5);
				break;
				case '6':
				exercicio_base(opt , exercicio_6);
				break;
				case '7':
				exercicio_base(opt , exercicio_7);
				break;
				case '8':
				exercicio_base(opt , exercicio_8);
				break;
				case '9':
				exercicio_base(opt , exercicio_9);
				break;
				default:
				exercicio_base((char)10 , exercicio_10);
				break;
			}
    }
  }while(escape);
  
  
  printf("\n                        Obrigado por avaliar minha atividade!\n");
  return 0;
  
}

char menu(char opt)
{
  if(isdigit(opt))
  {
    return opt;
  }
  else
  {
    printf("\n              Voce deve escolher um número de 0 a 9 ou ESC para sair\n");
    return 11;
  }
  
}

