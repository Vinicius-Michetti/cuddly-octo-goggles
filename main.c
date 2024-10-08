#include <stdio.h>
#include <stdlib.h>

/*
Implemente um procedimento chamado primo que recebe como parâmetro um inteiro m,
passado por valor, e dois outros inteiros, p1 e p2, passados por referência. O procedimento deve
armazenar em p1 o maior número primo menor do que m e deve armazenar em p2 o menor
número primo maior do que m.
Implemente também uma função main que solicita ao usuário o valor de m, chama o
procedimento primo e depois imprime o resultado.
*/

/*
O procedimento tem como objetivo encontrar o maior primo e o menor primo
Entrada: m (inteiro)
Saida: p1 e p2 (inteiro)
*/
void primo (int m, int *p1, int *p2){

     int divisores;

     *p1 = m - 1;
     while (*p1 < m){
      divisores = 0;
      for(int i = 1; i <= *p1; i++){
         if (*p1 % i == 0){
            divisores++;
         }
      }
      if (divisores == 2){
      break;
      }
      (*p1)--;
    }

     *p2 = m + 1;
     while (*p2 > m){
      divisores = 0;
      for(int i = 1; i <= *p2; i++){
        if (*p2 % i == 0){
            divisores++;
        }
      }
      if (divisores == 2){
        break;
      }
      (*p2)++;
     }
}

int main()
{
    int m, p1, p2;

    printf("Digite um valor inteiro para m: ");
    scanf("%d", &m);

    primo(m, &p1, &p2);

    printf("O maior primo menor que %d e: %d\n", m, p1);
    printf("O menor primo maior que %d e: %d\n", m, p2);
}
