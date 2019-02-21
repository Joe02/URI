#include <stdio.h>
int main(){
    float a,b,c,d,media,mediaf,exame;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    media=((a*2)+(b*3)+(c*4)+(d*1))/10;
    printf("Media: %.1f\n",media);
    if(media>=7.0){
        printf("Aluno aprovado.\n");
    }else if(media<5.0){
        printf("Aluno reprovado.\n");
    }else if(media>=5.0&&media<7.00){
        printf("Aluno em exame.\n");
        scanf("%f",&exame);
        mediaf=(media+exame)/2.0;
        printf("Nota do exame: %.1f\n",exame);
        if(mediaf>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",mediaf);
        }
    }
    return 0;
}
