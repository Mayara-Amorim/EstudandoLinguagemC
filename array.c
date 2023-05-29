#include <stdio.h>
#include <locale.h>

int main(){
 setlocale(LC_ALL, "");
 int id_user[5];
 int i;

 for(i=0; i<5; i++){
    printf("\nDigite o id do usuario %d: ", i+1);
    scanf("%d", &id_user[i]);
 }

 for(i=0; i<5; i++){
    printf("\nO id do usuario %d é: %d", i+1,id_user[i]);
 }

}
