#include <stdio.h>

int main() {
    int h_inicial, m_inicial, h_final, m_final;
    int inicio_total, fim_total, duracao_total;
    int h_duracao, m_duracao;

   
    if (scanf("%d %d %d %d", &h_inicial, &m_inicial, &h_final, &m_final) != 4) {
        return 0;
    }

    
    inicio_total = h_inicial * 60 + m_inicial;
    fim_total = h_final * 60 + m_final;

    
    duracao_total = fim_total - inicio_total;

   
    if (duracao_total <= 0) {
        duracao_total += 24 * 60;
    }

    
    h_duracao = duracao_total / 60;
    m_duracao = duracao_total % 60;

    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h_duracao, m_duracao);

    return 0;
}
