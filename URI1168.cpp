/*URI - 1168*/
/*Painel de LED*/

//Jo�o quer montar um painel de LED contendo diversos n�meros;
//N�o possui muitos LEDs;

//Fa�a um algoritmo que ajude a Jo�o a descobrir a quantidade de LEDs necess�rios;

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char n[1110];
  int i, j, soma=0;
  int N;  //n�mero de casos teste;

  //Para cada caso teste, imprima uma linha contendo o n�mero de LEDs que Jo�o precisa
  //montar para o valor desejado;

  scanf("%d", &N);
  for(i=0; i<N; i++){
    scanf("%s", n); // n�mero de LEDs que Jo�o quer montar;

      for(j=0; j<strlen(n); j++){
        if(n[j] == '1'){
          soma = soma + 2;
        }
          if(n[j] == '2'){
            soma = soma + 5;
          }
            else if(n[j] == '3'){
              soma = soma + 5;
            }
              else if(n[j] == '4'){
                soma += 4;
              }
                else if(n[j] == '5'){
                  soma += 5;
                }
                  else if(n[j] == '6'){
                    soma += 6;
                  }
                    else if(n[j] == '7'){
                      soma += 3;
                    }
                      else if(n[j] == '8'){
                        soma += 7;
                      }
                        if(n[j] == '9'){
                          soma +=6;
                        }
                                       }

            printf("%d leds\n",soma);
         soma = 0;
     }
 return 0;
}
