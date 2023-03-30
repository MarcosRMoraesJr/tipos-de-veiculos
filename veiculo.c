#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> //serve pra ação strlen verificar o tamanho da String da xArea

int main() {
    char xArea[2]; // Coloco uma string em 2 pra conseguir conferir se vou usar 1 ou mais string
    int i;
    
    do {
        printf("Digite o transporte que será utilizado: \n");
        printf("Digite B para Bicicleta. \n");
        printf("Digite C para Carros. \n");
        printf("Digite A para Avião. \n");
        printf("Digite M para Metrô. \n");
        printf("Digite T para Trens. \n");
        printf("\n");
        scanf("%s", xArea);
        
        if (strlen(xArea) == 1 && (xArea[0] == 'B' || xArea[0] == 'b' || xArea[0] == 'C' || xArea[0] == 'c' || xArea[0] == 'A' ||
        xArea[0] == 'a' || xArea[0] == 'M' || xArea[0] == 'm' || xArea[0] == 'T' || xArea[0] == 't'))
        {
            i = 1; //se i for 1, ele irá reiniciar o loop
        }
        else {
            printf("Opção inválida. ");
            
            if (strlen(xArea) > 1) {
                printf ("Digite apenas uma letra! ");
            }
            printf ("Tente novamente!\n");
        }
    } while (i == 0); //se o i for 0, irá continuar o programa
     
     if ((xArea[0] == 'B') || (xArea[0] == 'b')){           
         printf("Veículo que não degrada a natureza. \n");
         } //xArea[0] é uma string vazia e está sendo colocado UMA letra dentro
     else 
         if ((xArea[0] == 'C') || (xArea[0] == 'c') || (xArea[0] == 'A') || (xArea[0] == 'a')){
             printf("Transporte movidos por gasolina ou álcool. \n");
             }
     else
         if ((xArea[0] == 'T' || xArea[0] == 't' || xArea[0] == 'M' || xArea[0] == 'm')){
             printf("Transporte movido a eletricidade. \n");
             }
     return 0;
}
