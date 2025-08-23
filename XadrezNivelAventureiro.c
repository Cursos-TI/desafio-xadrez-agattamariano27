#include <stdio.h>

int main() {

    //Variável 
    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;
    int L = 5; //Quantidade de L que o cavalo vai fazer
    int Casa; //Irá contar as casas durante a movimentação do cavalo

    //Movimento da torre usando for (andará só em linha reta, seja pra frente, pra trás, pra esquerda ou direita)
    printf("Movimentando a Torre: \n"); //Título

    for (int i = 1; i <= Torre; i++) //Começa na primeira casa, então vai repetindo enquanto i fou menor ou igual a 5
    {
        printf("Direita\n"); //Movimento da torre a cada repetição, como pedido nas regras
    }
    
    //Movimento do bispo usando while (se movendo na diagonal, seja pra cima ou direita)
    printf("Movimentando o Bispo: \n"); //Título

    int i = 1; //Começa na primeira casa
    while (i <= Bispo) //Vai repetir enquanto i for menos ou igual a 5
    {
        printf("Cima, Direita\n"); //Movimento do bispo a cada repetição, como pedido nas regras

        i++; //Somando +1 a cada movimento
    }
    
     //Movimento da rainha usando do-while
     printf("Movimentando a Rainha\n"); //Título

     i = 1; //Começa na primeira casa
     do
     {
       printf("Esquerda\n"); //Movimento da rainha a cada repetição, como pedido nas regras
       
       i++; //Somando +1 a cada movimento
     } while (i <= Rainha);
     
     //Movimentando o cavalo usando for e while (sendo loop aninhado)
     printf("Movimentando o cavalo:\n");

     for (int l = 1; l <= L; l++) //loop externo sendo representado por cada L
     {
        Casa = 1; //Inicio do primeiro passo
        while (Casa <= 3) //loop interno de 3 casas do L
        {
           if (Casa == 1 || Casa == 2)
           {
            printf("Baixo\n"); //duas primeiras casas
           } else if (Casa == 3)
           {
            printf("Esquerda\n"); //Última casa
           } 

        Casa++; //Somando +1 a cada movimento
           
         }
        
     }
     
    return 0;
}
