========================================
Algoritmos e Programação de Computadores
========================================

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

Linux e Docker
--------------

Os comandos de instalação acima assumem uma distribuição de Linux baseada em 
Debian como o Ubuntu ou o Mint. Não é necessário instalar uma distribuição 
deste tipo e você pode adaptar os comandos para o gerenciador de pacotes da sua 
distribuição (ou o Brew, no caso do OS X).


Bibliografia principal
----------------------

Introdução à Programação com Python: Nilo Ney Coutinho Menezes, Novatec, 2014


Cronograma de atividades
========================

+--------+-------+--------------------------------------------------------+
| Semana | Data  |                          Aula                          |
+========+=======+========================================================+
| 1      | 13/08 | Início das aulas – Apresentação do curso               |
+--------+-------+--------------------------------------------------------+
|        | 14/08 | Linha de comando                                       |
|        |       |                                                        |
|        |       | * Linha de comando                                     |
|        |       | * Python básico: operações básicas e variáveis         |
+--------+-------+--------------------------------------------------------+
|        | 15/08 | Algoritmos                                             |
|        |       |                                                        |
|        |       | * Definição e histórico                                |
|        |       | * Fluxogramas                                          |
|        |       | * Exemplos de resolução de problemas por algoritmos    |
+--------+-------+--------------------------------------------------------+
| 2      | 20/08 | Introdução ao Pytuguês                                 |
|        |       |                                                        |
|        |       | * Instalação e comandos básicos                        |
|        |       | * Criando figuras geométricas                          |
|        |       | * Executando comandos e funções                        |
+--------+-------+--------------------------------------------------------+
|        | 21/08 | Estruturas de controle                                 |
|        |       |                                                        |
|        |       | * Repetições                                           |
|        |       | * Condicionais                                         |
+--------+-------+--------------------------------------------------------+
|        | 23/08 | Interação com o usuário                                |
|        |       |                                                        |
|        |       | * Entrada de dados                                     |
|        |       | * Criação de scripts                                   |
+--------+-------+--------------------------------------------------------+
| 3      | 27/08 | Listas                                                 |
|        |       |                                                        |
|        |       | * Acessando elementos da lista                         |
|        |       | * Iterando sobre listas                                |
|        |       | * Criando listas dinamicamente                         |
+--------+-------+--------------------------------------------------------+
|        | 28/08 | Dicionários                                            |
|        |       |                                                        |
|        |       | * Acessando elementos da lista                         |
|        |       | * Iterando sobre listas                                |
|        |       | * Criando listas dinamicamente                         |
+--------+-------+--------------------------------------------------------+
|        | 30/08 | Strings                                                |
|        |       |                                                        |
|        |       | * Manipulação de texto                                 |
|        |       | * Descobrindo informações sobre strings                |
|        |       | * Operações básicas                                    |
|        |       | * Interpolação                                         |
+--------+-------+--------------------------------------------------------+

.. todo
    +--------+-------+--------------------------------------------------------+
    | 4      | 30/08 | Análise sintática                                      |
    |        |       |                                                        |
    |        |       | * Gramática                                            |
    |        |       | * Especificação de regras gramaticais                  |
    |        |       | * Hierarquia de linguagens                             |
    |        |       | * Sintaxe vs semântica                                 |
    +--------+-------+--------------------------------------------------------+
    |        | 29/03 | Laboratório de análise sintática: Gerador de lero lero |
    |        |       |                                                        |
    |        |       | * Formalização de uma gramática                        |
    |        |       | * Produções válidas                                    |
    |        |       | * Gerador de textos aleatórios                         |
    +--------+-------+--------------------------------------------------------+
    | 5      | 03/04 | Gramáticas livres de contexto                          |
    |        |       |                                                        |
    |        |       | * Regras de produção                                   |
    |        |       | * Sintaxe do Ox                                        |
    |        |       | * Calculadora                                          |
    +--------+-------+--------------------------------------------------------+
    |        | 05/04 | Árvores sintáticas e representação de código           |
    |        |       |                                                        |
    |        |       | * S-expressions                                        |
    |        |       | * ADTs                                                 |
    |        |       | * Classes                                              |
    +--------+-------+--------------------------------------------------------+
    | 6      | 10/04 | Laboratório: Calculadora avançada                      |
    |        |       |                                                        |
    |        |       | * Operadores e expressões                              |
    |        |       | * Representação intermediária                          |
    |        |       | * Precedência                                          |
    |        |       | * Análise semântica                                    |
    +--------+-------+--------------------------------------------------------+
    |        | 12/04 | Emissão de código                                      |
    |        |       |                                                        |
    |        |       | * Representação intermediária                          |
    |        |       | * Geração de código                                    |
    |        |       | * Controle de formatação e indentação                  |
    |        |       | * Funções auxiliares para emissão de código no Ox      |
    +--------+-------+--------------------------------------------------------+
    | 7      | 17/04 | Gramática do Python                                    |
    |        |       |                                                        |
    |        |       | * Tokenizador                                          |
    |        |       | * Arquivo de gramática                                 |
    |        |       | * Árvore sintática de um código “vivo”                 |
    |        |       | * Gramática do Python no Ox                            |
    +--------+-------+--------------------------------------------------------+
    |        | 19/04 | Desenho de linguagens de programação                   |
    |        |       | * Expressões e declarações                             |
    |        |       | * Mutabilidade                                         |
    |        |       | * Escopo                                               |
    |        |       | * Sistema de tipos                                     |
    |        |       | * Estruturas de controle                               |
    +--------+-------+--------------------------------------------------------+
    | 8      | 24/04 | Projeto: Linguagem funcional                           |
    |        |       |                                                        |
    |        |       | * Sintaxe, semântica e sistema de tipos                |
    |        |       | * Integração com o Python                              |
    |        |       | * Estruturas de controle básicas                       |
    |        |       | * Recursos para programação funcional                  |
    |        |       | * Exemplos de programas                                |
    +--------+-------+--------------------------------------------------------+
    |        | 26/04 | **Avaliação: Lexer e parser**                          |
    |        |       |                                                        |
    +--------+-------+--------------------------------------------------------+
    | 9      | 01/05 | *Feriado - Dia do Trabalho*                            |
    |        |       |                                                        |
    +--------+-------+--------------------------------------------------------+
    |        | 03/05 | Autômatos                                              |
    |        |       |                                                        |
    |        |       | * Introdução a autômatos                               |
    |        |       | * Autômato determinístico finito                       |
    |        |       | * Autômatos para linguagens regulares                  |
    +--------+-------+--------------------------------------------------------+
    | 10     | 08/05 | Hierarquia de Chomsky                                  |
    |        |       |                                                        |
    |        |       | * Modelos de computação                                |
    |        |       | * Tipos de autômatos                                   |
    |        |       | * Hierarquia de linguagens formais                     |
    |        |       | * Máquina de Turing                                    |
    +--------+-------+--------------------------------------------------------+
    |        | 10/05 | Laboratório: JSON                                      |
    |        |       |                                                        |
    |        |       | * Gramática como autômato                              |
    |        |       | * Separação entre a análise léxica e sintática         |
    |        |       | * Implementação do JSON em Ox                          |
    +--------+-------+--------------------------------------------------------+
    | 11     | 17/05 | Cremilda: Lexer                                        |
    |        |       |                                                        |
    |        |       | * Tipos atômicos (numerais, strings, etc)              |
    |        |       | * Símbolos                                             |
    |        |       | * Operadores e delimitadores                           |
    +--------+-------+--------------------------------------------------------+
    |        | 19/05 | Cremilda: Expressões e declarações simples             |
    |        |       |                                                        |
    |        |       | * Chamada de função                                    |
    |        |       | * Tradução para Python                                 |
    |        |       | * Aninhamento                                          |
    |        |       | * Declarações                                          |
    +--------+-------+--------------------------------------------------------+
    | 12     | 22/05 | Cremilda: Estruturas condicionais simples              |
    |        |       |                                                        |
    |        |       | * Linguagem baseada em expressões                      |
    |        |       | * Palavras reservadas                                  |
    |        |       | * Operadores booleanos "curto-circuito"                |
    |        |       | * Condicional if/else                                  |
    +--------+-------+--------------------------------------------------------+
    |        | 24/05 | **Avaliação: gramáticas livres de contexto**           |
    |        |       |                                                        |
    +--------+-------+--------------------------------------------------------+
    | 13     | 29/05 | Checagem de tipos                                      |
    |        |       |                                                        |
    |        |       | * Sistemas de tipos                                    |
    |        |       | * Coerções                                             |
    |        |       | * Polimorfismo                                         |
    |        |       | * Type dispatch                                        |
    +--------+-------+--------------------------------------------------------+
    |        | 31/05 | *Feriado - Corpus Christi*                             |
    |        |       |                                                        |
    +--------+-------+--------------------------------------------------------+
    | 14     | 05/06 | Cremilda: declaração de tipos                          |
    |        |       |                                                        |
    |        |       | * Aliases                                              |
    |        |       | * Union types                                          |
    |        |       | * Tuplas                                               |
    +--------+-------+--------------------------------------------------------+
    |        | 07/06 | Cremilda: Criação de tipos dinâmica                    |
    |        |       |                                                        |
    |        |       | * Classes dinâmicas                                    |
    |        |       | * Dicionário de tipos                                  |
    |        |       | * Tipos na biblioteca Sidekick                         |
    +--------+-------+--------------------------------------------------------+
    | 15     | 12/06 | Cremilda: declaração de módulos                        |
    |        |       |                                                        |
    |        |       | * Símbolos públicos                                    |
    |        |       | * Imports                                              |
    |        |       | * Integração com o Python                              |
    +--------+-------+--------------------------------------------------------+
    |        | 14/06 | Cremilda: runtime                                      |
    |        |       |                                                        |
    |        |       | * Tipos e funções nativas                              |
    |        |       | * Módulos padrão                                       |
    |        |       | * Compilação para Python                               |
    +--------+-------+--------------------------------------------------------+
    | 16     | 19/06 | Máquinas virtuais                                      |
    |        |       |                                                        |
    |        |       | * Objetivos de compilação                              |
    |        |       | * Máquina virtual Python                               |
    |        |       | * Leitura de Bytcodes                                  |
    |        |       | * Manipulação de Bytcodes                              |
    +--------+-------+--------------------------------------------------------+
    |        | 21/06 | Cremilda: blocos let                                   |
    |        |       |                                                        |
    |        |       | * Atribuição de variáveis                              |
    |        |       | * Controle de escopo                                   |
    |        |       | * Forma SSA                                            |
    |        |       | * Descontrutores                                       |
    +--------+-------+--------------------------------------------------------+
    | 17     | 26/06 | Cremilda: blocos case                                  |
    |        |       |                                                        |
    |        |       | * Despacho por tipo e sub-tipo                         |
    |        |       | * Switch/case                                          |
    |        |       | * Desconstrutores                                      |
    +--------+-------+--------------------------------------------------------+
    |        | 28/06 | **Avaliação Final**                                    |
    |        |       |                                                        |
    +--------+-------+--------------------------------------------------------+
    | 18     | 03/07 | Livre                                                  |
    |        |       |                                                        |
    +--------+-------+--------------------------------------------------------+
    |        | 05/07 | Revisão de nota                                        |
    |        |       |                                                        |
    +--------+-------+--------------------------------------------------------+

Obs.: O cronograma está sujeito a alterações.
