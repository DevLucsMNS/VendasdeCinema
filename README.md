# CinemaTrack - Relatório de Vendas de Cinema

![Linguagem](https://img.shields.io/badge/Linguagem-C-blue.svg)
![Licença](https://img.shields.io/badge/Licença-MIT-green.svg)

## 📖 Sobre o Projeto

**CineTron** é um programa de console desenvolvido em Linguagem C como parte de uma atividade acadêmica para o curso de **Análise e Desenvolvimento de Sistemas**. O objetivo principal do projeto é aplicar conceitos fundamentais de programação, como o uso de vetores, laços de repetição e estruturas de decisão para manipular um conjunto de dados do mundo real.

O programa simula um sistema de relatório de bilheteria, onde o usuário pode inserir dados de vendas de ingressos para diversos filmes e, ao final, receber um relatório consolidado com os destaques do mês e uma representação visual das vendas.

---

## ✨ Funcionalidades

* **Entrada de Dados Dinâmica:** O usuário pode especificar quantos filmes deseja analisar.
* **Armazenamento em Vetores:** Os títulos dos filmes e a quantidade de ingressos vendidos são armazenados em vetores paralelos.
* **Análise de Dados:** O programa calcula e identifica automaticamente o filme com o **maior** e o **menor** número de vendas.
* **Relatório Completo:** Exibe uma lista com todos os filmes e suas respectivas vendas, além dos destaques.
* **Gráfico de Barras Visual:** Apresenta um gráfico de barras colorido diretamente no terminal, representando visualmente a popularidade de cada filme.
    * Barra **azul** para o filme mais vendido.
    * Barra **vermelha** para o filme menos vendido.
    * Barra **verde** para os demais filmes.
* **Compatibilidade com Acentuação:** O código foi ajustado para exibir corretamente acentos e caracteres especiais no console do Windows.

---

## 💻 Tecnologias Utilizadas

* **Linguagem C**
* **Compilador GCC (MinGW)** para compilação em ambiente Windows.
* **API do Windows (`windows.h`)** para manipulação da codificação de caracteres do console.

---

## 🚀 Como Executar o Projeto

Para compilar e executar este projeto em seu ambiente local, siga os passos abaixo.

### Pré-requisitos

* Você precisa ter um compilador C instalado e configurado no seu sistema, como o **GCC** (geralmente instalado com o MinGW no Windows).

### Passo a Passo

1.  **Clone o repositório** (ou baixe os arquivos):
    ```bash
    git clone [https://github.com/seu-usuario/nome-do-repositorio.git](https://github.com/seu-usuario/nome-do-repositorio.git)
    ```

2.  **Navegue até a pasta do projeto** pelo terminal:
    ```bash
    cd nome-do-repositorio
    ```

3.  **Compile o código-fonte:**
    ```bash
    gcc main.c -o CinemaTrack.exe
    ```
    *(Este comando compila o arquivo `main.c` и gera um executável chamado `CinemaTrack.exe`)*

4.  **Execute o programa:**
    ```bash
    .\CinemaTrack.exe
    ```

---

## 📸 Demonstração

![Print Terminal](<img width="1597" height="313" alt="Print Terminal (Venda de cinema)" src="https://github.com/user-attachments/assets/579bb311-0e6e-4eee-9f96-379a56f5e8fa" />
\)

---

## 🧠 Desafios e Aprendizados

O principal desafio técnico durante o desenvolvimento foi garantir a exibição correta de cores (via códigos de escape ANSI) e caracteres acentuados (`ç`, `ã`, `ê`, etc.) no console do Windows.

A solução envolveu uma jornada de aprendizado sobre **codificação de caracteres**, passando pela insuficiência da função `setlocale` e chegando à necessidade de usar a API do Windows com a função `SetConsoleOutputCP(CP_UTF8)`. Este desafio reforçou a importância de entender não apenas a linguagem de programação, mas também o ambiente em que o software é executado.

---

## 📝 Licença

Este projeto está sob a licença MIT. Veja o arquivo [LICENSE](LICENSE) para mais detalhes.
