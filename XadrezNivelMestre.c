#include <stdio.h>

void movimentoTorre(int n) { //será imprimido "Direita" n vezes que a torre se mover...
    if (n > 0)
    {
      printf("Direita\n");

      movimentoTorre(n - 1);
    }
}

void movimentoBispo(int n) { //será imprimido "Cima e Direita" n vezes que o bispo se mover...
    if (n > 0)
    {
       for (int i = 0; i < 1; i++)
       {
       printf("Cima\n");
       for (int j = 0; j < 1; j++)
       {
       printf("Direita\n");
       }
    }

       movimentoBispo(n - 1);
    }  
}

void movimentoRainha(int n) { //será imprimido "Esquerda" n vezes que a Rainha se mover...
    if (n > 0)
    {
        printf("Esquerda\n");

        movimentoRainha(n - 1);
    }   
}

int main() {

    //Variável 
    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;
    int L = 5; //Quantidade de L que o cavalo vai fazer
    int Casa; //Irá contar as casas durante a movimentação do cavalo

    //Movimento da torre usando função recursiva
    printf("Movimentando a Torre: \n"); //Título
    movimentoTorre(Torre);
    
    //Movimento do bispo usando função recursiva
    printf("Movimentando o Bispo: \n"); //Título
    movimentoBispo(Bispo);
    
     //Movimento da rainha usando função recursiva
     printf("Movimentando a Rainha\n"); //Título
     movimentoRainha(Rainha);
     
     //Movimentando o cavalo usando for e while (sendo loop aninhado)
     printf("Movimentando o cavalo:\n");

    for (int i = 1; i <= L; i++) //Esse loop externo vai controlar quantos usa variavel L
    {
       int C = 0; //Quantos "Cima" será feito
       int D = 0; //QUantos "Direita" será feito

       //Será controlado os passos do L, com loop interno
       while (1)
       {
        if (C < 2)
        {
            printf("Cima\n");

            C++;
            continue; //Voltará para o topo do while, porque ainda falta cima
        }
        
        if (D < 1)
        {
           printf("Direita\n");

           D++; 
        }
        
        if (C == 2 && D == 1)
        {
          break; //Termina um L completo, assim saindo do while
        }
        
       }
       
    }
    
    return 0;
}
       

