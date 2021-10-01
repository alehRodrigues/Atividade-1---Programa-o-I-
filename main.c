#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include "utils.h"
#include "exercicioBase.h"
#include "exercicio1.h"
#include "exercicio2.h"
#include "exercicio3.h"
#include "exercicio4.h"

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

int main(void) {

  char exercicioOpt = 0;
  bool escape = true;

  system("clear");

  cabecalho();

  printf("\n               Informe qual o numero do exercício gostaria de avaliar    ");
  printf("\n                                         ou");
  printf("\n                                Digite ESC para sair                   \n\n");

  for(int i=1; i<=10; i++)
  {
    printf("                               Exercício - %d (Digite %d)\n",i, i-1);
  }

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

      printf("%c\n", opt);

      switch(opt)
      {
        case '1':
        exercicio_base(opt + 1 , exercicio_2);
        break;
        case '2':
        exercicio_base(opt + 1 , exercicio_3);
        break;
        case '3':
        exercicio_base(opt + 1 , exercicio_4);
        break;
        case '4':
        printf("Exercício 5\n");
        break;
        case '5':
        printf("Exercício 6\n");
        break;
        case '6':
        printf("Exercício 7\n");
        break;
        case '7':
        printf("Exercício 8\n");
        break;
        case '8':
        printf("Exercício 9\n");
        break;
        case '9':
        printf("Exercício 10\n");
        break;
        case '0':
        exercicio_base(opt + 1 , exercicio_1);
        break;
      }
    }
  }while(escape);
  
  
  printf("\n                        Obrigado por avaliar minha atividade!\n");
  return 0;
  
}

