# Detetive
Este repositório contém o trabalho prático 2 de programação, desenvolvidos durante o primeiro semestre de 2022:

- trabalho pratico 2: Detetive 
    - O trabalho foi desenvolvido em C++ com uso do framework Qt para criação de interface grafica

O  objetivo desse trabalho é desenvolver um jogo de detetive no qual você vai utilizar regras de inferência para deduzir a conclusão. 

## Compilação e Execução
- Necessario GCC instalado ou framework de terceiros como MSVS, MinGW
### Melhor metodo para execução
- Instalar Qt - [Baixar instalador aqui](https://www.qt.io/download-open-source?hsCtaTracking=9f6a2170-a938-42df-a8e2-a9f0b1d6cdce%7C6cb0de4f-9bb5-4778-ab02-bfb62735f3e5)
Apos download do instalador, inicia-lo e: 
<pre>
    1. Criar conta no Qt
    2. Escolher o path de instalação
    3. Fazer download da versão para aplicativos de computador 
</pre>
Com o Qt instalado:
<pre>
    1. Clonar este repositorio e extrai-lo (se necessario)
    2. Alterar de "Detetiva-main" para "Detetive"
    3. Abrir Qt Creator 7.0.2 (community)
    4. Ir em Tools > Options > Debug & Run > Alterar o Diretorio para "Current Directory" e dar APPLY
    5. Ir em "Open File or Project" procurar a pasta "Detetive" e selecionar o arquivo "CMakeList.txt"
    6. Buildar e Rodar
</pre>

__Obs__: Caso de erro no build final, seguir a instrução do Qt e selecionar o compilador que for recomendado para instanciar como um novo projeto.

### RESUMO DA HISTORIA
---
O Grande Incidente 

O dragão com uma de suas obras roubadas, inicia um ataque a capital do reino com gritos de raiva ordena, que o que é seu por direito seja devolvido e teriam até o pôr do sol para que o entreguem.

>! Após o ataque o capitão ordenado pelo rei para descobrir o culpado e recebe a dica que o dragão tendo doença por obras de arte, em suas buscas descobriu que um historiador localizou uma obra de arte rara que estava com o dragão e que falou com o bardo que roubou do dragão, o bardo sendo capturado e a obra recuperada, é entregue ao dragão evitando um massacre na capital.


### Tela inicial
<img src = "https://github.com/eriklemy/Detetive/blob/main/screenshots/startscreen.png">

### Tela de opções
<img src = "https://github.com/eriklemy/Detetive/blob/main/screenshots/pathScreen.png">

<img src = "https://github.com/eriklemy/Detetive/blob/main/screenshots/randomscreen.png">

