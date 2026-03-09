#include <stdio.h>

int main(){

    int a = 5;
    int b = 11;
    float c;

    scanf("%d%d",&a,&b);

    if(a>b || !(a>0)){
        c = (float)(b/a);
    }else{
        c = (float)(a/b);
    }

    printf("%.2f\n", c);

    return 0;
}
/*A saída desse código é 0.00, considerando as entradsa 5 e 11, e subistituindo ao if 5 > 11 é falso e !(5 > 0) falso tambem,
como ambas as partes são falsas o código executa o bloco else que resulta na divisão de 5/11 = 0 por fim o resultado é convertido para float
ficando como Saída final: 0.00.
*/