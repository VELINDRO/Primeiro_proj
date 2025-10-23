#include <stdio.h>


int suma(int n1,  int n2){
    return n1 + n2;

}

int sub(int n1, int n2){
    return n1 - n2;

}
int mult(int n1, int n2){ 
    return n1 * n2 ;
}

int main(){
    int n1, n2;
    printf("Insira dois números inteiros separados por espaços: ");
    scanf("%d %d", &n1 , &n2);

    int soma = suma(n1,n2);
    printf("A soma dos dois valores é: %d\n", soma);

    int subtrair = sub(n1,n2);
    printf("A subtração dos dois valores é: %d\n", subtrair);

    int multiplicacao= mult(n1,n2);
    printf("A divisão dosdois valores é: %2.f\n", multiplicacao);

    return 0;
}

