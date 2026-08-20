# **Entrada e Saída de Dados**

Nesse tópico, vamos analisar a entrada e saída de dados na prática, visto o conceito de variáveis.

Utilizando a função `scanf()`, da biblioteca `stdio.h`, podemos coletar valores inseridos pelo usuário. Vejamos o exemplo do arquivo [material/cod012.c](material/cod012.c), onde usuário deve inserir um número inteiro:

```c
#include<stdio.h>

int main(){
    int idade;
    
    printf("Digite sua idade: ");
    scanf(" %d", &idade);

    printf("Sua idade eh: %d", idade);

    return 0;
}
```

Se a entrada for 20, por exemplo, a saída desse programa deve ser:

```input
20
```

```output
Digita sua idade:
Sua idade eh: 20
```

Neste exemplo, vemos que a variável inteira é referenciada como `%d`, tanto no `printf()` quanto no `scanf()`. Para essa e outras variáveis, você pode se basear na tabela abaixo:

| Tipo de Variável | Referência |
| --- | :--- |
| `int` | `%d` ou `%i` |
| `float` | `%f` |
| `double` | `%lf` |
| `char` | `%c` |

Vamos ver algum exemplo com outras variáveis, como mostra o arquivo []():

```c
#include<stdio.h>

int main(){
    int idade;
    float altura, peso;
    char sexo;

    printf("Digite sua idade: ");
    scanf(" %d", &idade);
    printf("Digite sua altura (em m): ");
    scanf(" %f", &altura);
    printf("Digite seu peso: ");
    scanf(" %f", &peso);
    printf("Digite seu sexo: ");
    scanf(" %c", &sexo);

    return 0;
}
```

Em breve, veremos mais sobre outros tipos de dados e estruturas do código.