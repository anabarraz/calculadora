#include <stdio.h>
#include <stdlib.h>

int main(){
  int n1, n2, soma, sub, mult, div, i, somatorio, menu;
  char S, N;

  do{
    printf("Escolha o que você quer calcular\n");
    printf("1 - soma\n");
    printf("2 - subtração\n");
    printf("3 - multiplicação\n");
    printf("4 - divisão\n");
    printf("5 - somatorio\n");
    scanf("%d", &menu);

    switch(menu){
      case(1): //soma
        
      printf("Digite um valor\n");
      scanf("%d", &n1);

      printf("Digite um valor\n");
      scanf("%d", &n2);

      soma = n1 + n2;

      printf("%d\n", soma); 
     break;
      
      case(2): //subtraçao
        
      printf("Digite um valor\n");
      scanf("%d", &n1);

      printf("Digite um valor\n");
      scanf("%d", &n2);

      sub = n1 - n2;

      printf("%d\n", sub);
      break;
      
      case(3): //multiplicaçao

      printf("Digite um valor\n");
      scanf("%d", &n1);
        
      printf("Digite um valor\n");
      scanf("%d", &n2);

      mult = n1 * n2;

      printf("%d\n", mult);
      break;

      case(4): //divisao

      printf("Digite um valor\n");
      scanf("%d", &n1);

      printf("Digite um valor\n");
      scanf("%d", &n2);

      if(n1 && n2 !=0){
        div = n1/n2;
        printf("divisao: %d\n", div);
      }
      else{
        printf("não existe divisao por zero, tente novamente\n");

        printf("Digite um valor\n");
        scanf("%d", &n1);

        printf("Digite um valor\n");
        scanf("%d", &n2);

        div = n1/n2;
        
        printf("divisao: %d\n", div);
        }
       break; 

      case(5): //somatorio
        
      printf("Digite um valor\n");
      scanf("%d", &n1);

      soma = 0;

      for(i=1; i<=n1; i++){
        soma = soma + i;
        printf("somatorio: %d\n", soma);
        
      }
      break;
      }
      printf("Deseja calcular mais alguma coisa?\n");
      printf("S\n");
      scanf("%c", &S);
      printf("N\n");
      scanf("%c", &N);

      if(N=='n' || N=='N'){
        printf("Tchau :)");
        menu = 0;
      }
      
      }while(menu!=0);
  }
