# Introdução a Estrutura de Dados — Usando C

## 1 — Introdução à programação

- O computador é uma máquina capaz de manipular informações processando sequeências de instruções.

- **Programar** um computador significa desenvolver uma sequência de instuções que executa uma tarefa específica, produzindo o resultado esperado.

### Principais elementos de um computador:
<p align="center">
    <img src=".\img\principais elementos de um computador.jpg" alt="Principais elementos de um computador"/>
</p>


- Como computadores são máquinas capazes de realizar cálculos complicados de forma muityo eficinete, dividir um problema complexo em diversos porblemas simples é uma estratégia muito usada e muito recomendada.

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

## Aprendendo-C

Em C para usarmos as funções de entrada e saída é necessário importar a biblioteca
**stdio**, com ela importada, nós podemos usar a função **printf** e a função **scanf**, com elas respectivamente, nós podemos ter entrada e saída de dados.

## Observações
- Obs 1: Caso tenha algum erro de sintaxe o programa não compila e o compilador apresenta o erro.

- Obs 2: A diferença entre a **linguagem tipada** e não **tipada** é em uma nós precisamos fazer a declaração do tipo.

- Obs 3: Numa **linguagem estática** o tipo é inferido na declaração da variável e checado pelo compilador, já numa **linguagem dinâmica** o tipo é inferido pelo valor que for atribuído àquela variável e checado no tempo de execução.
-
- Obs 4: **Linguagens fortemente tipadas**, apresentam erros ou exceções quando tentamos fazer operações entre valores de tipos diferentes, só é possível fazer essas operações através de conversão de valores. Já as **linguagens de tipagem fraca** não é necessário fazer conversões e se pode cambiar entre os tipos livremente.

- Obs 5: Em C o **0** é equivalente a **Falso** e **1** a **Verdadeiro**.

- Obs 6: Tudo que começa com **#** em C é chamado de **diretiva**.

- Obs 7: **Continue** ele pula direto para a próxima iteração.

## Importação
Importações em C devem ser feitas da seguinte maneira:
```C
    #include <stdio.h>
```
- O **include** é o equivalente ao **import** em Python.
- **stdio.h** é a biblioteca de entrada e saída do C.

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
C é uma linguagem de tipagem estática, então nós precisamos dizer o seu tipo durante a declaração.
````C
    int idade = 10;
````
- Variáveis devem ter nomes **únicos** no escopo que estão, caso contrário será apresentado erro pelo compilador.

- Para que uma variável seja impressa pelo `printf()` é preciso fazer o uso de máscara (`%d - int`, `%f - float`, `%c - char`,...) indicando o tipo da variável e em seguida apos uma **,** passar o nome da variável, ficando assim: `printf("Você tem %d anos!", idade);`.

## Função scanf
Assim como o **printf** a função **scanf** recebe dois parâmetros, a máscara indicando o tipo do dado que vai ser recebido e `&nomeVariavel` que atribui o dado recebido pelo teclado a variável que vem logo após o **&**.
- o **&** indica o endereço de memória da variável como o espaço da memória no qual será armazendo o valor capturado.
```C
    int num;

    printf("Digite um número de 1 a 10: ");
    scanf("%d",&num);
```
## Compilador
<img align="center" src="https://slideplayer.com.br/slide/17025453/98/images/10/Processo+de+compila%C3%A7%C3%A3o.jpg" alt="imagem processo de compilação">

**Explicação de forma resumida:**
O compilador faz o processo de tradução do nosso programa.c que é escrito numa **linguagem de alto nível** (capaz de seres humanos compreenderem) e passa esse programa para **linguagem de máquina** (linguagem de baixo nível) que é a linguagem que o computador é capaz de entender, logo após esse processo de compilação é gerado um **executável** que é o que nos permite rodar nosso programa.

## Operadores Lógicos
- Operador And: `&&`
- Operador Or: `||`
- Operador de comparação: `==`
- Operador de atribuição: `=`

## Escopo
Uma variável só é visível no escopo em que foi declarada, ou nos escopos interno ao escopo no qual ela foi declarada.

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
Deve ser declarada do lado de fora da main. E é uma conveção que as constantes sejam definidad todas em maisculas.


````c
    #define C 15
````