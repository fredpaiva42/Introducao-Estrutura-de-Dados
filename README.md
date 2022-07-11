# Introdução a Estrutura de Dados — Usando C

## 1 — Introdução à programação

- O computador é uma máquina capaz de manipular informações processando sequências de instruções.

- **Programar** um computador significa desenvolver uma sequência de instuções que executa uma tarefa específica, produzindo o resultado esperado.

### Principais elementos de um computador:
<p align="center">
    <img src="./img/principais elementos de um computador.jpg" alt="Principais elementos de um computador"/>
</p>


- Como computadores são máquinas capazes de realizar cálculos complicados de forma muito eficiente, dividir um problema complexo em diversos porblemas simples é uma estratégia muito usada e muito recomendada.

### Representação de valores em computadores:
- Os computadores trabalham na base binária.
- Um **byte** é composto por 8 bits.

### Ciclo de Desenvolvimento:
- Escrever o código do programa.
- Compilar. Converte o código escrito em liguagem de alto nível para a linguagem de máquina.
  - Processo de compilação:
    - identifica eventuais erros de sintaxe no código.
    - Se reportado erros é necessário que se corrija antes de tentar compilar novamente.
    - Se tudo tiver certo, então o código é compilado e um executável é gerado
- Verificar se o programa realiza aquilo para o qual foi idealizado.
- Após isso, se o programa estiver executando perfeitamente, então o ciclo de desenvolvimento pode ser considerado concluído.

<p align="center">
    <img src="./img/Ciclo de desenvolvimento.jpg" alt="Ciclo de desenvolvimento"/>
</p>

> **Note**: Caso tenha algum erro de sintaxe o programa não compila e o compilador apresenta o erro.

### Variáveis e operadores:
- Uma variável representa um espaço na memória para armazenar determinado tipo de dado.
- O nome da variável serve de referência ao dado armazenado no espaço de memória da variável.
- O tipo da variável determina a natureza do dado que será armazendo.
### Tipos básicos:
| tipo      | tamanho             | representatividade                 |
|-----------|---------------------|------------------------------------|
| char      | **1 byte**          | **-128 a 127**                     |
| short int | **2 bytes**         | **-32 768 a 32 767**               |
| int       | short <=int <= long | short <=int <= long                |
| long int  | **4 bytes**         | **-2 147 483 648 a 2 147 483 647** |
| float     | **4 bytes**         | **+- 10^(-38) a 10^(38)**          |
| double    | **8 bytes**         | **+- 10^(-308) a 10^(308)**        |

- Obs: se quisermos modifica-los para representar apenas valores positivos basta colocarmos antes **unsigned**.
- O porgramador pode requisitar uma conversão de tipo através do uso do operador de molde de tipo (operador cast), por exemplo:
```c
    int a, b;
    a = (int) 3.5;
    b = (int) 3.5 % 2;
```

## Aprendendo-C

Em C para usarmos as funções de entrada e saída é necessário importar a biblioteca
**stdio**, com ela importada, nós podemos usar a função **printf** e a função **scanf**, com elas respectivamente, nós podemos ter entrada e saída de dados.

## Compilador
<img align="center" src="https://slideplayer.com.br/slide/17025453/98/images/10/Processo+de+compila%C3%A7%C3%A3o.jpg" alt="imagem processo de compilação">

**Explicação de forma resumida:**
O compilador faz o processo de tradução do nosso programa.c escrito numa **linguagem de alto nível** (capaz de seres humanos compreenderem) e passa esse programa para **linguagem de máquina** (linguagem de baixo nível) que é a linguagem que o computador é capaz de entender, logo após esse processo de compilação é gerado um **executável** sendo o que nos permite rodar o nosso programa.


## Importação
Importações em C devem ser feitas da seguinte maneira:
```C
    #include <stdio.h>
```
- O **include** é o equivalente ao **import** em Python.
- **stdio.h** é a biblioteca de entrada e saída do C.

>**Note**: Tudo que começa com **#** em C é chamado de **diretiva**.

## Função Main
Todo programa em C deve possuir uma função principal chamada **main**, ela é uma função do tipo inteiro, então ela vai ser sempre retornar um número, e como ela é uma função especial, ela não tem parâmetros, por isso o **void** dentro dos parênteses.

A função **main** é declarada da seguinte maneira:
```C
    # include <stdio.h>
    
    int main(void) { // representa o cabeçalho da função.
        
        return 0;
    }
```
- Quando a função **main** retorna 0 quer dizer que o programa está funcionando perfeitamente.
- Em C ao final de cada linha é necessário ser finalizada com **;**.

>**Note**: Em C o **0** é equivalente a **Falso** e **1** a **Verdadeiro**.

## Quebra de linha
Quebra de linha em C é `\n`:
```C
    printf("Hello, world!\n");
```

## Comentários
- Quando quisermos fazer comentários em apenas uma linha, nós devemos usar o **//**.
- Para comentar um bloco de código, nós usamos o **/*** para abrir e ***/** para fechar.
````C
    // Com isso comento uma linha
    /* Assim eu consigo comentar
     * um bloco de código */
````

## Declaração de variáveis
A declaração de uma variável reserva um espaço na memória para armazenar um dado do tipo da variável e associa o nome da variável a este espaço de memória. Uma vez declarada a variável só podemos armazenar valores do mesmo tipo.

````C
    int idade;
````
- C é uma linguagem de tipagem estática, então nós precisamos dizer o seu tipo durante a declaração.
- Em C as variáveis podem ser inicializadas na declaração.
  - (**Na programação isso é considerada uma boa prática. Sempre que soubermos o valor a ser armazenado numa variável sendo declarada, devemos inicializá-la na declaração, evitando assim possíveis erros de veriável sem valor definido.**)
```C
    int a = 5, b = 6;
    float c = 25.5;
```

- A linguagem permite que variáveis do mesmo tipo sejam declaradas juntas.
- Variáveis devem ter nomes **únicos** no escopo que estão, caso contrário será apresentado erro pelo compilador.

- Para que uma variável seja impressa pelo `printf()` é preciso fazer o uso de máscara (`%d - int`, `%f - float`, `%c - char`,...) indicando o tipo da variável e em seguida após uma `,` passar o nome da variável, ficando assim: `printf("Você tem %d anos!", idade);`.

>**Note**: A diferença entre a **linguagem tipada** e não **tipada** é em uma nós precisamos fazer a declaração do tipo.

>**Note**: Numa **linguagem estática** o tipo é inferido na declaração da variável e checado pelo compilador, já numa **linguagem dinâmica** o tipo é inferido pelo valor que for atribuído àquela variável e checado no tempo de execução.

>**Note**: **Linguagens fortemente tipadas**, apresentam erros ou exceções quando tentamos fazer operações entre valores de tipos diferentes, só é possível fazer essas operações através de conversão de valores. Já as **linguagens de tipagem fraca** não é necessário fazer conversões e se pode cambiar entre os tipos livremente.

## Função printf
A função printf posiibilita a saída de textos e valores (sejam eles constantes, variáveis ou resultados de expressões) segundo esse formato:
```C
    printf(formato, lista de constantes/variáveis/expressões...);
```
- O primeiro parâmetro é uma cadeia de carcteres delimitada com aspas que especifica o texto e o formato de saída.
- Para cada valor que se deseja imprimir, deve haver um especificador de formato. os especificadores variam com o tipo do valor e a precisão que eles sejam impressos. Estes especificadores são precedidos pelo caractere `%`.
- Se quisermos imprimir porcentagem é precico colocar `%%`.
- É possível especificar também o tamanho dos campos.
<p align="center">
    <img src="./img/tamanho dos campos.jpg" alt="Tamanho dos campos"/>
</p>

```c
    printf("%d %g\n", 33, 5.3); /*resulta em 33 5.3*/

    printf("Inteiro = %d  Real = %g\n", 33, 3.5); /* Inteiro = 33  Real = 5.3*/
```
<p align="center">
    <img src="./img/especificadores de formato.jpg" alt="Tabela com todos os especificadores"/>
</p>
<p align="center">
    <img src="./img/caracteres de escape.jpg" alt="Caracteres de escape"/>
</p>

## Função scanf
Assim como o **printf** a função **scanf** recebe dois parâmetros, a máscara indicando o tipo do dado que vai ser recebido e `&nomeVariavel` que atribui o dado recebido pelo teclado a variável que vem logo após o **&**.
- o **&** indica o endereço de memória da variável como o espaço da memória no qual será armazendo o valor capturado.
```C
    int num;

    printf("Digite um número de 1 a 10: ");
    scanf("%d",&num);
```
<p align="center">
    <img src="./img/especificadores de formato função scanf.jpg" alt="especificadores de formato função scanf"/>
</p>

## Operadores
Em realação aos operadores temos dois tipos, os **unários e os binários**, a diferença entre eles é que os operadores binários operam sobre dois operandos.

Em C, um operador binário é escrito entre os seus operandos e um operador unário precede o seu único operando.

### Operadores aritméticos
- adição `+`;
- subtração `-`;
- multiplicação `*`;
- divisão `/`;
  - Em C, divisões entre valores inteiros resultarão sempre num valor inteiro, como, por exemplo, 5/2, resultará em 2, pois os dois operandos são inteiros.
  - As operações são feitas na precisão dos seus operandos.
  - No caso de uso de dois operandos distintos, o valor do operando de menor expressividade é implicitamente convertido para o tipo de maior expressividade.
```C
    // Exemplos
    int a;
    double b, c; 

    a = 3.5; /* como a é do tipo int, será armazendo apenas a parte inteira (3)*/
    
    b = a / 2.0; /* nesse caso é uma divisão com dois tipos distintos como a é int e está sendo dividido por um valor double (2.0),
    a é implictamente convertido para double, por se tratar de um tipo com menor expressividade.*/
    
    c = 1/3; /* resulta em 0 pois como é uma divisão entre inteiros só é armazenado o 0 de 0.3333... */
```
- módulo `%`;
  - o operador módulo, não se aplica a valores reais, só pode ser usado com valores do tipo **int**.

- os operadores `*, / e %` tem precedência maior que `+` e `-`, o operador unário `-` tem maior precedência que os todos os anteriores.
- Em casos me mesma precedência, serão avaliados no geral da esquerda para direita.
````c
  a + b * c / d /* primeiro a multiplicação, depois a divisão seguida da soma.*/
  (a + b) * c / d /* nesse caso primeiro a soma, depois a multiplicação, e por último a divisão.*/
````
### Operadores de incremento e decremento
- Possuem maior precedência que o operador unário `-`.
-  Devem ser aplicados somente em variáveis.
- `n++` serve para incrementar;
- `n--` serve para decrementar
- `++` ou `--` podem ser usados tanto antes, quanto depois da varíável. Porém, isso tem resultados diferentes em casos de atribuição a outra variável, no caso dos operadores antes, o resultado armazenado já vai ser com o valor incrementado ou decrementado, já quando os operadores vêm após a variável o valor armazenado é o valor da variável sem incremento ou decremento.
```c
    int n = 5, x;
    
    x = n++; /* x irá armazenar o valor 5*/
    x = ++n; /* x irá armazenar o valor 6*/
    
    /* em ambos os casos o valor de n será 6.*/
    
    /* Em C podemos escrever esses comandos de diversas maneiras:*/
    /* São todos equivalentes */
    a = a + 1;
    a += 1;
    a++;
    ++a;
```

### Operadores relacionais
- São usados para comparar dois valores.
- Em C **não existe** o tipo booleano.
- O valor **0** é interpretado como falso e **qualquer valor diferente de zero** é interpretado como verdadeiro.

<p align="center">
    <img src="./img/operadores relacionais.jpg" alt="Tabela com operadores relacionais"/>
</p>

### Operadores lógicos
- Servem para combinar expressões booleanas.
- As expressões que possuem operadores lógicos são avaliadas da esquerda para a direita. (**Em expressões que combinem operadores lógicos e relacionais é recomendado o uso de parênteses.**)
- São normalmente utilizados para codificar tomadas de decisão, mas podemos, utiliza-los para atribuir valores a variáveis.
````c
    int a, b;
    int c = 23;
    int d = c + 4;

    a = (c < 20) || (d > c); /*verdadeiro*/
    b = (c < 20) && (d > c); /* falso, nesse caso como se trata do and, se a primeira expressão for falsa, a seguinte nem chega a ser avaliada. */ 
````
- C oferece os seguintes operadores:

<p align="center">
    <img src="./img/operadores lógicos.jpg" alt="Tabela com operadores lógicos"/>
</p>

### Operador sizeof
Resulta no número de bytes de determinado tipo, se aplicado a um tipo ou no número de bytes de uma variável.

````c
  int a = sizeof(double); /* armazenda o valor 8 na variável a, pois um double ocupa 8 bytes de memória. */
  int b = sizeof(a); /* armazena o valor 4, pois uma varável do tipo int ocupa 4 bytes de memória (supostamente). */
````

## Condicionais

### Comando if
O comando if avalia uma expressão booleana e redireciona o fluxo de execução baseado no resultado avaliado (falso ou verdadeiro).

- Sintaxe simples do comando `if` em C:
```C
    if (expressao_booleana) {
        bloco de comandos
}
    if (dia == 5){
        printf('Hoje é dia 5!');
    }
```
- Sintaxe de um comando `if` e `else` (construção de seleção exclusiva):
````c
    if (dia == 5){
        printf('Hoje é dia 5!');
    } else {
        printf('Hoje não é dia 5!');
    }
    
    /* Caso a condição seja verdadeira, o primeiro bloco de código será executado, caso não seja o bloco do else é executado. */
````
- A Sintaxe da linguagem C também permite a codificação de `else if`, que é uma contrução de seleção exclusiva dentre multiplas condições:
````c
    if (dia == 5){
        printf('Hoje é dia 5!');
    } else if (dia == 6){
        printf('Hoje é dia 6!');
    } else {
        printf('Hoje não é dia 5 e nem 6!');
    }
    
    /* Nesse caso se a primeira condição for verdadeira, o primeiro bloco de código é executado e as outras condições não são avaliadas, se a primeira for falsa aí testa a segunda condição e assim por diante. */
````
### Expressões booleana
Uma expressão booleana é uma expressão, que quanto testada, resulta em falso ou verdadeiro, no caso do C em `0` e `qualquer número != de 0`, elas são construídas no geral usando operadores relacionais e/ou lógicos.
- Exemplo:
````c
    if (a != 0){
        // bloco é executado
    }
    ou
    if (a){
        // bloco só é excutado se a não for igual a 0.
    }
````
- Exemplo usandos operadores `relacionais` e `lógicos`:
````c
    if (media >= 6 && p1 >= 3.0 && p2 >= 3.0 && p3>= 3.0){
        printf('Aprovado, sua media foi: %.2f', media);
    }else{
        printf('Você está de recuperação');
    }
    
    ou
    if (!(media < 6 || p1 < 3.0 || p2 < 3.0 || p3 < 3.0)){
        printf('Aprovado, sua media foi: %.2f', media);
    }else{
        printf('Você está de recuperação');
    }
````
### Bloco de Comandos ou Escopo
Em C, podemos agrupar comandos em blocos envolvendo-os com `{...}`, eles podem ser criados em qualquer ponto do programa, basta usar as chaves. Porém, caso o bloco de comandos tenha apenas um comando, as `{}` podem ser omitiddas.
- Uma variável declarada dentro de um bloco, só existe enquanto os comandos do bloco estiverem sendo executados, assim que ele para de ser executado a variável deixa de existuir.
- A partir do padrão C99, variáveis locais podem ser declaradas em qualquer ponto do bloco.
- Exemplo:
````c
    /* Nesse ponto a variável i não existe, ela só existe no escopo em que foi declarada, no caso, no comando if.*/
    if (n > 0){
        int i;
    }
    /* Nesse ponto a variável i não existe, ela só existe no escopo em que foi declarada, no caso, no comando if.*/
````
>**Note**: é uma boa prática de programação declarar as variáveis com o menor escopo possível, pois isso facilita o `entendimento` e a `manutenção` do código, além de evitar erros.

>**Note**: Uma prática comum e boa, é em C é escrever os blocos com margem à esquerda maior que o comando que o precede. A (identação) melhora a legibilidade do código.

### Operador condicinal
A linguagem C possui também o operador condicional. Ele é uma alternativa ao comando `if` e `else`.
- Sua forma geral: `condição ?  expressão_1 : expressão_2;`
  - se a condição for verdadeira, a primeira expressão é executada, caso contrário, a segunda.
- Exemplo:
````c
    /* Esses 2 jeitos realizam a mesma coisa */
    if (a > b)
        maior = a;
    else
        maior = b;
    /* operador condicional:*/
    maior = a > b ? a : b;
````
### Comando de seleção (Switch)
A linguagem C tem o comando `switch` que seleciona uma opção dentre um conjunto possíveis de casos.

- Sua forma geral:
````c
    switch( exp ) {
        case op1:
            // comando executado pois a exp == op 1
        break;
        case op2:
        // comando executado pois a exp == op 2
        break;
        case op3:
        // comando executado pois a exp == op 3
        break;
        default:
            // é executado caso a exp não seja igual a nenhuma das op.
        break;    
    }
````
- Em op`i`, deve ser um número inteiro ou uma constante caractere. São executados até que se encontre `break`.
- Se o comando `break` for omitido, a execução do caso continua com o comando dos casos seguintes.
- O bloco `deafult` pode aparecer em qualquer posição, mas normalmente é colocado por último e pode também ser omitido.

## Laços de repetição em C

for:
```C
    for (i=0; i < 10; i++){
        //bloco de código a ser repetido    
    }
```
while:
````C
    while(){
    
    }
````

## Declaração de constantes
Deve ser declarada do lado de fora da main. E é uma conveção que as constantes sejam definidas todas em maiscúlas.
- se nenhum sufixo for adicionado uma **constante real é do tipo double**.
````c
    #define C 15
    #define A 2.3 // essa constante tem o tipo double
    #define A 2.3 f // essa constante real é do tipo float
````

## Bibliotecas

### Matemática
A biblioteca padrão do C é a `<math.h>`.

- As funções da biblioteca matmática são em geral definidas usando o tipo com maior precisão, para poder atender às aplicações que necessitam trabalhar com precisão dupla.
- A biblioteca matemática facilita muito a nossa vida fornecedendo funções como a `sqrt` para extrair raiz e a função `pow` para potênciação e muitas outras.
- Exemplos:
````c
    # include <math.h>
    y = sqrt(x); 
    a = pow(raio, 2); // na função pow o primeiro argumento é a base, e o segundo o expoente.
````
### stdlib.h
#### rand (gerar sequências aleatórios)
- Uma das funções que a biblioteca `<stdlib.h>` é a função `rand`. A função `rand` nos permite gerar números aleatórios, ela não recebe nenhum parâmetro de entrada e retorna um número aleatório entre 0 e `RAND_MAX`, onde `RAND_MAX` representa uma constante simbólica que é definida pela biblioteca.
- Podemos definir nosso `RAND_MAX`, usando o operador de módulo.
  ````c
          c = rand() % 10; /*vai gerar um número aleatório entre 0 e 9*/
  ````
- Ao executarmos um programa com a função rand(), ela gerará um número aleatório, porém, ao reexecutarmos o programa, o número que vai aparecer é o mesmo da execução anterior. Isso acontece porque o algoritmo de geração de números aleatórios da biblioteca padrão gera uma sequência de números baseado num valor `semente`. A semente define determinada sequência de números a ser gerada. Se quisermos gerar diferentes sequências, devemos passar diferentes sementes para o gerador.
#### srand (definir a semente do gerador de sequências aleatórias)
- Para definirmos a semente temos a função `srand`, ela recebe como parâmetro um número inteiro, representando a semente a ser usadada.
- E ainda é um problema, pois se quisermos uma nova sequência a cada execução vamos precisar informar diferentes sementes.
- O valor da semente não pode ser fornecido pelo usuário.
- Um truque simples pra resolver isso é usar uma função da biblioteca `<time.h>` chamada `time`, o valor retornado por ela pode ser usado como a nossa semente. **(obs: vou explicar sobre `time` na próxima linha)**
````c
    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    
    int main (void) {
        srand(time(NULL)); // srand para definir a semente, e a função time para que possamos ter sementes diferentes a cada execução
        printf("%d\n", rand() % 10); // % 10 para que seja gerado um número apenas entre 0 e 9
        printf("%d\n", rand() % 10);
        printf("%d\n", rand() % 10);
        printf("%d\n", rand() % 10);
        
        return 0;
    }
    
````

### time.h
- Na biblioteca padrão `time.h`, nos possuimos a função `time`, essa função tem como valor de retorno o **número total de segundos decorridos desde 01/01/1970.**
- Essa função espera um parâmetro de entrada, mas em alguns casos podemos usar a **constante simbólica `NULL`**.

## Funções e ponteiros
Para a construção de programas estruturados é sempre recomendado que se divida as grandes tarefas de computação em tarefas menores, e utilizar os resultados parciais das tarefas para compor o resultado final. É aí que entram as **funções.**

### Funções em C
- Em C tudo é feito atrávez de funções.
- Em C, a criação de funções é o recurso adequado para codificar tarefas específicas, esse recurso nos traz três grandes vantagens:
  - Deixa mais fácil o processo de resolução do problema, pois dividi-lo em pedaços menores acaba sendo mais fácil do que tentar resolver todo o problema de uma vez. Ou seja, pequenas funções que resolvem pequenos problemas específicos, são melhores que uma função gigante.
  - Funções específicas podem ser reutílizadas em outros codígos.
  - Facilita a legibilidade.
- Se existe um procedimento repetido muitas vezes ao longo do codígo ou ao longo do programa, esse procedimento é um bom candidato a virar uma função.
- Um programa deve ser pensado em funções, e estas, por sua vez, podem (e devem, se possível) esconder do corpo principal do programa detalhes ou particularidades de implementação.

#### Variável do tipo ponteiro
- Em muito dos casos na codificação de funções em C, precisaremos fazer o uso de variáveis do tipo **ponteiro.**
  - Uma varíavel do tipo ponteiro `armazena endereços de memória`. Isso possibilita que possamos alterar o valor armazenado num espaço de memória sem necessariamente estar no escopo da variável que usa o espaço.
  - Esse é um conceito crítico da linguagem C: a manipulação de ponteiros traz um grande poder de expressão para a linguagem, mas é importante tomar cuidado ao manipular ponteiros, pois temos que ter controle do espaço de memória que estamos acessando.

### Criação de Funções
- Em C, a sintaxe é a seguinte:
````c
        tipo_do_retorno _nome_da_função (lista da parâmetros){
            corpo_da_função
        }
````
  - Exemplo de um programa com uma função:
````c
  #include <stdio.h>
  
  float celsius_fahrenheit (float c) {
    float f;
    f = 1.8 * c + 32;
    return f;
  }
  
  int main(void) {
  float c, f;
  
      printf("Entre com a temperatura em Celsius: \n");
      scanf("%f", &c);
  
      f = celsius_fahrenheit(c);
  
      printf("Temperatura em Fahrenheit: %.0f\n", f);
      return 0;
  }
````
- Para cada função que criamos precisamos escolher um nome, é importante que esse nome seja claro, sucinto e descreva bem o que aquela função faz, e, além disso, um programa em C **não pode** ter duas funções com o mesmo nome.
- Um função pode receber dados de entrada, esses dados de entradas são **parâmetros da função** que são declarados dentro dos parênteses que seguem o nome da função num mesmo escopo.
- Caso uma função não tenha parâmetros, colocamos a palavra `void` no lugar.
- Uma função pode ter também um **valor de retorno** associado, antes do nome da função é preciso indicar o tipo do valor a ser retornado.
- Caso não aja valor de retorno, usamos também aqui a palavra reservada `void`.

#### Protótipos
- No código, as funções devem ser escritas antes de serem usadas. Assim como a função auxiliar é chamada pela função **main**, ela deve aparecer antes do código.
- Mas isso pode ser contornado com o uso de **protótipos**. O **protótipo** de uma função é o cabeçalho da função, seguido de um ponto-e-vírgula.
- Exemplo do uso de protótipo com o código anterior:
````c
# include <stdio.h>

    float celsius_fahrenheit (float c); /* Protótipo da função */

  int main (void) {
      /* Corpo da função principal */
  }

  float celsius_fahrenheit (float c) {
      /* Corpo da função auxiliar */
  }
````
- No protótipo, não há necessecidade de indicar os nomes dos parâmetros, apenas os seus tipos. Porém, geralmente é bom manter os nomes dos parâmetros, pois eles servem como documentação do significado de cada parâmetro, desde que utilizemos nomes coerentes.
- O Protótipo da função é necessário para que o compilador verifique os tipos dos parâmetros na chamada da função. No exemplo o compilador verifica se o parâmetro passado é do tipo **float** (ou um valor que possa ser convertido para **float**), que é o tipo do seu valor de retorno.

### Parâmetros e valor de retorno

- Uma função precisa ter sua interface bem definida, tanto do ponto de vista **semântico** como do **sintático**.
- Do ponto de vista **semântico**, quando projetamos uma função, identificamos sua funcionalidade e, com isso, definimos que dados de entrada são recebidos e qual o resultado (dado de saída) é produzido pela função.
- Do ponto de vista **sintático**, os tipos dos dados de entrada e saída são especificados no cabeçalho da função.
- Uma função pode receber mais do que um parâmetro.
- Exemplo:
````c
# define PI 3.14159

float volume_cilindro (float r, float h){
    float v;
    v = PI * r * r * h;
    return v;
}
````
- É importante que os valores passados na chamada da função correspondam aos parâmetros em ordem, número e tipo. Caso ordem, número e tipo não sejam obedecidos teremos problemas com o resultado da função.

### Escopo de variáveis

- Quando, durante a execução do código, é encontrada um declaração de variável, o sistema reserva o espaço de memória correspondente. Este espaço de memória permanece disponível para o programa durante o _o tempo de vida da variável_.
- Uma variável declarada dentro de uma função é chamada **_variável local_**. Uma variável local tem seu tempo de vida definido pela função que a declarou: a variável só existe enquanto a função está sendo executada e assim que a execução termina o espaço de memória que essas variáveis possuiam é liberado para outros usos. Por esse mótivo são também classificadas como **_variáveis automáticas_**
- As **variáveis locais** só podem ser acessadas após a sua declaração e dentro da função em que foram definidas. Dentro de uma função não se tem acesso a variáveis locais definidas em outras funções.
- As regras são as mesmas para variáveis declaradas dentro de blocos. Se um bloco é definido dentro de uma função, dentro do bloco, se tem acesso às variáveis locais da função declaradas antes do bloco. No entanto as variáveis declaradas dentro do bloco não podem ser acessadas na função fora do bloco que as declara.


### Modelo de pilha

- A alocação dos espaços de memórias dos parâmetros e das variáveis locais seguem um _modelo de pilha_.
- Analogia da pilha de pratos, o sistema gerencia a memória das variáveis automáticas da mesma maneira.
- Uma área da memória é reservada para armazenar a **pilha de execução** do programa. Quando a declaração de uma variável local é encontrada, o espeço de memória no topo da pilha de execução é associado à variável. Quando o tempo de vida da variável acaba, o espaço correspondente ao topo da pilha é liberado para ser usado por outra variável.

  ![](./img/Pilha%20de%20variáveis%20durante%20a%20execução%20do%20programa.png)
- Seguindo o exemplo da imagem acima:
  - Quando a execução do programa se inicia, a função **main** começa a sua execução.
  - (a) No ínicio da função, três variáveis são declaradas. As três são alocadas no topo da pilha (inicialmente vazia).
  - Como nenhum valor é atribuido às variáveis, os espaços de memória correspondentes armazenam valores indefinidos ("lixos").
  - O programa pede que o usuário defina os valores do raio e da altura do cilindro. (b) os valores capturados são atribuidos as variáveis correspondentes.
  - A função **main** chama a função auxiliar para fazer o cálculo do volume.
  - A chamada da função representa primeiramente uma transferência de fluxo de execução para a função.
  - (c) Os parâmetros da função são alocados na pilha e seus valores, inicializados com os valores passados na chamada da função.
  - Nesse momento, como o controle da execução foi tranferido para a função auxiliar, não se tem acesso às variáveis declaradas na função main, apesar delas estarem alocadas na base da pilha (a função **main** ainda não terminou, apenas teve sua execução suspensa).
  - (d) Dentro da função auxiliar, é declarada uma variável local adicional e alocada no topo da pilha de execução, inicialmente com valor indefinido.
  - (e) A função auxiliar calcula o valor do volume e o atribui à variável local.
  - A função auxiliar retorn o valor. Neste momento, a função auxiliar termina sua execução e o controle volta para função _main_. Os parâmetros e variáveis locais da função auxiliar são desempilhados e deixam de existir.
  - (f) Na função _main_, o valor retornado pela função auxiliar é atribuido à variável volume.

### Ponteiro de variáveis

- Uma função pode retornar um valor para a função que a chama. No entanto, a possibilidade de retornar um único valor nem sempre é satisfatória. Muitas vezes precisamos transferir mais de um valor para a função que chama, o que não pode ser feito via retorno explícito de valores.
- Para ilustrar essa discussão vamos usar de exemplo primeiro essa função simples que calcula a soma de dois valores inteiros:
````c
# include <stdio.h>

int soma (int a, int b){
    int c = a + b;
    return c
}

int main (void){
    int s = soma(3,5);
    printf("Soma = %d\n", s);
    
    return 0;
}
````
- Este exemplo não apresenta nenhuma dificuldade, pois o resultado pode ser retornado explicitamente.
- O problema é quando queremos que a função retorne mais de um valor.
- Como agora, por exemplo, vamos considerar uma função que calcula a soma e o produdo de dois números. Vamos ver duas formas de implementá-la, uma incorreta e uma correta.
- **Incorreta:**
````c
/* função somaprod (versão ERRADA) */
# include <stdio.h>

void somaprod (int a, int b, int c, int d){
    c  = a + b;
    d = a * b;
}

int main (void){
    int s, p;
    somaprod(3,5,s,p);
    print("Soma = %d Produto = %d\n", s, p);
    return 0;
}
````
- Esse código não funciona como o esperado. Serão impressos valores "lixos", pois s e p não foram inicializadas na função _**main**_ e seus valores não são alterados. Alterados são os valores de **c** e **d** dentro da função **somaprod**, mas eles não representam as variáveis da função **main**, sendo apenas inicializados com os valores de s e p na chamada da função. 

#### Variáveis do tipo ponteiro
- A linguagem C permite o armazenamento e a manipulação de valores de endereços de memória. Para cada tipo existente, há um **tipo ponteiro** que pode armazenar endereços da memória nos quais existem valores do tipo correspondente armazenados. 
  - Por exemplo, quando escrevemos: `int a;` declaramos uma variável de nome **a** que pode armazenar valores inteiros. Automaticamente, reserva-se um espaço na memória suficiente para armazenar valores inteiros (geralmente 4 bytes).
- Da mesma forma que declaramos uma variável int para armazenar inteiros, nós podemos declarar variáveis que armazenam valores de endereços de memória nos quais há valores inteiros armazenados.
- Para declarar um ponteiro nós colocamos o seu tipo e antes de nomea-lo, colocamos o caractere `*`: `int *p;`
  - Declaramos uma variável de nome **p** que pode armazenar endereços de memória nos quais existe um inteiro armazenado.
- Para acessar endereços de memória, nós usamos o operador unário `&` ("endereço de"), que quando aplicado em variáveis, resulta no endereço da posição de memória reservado para a variável.
- Já para atribuir, o operador unário `*` ("conteúdo de"), que quando aplicado a variáveis do tipo ponteiro, acessa o conteúdo que está armazenado naquele endereço de memória.
- Exemplo:
````c
int a; // variável do tipo inteiro
int *p; // variável do tipo ponteiro para inteiro

a = 5; // a recebe o valor 5
p = &a; // p recebe endereço de memória de a

*p = 6; // o conteúdo de p recebe 6, ou seja a recebe 6
````
- Imagem com a representação do exemplo acima:
  ![](./img/Ponteiro%20na%20pilha%20de%20execução.png)
  - Quando as variáveis foram declaradas, elas armazenaram valores "lixo", pois ainda não tinham sido inicializada. E no fim **a** foi atualizada com o valor recebido por `*p`, pois acessar **a** é equivalente a acessar `*p` já que este possui o endereço de a. Dizemos que **p aponta para a**.

