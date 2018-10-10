========================================
Algoritmos e Programação de Computadores
========================================

Importante: [notas da prova1](https://github.com/fabiommendes/apc2018/blob/master/notas-p1.pdf)

Este é o Git da disciplina Algoritmos e Programação de Computadores. Aqui será 
compartilhado o material produzido em sala de aula assim como tarefas, wiki e 
discussões. Este arquivo contêm informações básicas sobre a disciplina e o 
plano de ensino do semestre.


Informações básicas
===================

Curso: 
    Engenharias
Professor: 
    Fábio Macêdo Mendes
Disciplina: 
    Algoritmos e Programação de Computadores
Semestre/ano: 
    02/2018
Carga horária: 
    90 h
Créditos: 
    06


Ementa
======

* Princípios fundamentais de construção de programas.
* Construção de algoritmos e sua representação em pseudocódigo e linguagens de alto nível.
* Noções de abstração.
* Especificação de variáveis e funções.
* Testes e depuração.
* Padrões de soluções em programação.
* Noções de programação estruturada.
* Identificadores e tipos.
* Operadores e expressões.
* Estruturas de controle: condicional e repetição.
* Entrada e saída de dados.
* Estruturas de dados estáticas: agregados homogêneos e heterogêneos.
* Iteração e recursão.
* Noções de análise de custo e complexidade.
* Desenvolvimento sistemático e implementação de programas.
* Estruturação, depuração, testes e documentação de programas.
* Resolução de problemas.
* Aplicações em casos reais e questões ambientais.


Horário das aulas e atendimento
===============================

Aulas teóricas e de exercícios: segundas, terças e quintas-feiras às 14h 
Atendimento e monitoria: a definir


Informações importantes
=======================

Este curso utiliza GitHub para gerenciar o curso. A comunicação com a turma é 
feita através de issues no repositório do Github. Habilite a funcionalidade 
"Watch" no repositório para receber notificações sobre atualizações.

Google Classroom:
    http://classroom.google.com/ - Código de inscrição: 1byukn
Github:
    http://github.com/fabiommendes/apc2018/


Critérios de avaliação
======================

Cada aluno será avaliado com uma nota numérica onde a conversão entre a 
pontuação e a menção final é feita da forma usual: 9,0pts+: SS, 7,0pts+: MS, 
5,0pts+: MM, 3,0pts+: MI e < 3,0 pts II. A distribuição de pontos ao longo do 
curso segue a fórmula::

    NotaFinal = 0.3 * P1 + 0.35 * P2 + 0.35 * P3

onde P1, P2 e P3 consistem na nota das provas 1, 2 e 3.

300
---

Prova substitutiva e faltas
---------------------------

O curso não inclui prova substitutiva. Caso o aluno possua uma falta justificada 
no dia da primeira prova, deverá apresentar um comprovante na aula seguinte à 
prova ou quando terminar a licença médica. Esta justificativa não abona falta, 
mas dá direito ao aluno participar do 300 e utilizar a nota da segunda prova. 

O aluno pode faltar até 12 vezes em um semestre. Faltas com justificativa médica 
não serão abonadas, exceto em casos excepcionais. Os alunos reprovados por 
falta ficarão com uma menção igual a SR.

Código de ética e conduta
-------------------------

As avaliações serão realizadas com auxílio do computador no laboratório de 
informática. Todas as submissões serão processadas por um programa de detecção 
de plágio. Qualquer atividade onde for detectada a presença de plágio será 
anulada sem a possibilidade de substituição. Não será feita qualquer distinção 
entre o aluno que forneceu a resposta para cópia e o aluno que obteve a mesma.


Prepare-se
==========

O curso utiliza alguns pacotes Python para os quais cada estudante deverá 
providenciar a instalação o mais cedo o possível. O curso requer Python 3.6+ 
com alguns pacotes instalados:

* Python: Versão 3.6+
* Pip: Gerenciador de pacotes do Python (sudo apt-get install python3-pip)
* Editores de código/IDE:
    Utilize o seu favorito. Caso precise de uma recomendação, seguem algumas:
    * VSCode - um bom meio termo entre uma IDE e um editor de código leve. 
        Criado para Javascript, mas possui bons plugins para Python e várias 
        outras linguagens.
    * PyCharm Educacional - IDE com ótimos recursos profisionais que adora 
        a sua memória RAM. Possui versão livre e versão profissional gratuita 
        para estudantes.

DICA: em todos os casos, prefira instalar os pacotes Python utilizando o 
apt-get e somente se o pacote não existir, instale-o utilizando o pip. Se 
utilizar o pip, faça a instalação de usuário utilizando o comando 
``pip3 install <pacote> --user`` (NUNCA utilize o sudo junto com --user e evite 
instalar globalmente para evitar problemas futuros com o APT).

Linux
-----

Os comandos de instalação acima assumem uma distribuição de Linux baseada em 
Debian como o Ubuntu ou o Mint. Não é necessário instalar uma distribuição 
deste tipo e você pode adaptar os comandos para o gerenciador de pacotes da sua 
distribuição (ou o Brew, no caso do OS X).


Bibliografia principal
----------------------

Introdução à Programação com Python: Nilo Ney Coutinho Menezes, Novatec, 2014


Cronograma de atividades
========================

+--------+-------+------------------------------------------------------+
| Semana | Data  |                         Aula                         |
+========+=======+======================================================+
| 1      | 13/08 | Início das aulas – Apresentação do curso             |
+--------+-------+------------------------------------------------------+
|        | 14/08 | Linha de comando                                     |
|        |       |                                                      |
|        |       | * Linha de comando                                   |
|        |       | * Python básico: operações básicas e variáveis       |
+--------+-------+------------------------------------------------------+
|        | 15/08 | Algoritmos                                           |
|        |       |                                                      |
|        |       | * Definição e histórico                              |
|        |       | * Fluxogramas                                        |
|        |       | * Exemplos de resolução de problemas por algoritmos  |
+--------+-------+------------------------------------------------------+
| 2      | 20/08 | Introdução ao Pytuguês                               |
|        |       |                                                      |
|        |       | * Instalação e comandos básicos                      |
|        |       | * Criando figuras geométricas                        |
|        |       | * Executando comandos e funções                      |
+--------+-------+------------------------------------------------------+
|        | 21/08 | Estruturas de controle                               |
|        |       |                                                      |
|        |       | * Repetições (repetir, enquanto, para cada)          |
|        |       | * Condicionais (se, então, senão)                    |
|        |       | * Criando figuras regulares e padrões                |
+--------+-------+------------------------------------------------------+
|        | 23/08 | Interação com o usuário                              |
|        |       |                                                      |
|        |       | * Entrada de dados                                   |
|        |       | * Criação de scripts                                 |
|        |       | * Figuras sob demanda                                |
+--------+-------+------------------------------------------------------+
| 3      | 27/08 | Listas                                               |
|        |       |                                                      |
|        |       | * Acessando elementos da lista                       |
|        |       | * Iterando sobre listas                              |
|        |       | * Criando listas dinamicamente                       |
+--------+-------+------------------------------------------------------+
|        | 28/08 | Dicionários                                          |
|        |       |                                                      |
|        |       | * Acessando elementos de um dicionário               |
|        |       | * Testando presença de uma determinada chave         |
|        |       | * Iteração sobre dicionários                         |
|        |       | * Criando um contador                                |
+--------+-------+------------------------------------------------------+
|        | 30/08 | Strings                                              |
|        |       |                                                      |
|        |       | * Manipulação de texto                               |
|        |       | * Descobrindo informações sobre strings              |
|        |       | * Operações básicas                                  |
|        |       | * Interpolação                                       |
+--------+-------+------------------------------------------------------+
| 4      | 03/09 | Funções                                              |
|        |       |                                                      |
|        |       | * Definindo suas próprias funções                    |
|        |       | * Reutilização de código                             |
|        |       | * Documentação de funções                            |
|        |       | * Construindo a complexidade                         |
+--------+-------+------------------------------------------------------+
|        | 04/09 | Projeto de Jogos: Pong                               |
|        |       |                                                      |
|        |       | * FGAme                                              |
|        |       | * Noções básicas de física                           |
+--------+-------+------------------------------------------------------+
|        | 06/09 | Recursão em funções                                  |
|        |       |                                                      |
|        |       | * Fractais como estruturas recursivas                |
|        |       | * Floco de Koch                                      |
+--------+-------+------------------------------------------------------+
| 5      | 10/09 | **PROVA I:** Pytuguês                                |
|        |       |                                                      |
|        |       | * Variáveis e tipos básicos (números e strings)      |
|        |       | * Estruturas de dados (listas e dicionários)         |
|        |       | * Controle de fluxo de código (laços e condicionais) |
|        |       | * Funções                                            |
|        |       | * Entrada e saída                                    |
+--------+-------+------------------------------------------------------+
|        | 11/09 | Python                                               |
|        |       |                                                      |
|        |       | * Sintaxe do Python                                  |
|        |       | * Notebooks                                          |
|        |       | * Scripts                                            |
|        |       | * Editor de código                                   |
+--------+-------+------------------------------------------------------+
|        | 13/09 | Entrada/Saída                                        |
|        |       |                                                      |
|        |       | * Leitura de entradas do usuário                     |
|        |       | * Tipos de dados                                     |
|        |       | * Conversão de tipos                                 |
|        |       | * Formatação de strings                              |
+--------+-------+------------------------------------------------------+
| 6      | 17/09 | Laço "for"                                           |
|        |       |                                                      |
|        |       | * Iterando sobre objetos                             |
|        |       | * Funções range e enumerate                          |
|        |       | * Compreensão de listas                              |
+--------+-------+------------------------------------------------------+
|        | 18/09 | Arquivos                                             |
|        |       |                                                      |
|        |       | * Leitura de arquivos                                |
|        |       | * Escrevendo arquivos                                |
|        |       | * Bloco "with"                                       |
+--------+-------+------------------------------------------------------+
|        | 20/09 | Representação de inteiros                            |
|        |       |                                                      |
|        |       | * Representação binária, octal e hexadecimal         |
|        |       | * Conversão de representações                        |
|        |       | * Literais de binários, octais e hexadecimais        |
|        |       | * Máscaras de bits                                   |
+--------+-------+------------------------------------------------------+
| 7      | 24/09 | Semana universitária                                 |
+--------+-------+------------------------------------------------------+
|        | 25/09 |                                                      |
+--------+-------+------------------------------------------------------+
|        | 27/09 |                                                      |
+--------+-------+------------------------------------------------------+
| 8      | 01/10 | Recursão                                             |
|        |       |                                                      |
|        |       | * Funções recursivas                                 |
|        |       | * Recursão vs iteração                               |
|        |       | * Fibonacci e fatorial                               |
+--------+-------+------------------------------------------------------+
|        | 02/10 | Análise de complexidade                              |
|        |       |                                                      |
|        |       | * Estrapolando o tempo de execução                   |
|        |       | * Memória vs. CPU                                    |
|        |       | * Controlando tempo de execução de programas         |
+--------+-------+------------------------------------------------------+
|        | 04/10 | Laboratório: Sequência de Collatz                    |
|        |       |                                                      |
|        |       | * Recursão fundamental vs contingencial              |
|        |       | * Problema da computabilidade                        |
|        |       | * Programação dinâmica com o "lru_cache"             |
+--------+-------+------------------------------------------------------+

+--------+-------+------------------------------------------------------+
| 14     | 05/11 | Introdução ao C                                      |
|        |       |                                                      |
|        |       | * Sintaxe básica do C                                |
|        |       | * Estrutura de um arquivo C                          |
|        |       | * Tipos de variávies                                 |
|        |       | * Interação com Python                               |
+--------+-------+------------------------------------------------------+
|        | 06/11 | Entrada e Saída                                      |
|        |       |                                                      |
|        |       | * Função printf e scanf                              |
|        |       | * Operadores de formatação                           |
|        |       | * Includes                                           |
+--------+-------+------------------------------------------------------+
|        | 08/11 | Declaração de funções                                |
|        |       |                                                      |
|        |       | * Assinatura e protótipo da função                   |
|        |       | * Tipagem estática                                   |
|        |       | * Função main()                                      |
+--------+-------+------------------------------------------------------+
| 15     | 12/11 | Tipagem estática                                     |
|        |       |                                                      |
|        |       | * Tipos das variáveis                                |
|        |       | * Tipos numéricos                                    |
|        |       | * Outros tipos básicos do C                          |
+--------+-------+------------------------------------------------------+
|        | 13/11 | Números de ponto flutuante                           |
|        |       |                                                      |
|        |       | * Ponto fixo                                         |
|        |       | * Ponto flutuante e notação científica               |
|        |       | * Ponto flutuante binário                            |
+--------+-------+------------------------------------------------------+
|        | 15/11 | **Feriado:** Proclamação da República                |
+--------+-------+------------------------------------------------------+
| 16     | 19/11 | Laço "while"                                         |
|        |       |                                                      |
|        |       | * Sintaxe básica                                     |
|        |       | * Variáveis contadoras e acumuladoras                |
|        |       | * Quebra de laços                                    |
+--------+-------+------------------------------------------------------+
|        | 20/11 | Laço "for"                                           |
|        |       |                                                      |
|        |       | * Sintaxe básica                                     |
|        |       | * Índices e contadores                               |
|        |       | * Equivalência entre "for" e while                   |
+--------+-------+------------------------------------------------------+
|        | 22/11 | Arrays                                               |
|        |       |                                                      |
|        |       | * Criação de arrays                                  |
|        |       | * Acesso a elementos                                 |
|        |       | * Overflow                                           |
|        |       | * Comparação com listas                              |
+--------+-------+------------------------------------------------------+
| 17     | 26/09 | Structs                                              |
|        |       |                                                      |
|        |       | * Tipos de dados compostos                           |
|        |       | * Acessando campos de um struct                      |
|        |       | * Interação com o Python                             |
+--------+-------+------------------------------------------------------+
|        | 27/11 | Processamento de dados em C                          |
|        |       |                                                      |
|        |       | * Iteração sobre arrays                              |
|        |       | * Calculando médias                                  |
|        |       | * Filtrando elementos                                |
|        |       | * Comparação de performance                          |
+--------+-------+------------------------------------------------------+
|        | 29/11 | **PROVA III:** C                                     |
|        |       |                                                      |
|        |       | * Funções recursivas                                 |
|        |       | * Recursão vs iteração                               |
|        |       | * Fibonacci e fatorial                               |
+--------+-------+------------------------------------------------------+
| 18     | 03/12 | Revisão de nota                                      |
+--------+-------+------------------------------------------------------+
|        | 04/12 | Entrega de projeto web                               |
+--------+-------+------------------------------------------------------+
|        | 06/12 | Prova substitutiva                                   |
+--------+-------+------------------------------------------------------+



Obs.: O cronograma está sujeito a alterações.
