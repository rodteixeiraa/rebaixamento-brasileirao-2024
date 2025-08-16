# rebaixamento-brasileirao-2024

## 📊 Simulação de Probabilidades de Rebaixamento - Brasileirão 2024

Este projeto, desenvolvido em C, implementa uma simulação de Monte Carlo para estimar as chances de rebaixamento dos clubes do Campeonato Brasileiro 2024 na última rodada.

As probabilidades de vitória, empate e derrota foram extraídas das odds fornecidas pela Bet365 no período. Essas odds foram transformadas em probabilidades implícitas, que serviram de base para a simulação.



## 🔎 Contexto

Na última rodada do Brasileirão 2024, diversos clubes ainda corriam risco de rebaixamento. As casas de apostas (como a Bet365) atribuíam odds diferentes a cada resultado possível (vitória, empate, derrota).

Essas odds foram usadas para construir probabilidades aproximadas de cada evento. A partir disso, o programa simula milhares de vezes a rodada final, contabilizando quantas vezes cada clube seria rebaixado.

Assim, temos uma estimativa estatística das chances de queda de cada time, respeitando a incerteza natural do futebol.



## ⚙️ Tecnologias utilizadas

- Linguagem C (C99+)

- Compilador GCC (ou equivalente)

- Bibliotecas padrão: stdio.h, stdlib.h, time.h



## 📊 Como funciona a simulação

Para cada time, as odds da Bet365 foram convertidas em probabilidades de vitória, empate e derrota.

A cada simulação, o programa gera números aleatórios entre 0 e 1.

Esses números são comparados com as probabilidades para decidir o resultado do jogo.

O processo é repetido 10.000 vezes, armazenando em quantas dessas repetições cada time foi rebaixado.

No final, é calculada a chance percentual de rebaixamento.



## 📌 Observações

- Este projeto não possui vínculo com a Bet365 nem com sites de apostas.

- Foi desenvolvido como exercício acadêmico e de programação em C.

- Os dados refletem a situação da última rodada do Brasileirão 2024, e não representam cenários atuais.

  
