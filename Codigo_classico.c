#include<stdio.h>
#define N 262144

int busca(int *vetor,int busc){ // função de busca

for(int i=0;i<N;i++){
    if (vetor[i]==busc){
        return i+1;
    }
}
// No pior dos casos o número buscado é N-1
// Nesse caso a função faz N interações
// Logo a complexidade da função de busca é N
}
int main(){

int vetor[N];
long long int Num_Busc;

for(int i=0;i<N;i++){ // preenchendo o vetor
    vetor[i]=i+1;
}

printf("Digite um nmro para comecar a busca:\n");
scanf("%lld",&Num_Busc);

Num_Busc = (Num_Busc % N) + 1; // Leva um número dos naturais e leva pro intervalo nos naturais [1,N]
printf("A posicao do nmro buscado eh : %d\n", busca(vetor,Num_Busc));

return 0;
}
