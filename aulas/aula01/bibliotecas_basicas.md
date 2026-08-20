# **Bibliotecas Básicas**

Dentre as principais bibliotecas utilizadas em linguagem C e na disciplina de Computação Eletrônica, temos:

- `stdio.h`
- `stdlib.h`
- `math.h`
- `string.h`
- `time.h`
- `locale.h`

## `stdio.h`

A biblioteca `stdio.h`, como citada anteriormente no [arquivo de recomendações de dicas](../aula00/recomendacoes_e_dicas.md), trada da entrada e saída de dados do programa.

Essa biblioteca possui diversas funções, mas as principais que iremos utilizar são:

- `printf()`: Para imprimir ou mostrar texto e valores na tela ou no terminal.
- `scanf()`: Para coletar dados e armazenar no código.
- `fprintf()`: Para gravar dados em um arquivo.
- `fwrite()`: Para gravar dados em um arquivo, idealmente binário.
- `fscanf()`: Para a leitura de dados formatados em um arquivo.

## `stdlib.h`

A biblioteca `stdlib.h` é a "standard libraby", ou biblioteca padrão. Nela, temos algumas funções básicas para a linguagem C, como:

- `malloc()`: Para alocação de memória dinâmica.
- `free()`: Para liberar blocos de memória.
- `rand()`: Para geração de números pseudoaleatórios.
- `srand()`: Para geração de números pseudoaleatórios.
- `system()`: Para comandos no terminal.
- `exit()`: Para sair do programa.
- `qsearch()`: Algoritmo de busca.
- `qsort()`: Algoritmo de ordenação.

## `math.h`

Voltada para operações, funções e constantes matemáticas, a biblioteca `math.h` possui uma variedade de artifícios para implementações em programação, dentre elas:

**Variáveis constantes:**

- `M_E`: Constante de Euler ($e = 2,71828182845904523536$)
- `M_LOG2E`: Logaritmo de $e$ na base $2$ ($\log_{2}{e} = 1,44269504088896340736$)
- `M_LOG10E`: Logaritmo de $e$ na base $10$ ($\log_{10}{e} = 0,434294481903251827651$)
- `M_LN2`: Logaritmo natural de $2$ ($\ln{2} = 0,693147180559945309417$)
- `M_LN10`: Logaritmo natural de $10$ ($\ln{10} = 2,30258509299404568402$)
- `M_PI`: Constante $\pi$ ($\pi = 3,14159265358979323846$)
- `M_PI_2`: Metade do valor de $\pi$ ($\frac{\pi}{2} = 1,57079632679489661923$)
- `M_PI_4`: Um quarto do valor de $\pi$ ($\frac{\pi}{4} = 0,785398163397448309616$)
- `M_1_PI`: O valor do inverso de $\pi$ ($\frac{1}{\pi} = 0,318309886183790671538$)
- `M_2_PI`: O valor do dobro do inverso de  $\pi$ ($\frac{2}{\pi} = 0,636619772367581343076$)
- `M_2_SQRTPI`: O valor do dobro do inverso de $\sqrt{\pi}$ ($\frac{2}{\sqrt{\pi}} = 1,12837916709551257390$)
- `M_SQRT2`: Valor de raiz quadrada de $2$ ($\sqrt{2} = 1,41421356237309504880$)
- `M_SQRT1_2`: Valor da metade da raiz quadrada de $2$ ($\frac{1}{\sqrt{2}} = \frac{\sqrt{2}}{2} = 0,707106781186547524401$)

É possível observá-las no arquivo [material/cod011.c](material/cod011.c).

**Funções:**

- Funções trigonométricas:
    - `sin(double x)`
    - `cos(double x)`
    - `tan(double x)`
    - `asin(double x)`
    - `acos(double x)`
    - `atan(double x)`
    - `atan2(double x)`

- Funções hiperbólicas:
    - `sinh(double x)`
    - `cosh(double x)`
    - `tanh(double x)`

- Funções exponenciais e logarítmicas:
    - `exp(double x)`
    - `log(double x)`
    - `log10(double x)`
    - `power(double x, double y)`
    - `sqrt(double x)`
    - `cbrt(double x)`

- Funções de arredondamento e truncamento:
    - `ceil(double x)`
    - `floor(double x)`
    - `round(double x)`
    - `trunc(double x)`

- Outras funções:
    - `fabs(double x)`
    - `fmax(double x, double y)`
    - `fmin(double x, double y)`
    - `isless(double x, double y)`
    - `isgreater(double x, double y)`

## `ctype.h`

A biblioteca `ctype.h` foi desenvolvida para o tratamento de caracteres, seja por funções de manipulação ou de conversão.

**Funções de Conversão:**

- `tolwer(char a)`
- `toupper(char a)`

**Funções de Manipulação:**

- `isalnum(char a)`
- `isalpha(char a)`
- `iscntrl(char a)`
- `isdigit(char a)`
- `isgraph(char a)`
- `islower(char a)`
- `isprint(char a)`
- `ispunct(char a)`
- `isspace(char a)`
- `isupper(char a)`
- `isxdigit(char a)`

## `string.h`

Já a biblioteca `string.h` realiza o tratamento de vetores de caracteres, comumente chamados de *strings*. Também podemos dividí-la nas área de conversão e manipulação.

**Funções de Conversão:**

- `strcpy(char dst[], char src[])`
- `strncpy(char dst[], char src[], int len)`
- `strcat(char dst[], char src[])`
- `strncat(char dst[], char src[], int len)`

**Funções de Manipulação:**
- `strlen(char str[])`
- `strcmp(char str1[], char str2[])`
- `strncmp(char str1[], char str2[], int len)`
- `strtok(char str[])`

## `time.h`

A biblioteca `time.h` é utilizada para mostrar o tempo, quando necessário, com base nas informações coletadas do computador.

## `locale.h`

Por fim, a biblioteca `locale.h` faz o tratamento quanto a região e idioma, utilizando a principal função chamada `setlocale()`. Mais a frente, veremos exemplos com essas bibliotecas.