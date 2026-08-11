# **Recomendações e Dicas**

Neste documento, vamos destacar as principais recomendações, dicas e pré-requisitos para quem deseja iniciar a programar em linguagem C.

## **Pré-requisitos**

A linguagem C é **compilada**, ou seja, necessita de um programa para transformar as instruções de código em um arquivo binário.

Em computadores com sistema operacional Windows, não há um compilador nativo do sistema, então é necessário fazer a instação. Em caso de máquinas a base de Linux, não é necessário realizar a instalação.

O compilador que mais recomendo é o MinGW, baseado no GCC. Há outras alternativas que você pode buscar na internet.

## **Ambiente de Desenvolvimento**

Para toda linguagem de programação, é comum desenvolvermos os projetos em ambientes de desenvolvimento ou IDEs. Aqui seguem algumas alternativas e comentários pessoais:

### **Code::Blocks**

Recomendado por muitos professores e até na ementa no curso, particularmente não tive uma experiência muito boa com essa IDE. Apesar da interface lembrar um pouco o Dev C++, tive alguns problemas para compilar e executar alguns códigos.

### **Dev C++**

Meu ambiente favorito para a disciplina de Computação Eletrônica, sendo personalizável e fácil de instalar e configurar. Meu único ponto negativo são as reclamações que o programa em alguns casos de declaração de variáveis.

### **OnlineGDB**

Uma ótima alternativa para quem deseja ter uma alternativa online, no [OnlineGDB](https://www.onlinegdb.com/) você pode criar uma conta, salvar seus códigos e projetos, executar e testar seu programa com entradas e saídas customizáveis.

### **Visual Studio Code**

Minha atual IDE para todas as linguagens. Na verdade, o VS Code é um editor de texto que permite a instalação de extensões, compilação e execução de códigos. Além disso, é excelente para conexão com GitHub, versionamento e casos em que é necessário trabalhar com múltiplos arquivos.

## **Funcionamento do Código**

Antes de escrever um código em C, é uma ótima opção entender como funciona a linguagem.

A linguagem C começa sem nenhum tipo de suporte, função ou comando, pode parecer contraditório, mas vai fazer sentido.

Seus comandos se devem a partir das **bibliotecas** ou **cabeçalhos**, que são arquivos de extensão `.h`. Por exemplo, a primeira biblioteca apresentada costuma ser a `stdio.h`, que significa "standard input/output". Com essa função, podemos inserir e imprimir dados na tela ou por meio de arquivos.

Outro exemplo bastante utilizado é a biblioteca `math.h`, para operações matemáticas mais complexas e com funções mais específicas. Ao longo do minicurso, veremos mais bibliotecas e suas principais funções.

Um ponto que causa vários erros é o esquecimento do ponto e vírgula `;`. Ao final de todo comando, declaração ou função, é necessário inserir um ponto e vírgula `;` para linguagem C interpretar o fim do comando.

## **Boas Práticas de Programação**

Nos conceitos de programação, é de senso comum utilizar boas práticas para que outros programadores não tenham dificuldade na leitura e entendimento do seu código.

Uma das práticas mais importante é a nomenclatura de variáveis e funções. Pode parecer óbvio para alguns, mas "dar o nome certo aos bois" é uma coisa importante.

Por exemplo, se em um programa de uma calculadora temos 2 valores de entrada e 1 de saída, é de bom senso que esses valores de entrada sejam representados como `numero1`, `calculo1` ou `entrada1`, ao invés de `variavel`, `alguma_coisa`, `meu_nome`.

Outra boa prática é utilizar os comentários, representado de duas maneiras em linguagem C:

```c
// Comentário teste

/*
Tudo escrito nos comentários
não é executado, fica somente
como referência para quem programa
*/
```