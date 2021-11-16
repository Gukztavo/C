#include <stdio.h>
#include <stdlib.h>
#include <TIME.h>


/*trabalhO 1 LPE, menu de 6 opcoes*/
void opcao1(int dia){
   int num;
    switch(dia)
    {//inicio switch 1
              case 1:
                  printf("Domingo\n");
              break;

              case 2:
                  printf("Segunda\n");
              break;

              case 3:
                  printf("Terca\n");
              break;

              case 4:
                  printf("Quarta\n");
              break;

              case 5:
                  printf("Quinta\n");
              break;

              case 6:
                  printf("Sexta\n");
              break;

              case 7:
                  printf("Sabado\n");
              break;

              default:
                printf("Valor Invalido\n");
          }//fim switch 1
          printf("Deseja finalizar o programa? 1_sim e 2_nao");


}
//-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
void opcao2(){
int i;
for(i=0;i<10;i++){
        int num;
printf("digite um numero para saber se e impar ou par: ");
scanf("%d",&num);
if(num%2==0){
    printf("o numero informado e par\no programa continuara sua execucao\n");
    continue;

}
else{
 printf("o numero informado e impar\n");

}
}


}
int opcao3(int num1,int num2){
 int r=num1 + num2;

return r;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
void opcao4(){
int opcao;
retornar:
printf("\n\n Escreva um numero de 5 a 10: ");
scanf("%d", &opcao);
if ((opcao > 10)||(opcao <5)) {
    printf("numero invalido\n ");
    goto retornar;
}
switch (opcao)
{
              case 5:
                printf("\n Primeiro caso..");
                break;
              case 6:
                printf("\n  Segundo caso..");
                break;
              case 7:
                printf("\n  Terceiro Caso..");
                break;
              case 8:
                printf("\n  Quarta opcao..");
                break;
              case 9:
                printf("\n  Quinta opcao..");
                break;
              case 10:
                printf  ("\n   Ultima opcao..");
                break;

}

}
void opcao5(){
    int i, num1;
    printf("digite quantos segundos para fechar o programa\n");
    scanf("%d",&num1);
    for(i=0;i<=num1;i++){
        printf("%d",i);
        sleep(1);
        if(i==num1){
        printf("\nAdeus......\n");
        sleep(1);


        exit(0);
        }

    }

}

//-----------------------------------------------------------------------------------------------------------------------------------------------------//
int main()
{
    int valor;
    selecao:
    printf("Escolha:\n\t1 - Break\n\t2 - continue\n\t3 - return\n\t4 - goto\n\t5 - exit\n\t6 - sair\n");
    scanf("%d",&valor);

    switch(valor)
    {
       case 1://break
       {
          printf("digite um numero de 1 a 7\n");
          scanf("%d",&valor);
          opcao1(valor);
          break;

        }
       case 2://continue
        {
            opcao2();
            break;

        }
       case 3://return
           {
               int num1,num2,r;
               printf("digite dois numeros para a soma\n : ");
               scanf("%d%d",&num1,&num2);
                r=opcao3 (num1,num2);
                printf("o resultado da soma e %d",r);
                break;


           }
       case 4://goto
           {
            opcao4();
            break;

           }
       case 5://exit
            {
                opcao5();
                break;
            }
       case 6://sair
        {
            system("exit");
            break;

        }
         default:
             printf("opcao invalida");
             goto selecao;
}
       }
























