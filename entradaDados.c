#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int idade;
    char eCivil;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    printf("%d anos", idade);
    printf("\nDigite C para casado ou S para solteiro: ");
    fflush(stdin);
    eCivil = getchar();
    printf("\nVc digitou %c", eCivil);

    if (idade >= 18){
            printf("\nVoc� � maior");
    }else{
        if(idade <=12){
            printf("\nIh, vc � uma crian�a!");
        }
       else{
        printf("\nVoc� � menor!");
       }
    }


}
