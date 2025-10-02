#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#define MAX_FILMES 10
#define MAX_TITULO 50

int main() {
    SetConsoleOutputCP(CP_UTF8);
    // setlocale(LC_ALL, "Portuguese");
    printf("=======================================\n");
    printf("             CineTron v1.0\n");
    printf("   Relátorio de Vendas de Ingressos\n");
    printf("=======================================\n\n");

    char titulos[MAX_FILMES][MAX_TITULO]; 
    int vendas[MAX_FILMES];
    int num_filmes;

    printf("Quantos filmes deseja analisar este mês? (Max: %d): ", MAX_FILMES);
    scanf("%d", &num_filmes);

    if (num_filmes > MAX_FILMES || num_filmes <= 0) {
        printf("Número inválido! O programa será encerrado.\n");
        return 1;
    }

    printf("\n--- Insira os dados dos filmes ---\n");
    for (int i = 0; i < num_filmes; i++) {
        while (getchar() != '\n');
        printf("Digite o título do filme %d: ", i + 1);
        scanf("%49[^\n]", titulos[i]);
        printf("Digite o número de ingressos vendidos para \"%s\": ", titulos[i]);
        scanf("%d", &vendas[i]);
    }

    int maior_venda = vendas[0];
    int menor_venda = vendas[0];
    int indice_maior = 0;
    int indice_menor = 0;

    for (int i = 1; i < num_filmes; i++) {
        if (vendas[i] > maior_venda) {
            maior_venda = vendas[i];
            indice_maior = i;
        }
        if (vendas[i] < menor_venda) {
            menor_venda = vendas[i];
            indice_menor = i;
        }
    }

    system("cls");

    printf("=======================================\n");
    printf("      RELATORIO FINAL DE VENDAS\n");
    printf("=======================================\n\n");
    
    printf("Resumo do mês:\n");
    for(int i = 0; i < num_filmes; i++) {
        printf("- Filme: %-30s | Ingressos: %d\n", titulos[i], vendas[i]);
    }
    
    printf("\n--- DESTAQUES ---\n");
    printf("Filme MAIS assistido: \"%s\" com %d ingressos.\n", titulos[indice_maior], maior_venda);
    printf("Filme MENOS assistido: \"%s\" com %d ingressos.\n", titulos[indice_menor], menor_venda);

    printf("\n--- GRÁFICO DE VENDAS ---\n");
    
    int escala = 500; 
    
    printf("(Cada '#' representa aproximadamente %d ingressos)\n\n", escala);

    for (int i = 0; i < num_filmes; i++) {
        printf("%-20.20s | ", titulos[i]); 
        
        if (i == indice_maior) {
            printf(ANSI_COLOR_BLUE);
        } else if (i == indice_menor) {
            printf(ANSI_COLOR_RED);
        } else {
            printf(ANSI_COLOR_GREEN);
        }
        
        int num_blocos = vendas[i] / escala;
        
        for (int j = 0; j < num_blocos; j++) {
            printf("#"); 
        }
        
        printf(ANSI_COLOR_RESET); 
        
        printf(" (%d)\n", vendas[i]);
    }

    printf("\n=======================================\n");

    return 0;
}