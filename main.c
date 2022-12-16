#include <stdio.h>
#include <stdlib.h>

int main(){
  int menu, i, somatorio;
  float n1, n2, soma, sub, mult, div;

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
      scanf("%f", &n1);

      printf("Digite um valor\n");
      scanf("%f", &n2);

      soma = n1 + n2;

      printf("%.1f\n", soma); 
     break;
      
      case(2): //subtraçao
        
      printf("Digite um valor\n");
      scanf("%f", &n1);

      printf("Digite um valor\n");
      scanf("%f", &n2);

      sub = n1 - n2;

      printf("%.1f\n", sub);
      break;
      
      case(3): //multiplicaçao

      printf("Digite um valor\n");
      scanf("%f", &n1);
        
      printf("Digite um valor\n");
      scanf("%f", &n2);

      mult = n1 * n2;

      printf("%.1f\n", mult);
      break;

      case(4): //divisao

      printf("Digite um valor\n");
      scanf("%f", &n1);

      printf("Digite um valor\n");
      scanf("%f", &n2);

      if(n2!=0){
        div = n1/n2;
        printf("divisao: %f\n", div);
      }
      else{
        printf("não existe divisao por zero, tente novamente\n");

        printf("Digite um valor\n");
        scanf("%f", &n1);

        printf("Digite um valor\n");
        scanf("%.1f", &n2);

        div = n1/n2;
        
        printf("divisao: %.1f\n", div);
        }
       break; 

      case(5): //somatorio
        
      printf("Digite um valor\n");
      scanf("%f", &n1);

      somatorio = 0;

      for(i=1; i<=n1; i++){
        somatorio = somatorio + i;
        printf("somatorio: %d\n", somatorio); 
      }
      break;
    }  
      }while(menu!=0);
  }
