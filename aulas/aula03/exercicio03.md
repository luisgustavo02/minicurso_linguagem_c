# Exercícios 03:

**Dicas e recomendações:**

- Tente fazer o código com uma ideia prévia ou esboço.
- Tente deixar o código intuitivo ao usuário, por meio de imprimir comandos na tela.
- Separe cada tarefa em uma função. Antes de escrever o código, pense em quais parâmetros ela recebe e o que ela retorna.

---

## Questão 01

Um **palíndromo** é uma palavra ou frase que se lê da mesma forma de trás para frente, como `arara`, `radar` e `osso`.

Crie a função `int eh_palindromo(char texto[])`, que retorna $1$ se o texto for um palíndromo e $0$ caso contrário. No `main()`, leia uma palavra do teclado e informe o resultado.

**Desafio:** faça a função ignorar espaços e a diferença entre letras maiúsculas e minúsculas, reconhecendo frases como `Socorram me subi no onibus em Marrocos`.

**Entrada 1:**
```
arara
```

**Saída 1:**
```
"arara" e um palindromo!
```

---

## Questão 02

Defina uma struct `Aluno` com os campos nome, matrícula e um vetor com 3 notas. Leia os dados de uma turma com $N$ alunos e crie a função `float calcula_media(Aluno a)`.

Para cada aluno, mostre a média e a situação, seguindo a regra:

- **Aprovado:** média maior ou igual a $7$.
- **Final:** média maior ou igual a $3$ e menor que $7$.
- **Reprovado:** média menor que $3$.

Ao final, mostre o nome do aluno com a maior média da turma.

---

## Questão 03

Crie a função abaixo, que calcula a média, o maior e o menor valor de um vetor com $n$ elementos:

```c
void estatisticas(float v[], int n, float *media, float *maior, float *menor);
```

No `main()`, leia $N$ valores do teclado, chame a função e imprima os três resultados.

**Entrada 1:**
```
5
4.5
-2
10
7.25
0
```

**Saída 1:**
```
Media: 3.95
Maior: 10.00
Menor: -2.00
```

---

## Questão 04

A **Cifra de César** é uma das técnicas de criptografia mais antigas: cada letra do texto é substituída pela letra que está $k$ posições à frente no alfabeto. Com $k = 3$, por exemplo, `A` vira `D`, `B` vira `E` e `Z` volta para o início, virando `C`.

Crie a função `void cifra_cesar(char texto[], int chave)`, que altera o texto recebido aplicando a cifra. Letras maiúsculas devem continuar maiúsculas, letras minúsculas devem continuar minúsculas e os demais caracteres (espaços, números e pontuação) não devem ser alterados.

**Dica:** use a [tabela ASCII](../aula02/tabela_ascii.md) e o operador resto `%`.

**Desafio:** utilize a mesma função para decifrar o texto.

**Entrada 1:**
```
Ola, Mundo!
3
```

**Saída 1:**
```
Texto cifrado: Rod, Pxqgr!
```