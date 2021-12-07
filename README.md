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
- Tipos básicos:
  - char — espaço que ocupa (**1 byte**) — tamanho
  - short int (ou só short)
  - int
  - long int (ou só long)