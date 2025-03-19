#include <stdio.h>

void moverTorre(int casas){
    if (casas > 0)
        printf("Direita\n");
        moverTorre(casas - 1);

 void moverRainha(int casas);
     if (casas > 0)
          printf("Esquerda\n");
          moverRainha(casas - 1);


 void moverBispo(int casas);
    if (casas > 0)
        printf("Diagonal superior direita\n");
        moverBispo(casas - 1);
        






}


int main() {
    moverTorre(5);
    moverRainha(8);
    moverBispo(5);





    
    // Mover o cavalo
    int movimentoCompleto = 1;

    while (movimentoCompleto--)

        printf("mover o cavalo\n");
    for (int i = 0; i < 2; i++)
        printf("Cima\n");

    printf("Direita\n");

    return 0;
}
