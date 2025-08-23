#include <stdio.h>

int main() {

    //Variável 
    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;

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
     

    return 0;
}
