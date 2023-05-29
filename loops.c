#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL, "");
int numero=1;
int num =1;
        while( numero<=4){
            printf("\nWHILE A maquina %d está conectada a rede", numero);
            numero++;
        }

        for(num=1; num<5; num++){
            printf("\nFOR A maquina %d está conectada a rede", num);
        }


}
