/* Acerca de alocação dinamica de memória: 

a) A função free libera a memória que foi previamente alocada dinamicamente, devolvendo-a ao sistema operacional.
b) Após chamar free, o ponteiro não deve ser utilizado para acessar dados, pois a memória já não pertence mais ao programa, 
ele se torna um ponteiro inválido (dangling pointer).
c) Vazamentos de memória acontecem quando o programa aloca memória mas não chama free para liberá-la, ou perde a referência 
ao bloco alocado sem liberar. Assim, a memória continua ocupada sem possibilidade de reutilização.
d) Quando malloc não consegue realizar a alocação, ele retorna NULL, indicando falha na reserva de memória.
e) A instrução calloc aloca memória dinamicamente para um número de elementos de determinado tamanho e inicializa todos os bytes com zero.
f) A diferença entre malloc e calloc é que malloc apenas reserva o espaço solicitado sem inicializar, enquanto calloc além de reservar já zera 
a memória. Além disso, malloc recebe um único parâmetro (tamanho total em bytes), e calloc recebe dois (quantidade de elementos e tamanho de 
cada elemento).
*/
