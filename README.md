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
Incidente no reino..

Após um ataque de dragão na capital do reino sobre grandes gritos de raiva do dragão, foi descoberto que ele foi triado e causando a destruição da capital e morte de muitos civis.

O capitão da guarda foi comandado a resolver o caso do dragão que mantinha uma relação com o reino de comum acordo que em ele não seria atacado e que ele também não ataria o reino, após uma busca próxima a caverna do dragão foi encontrado uma serie de pegadas e marcas de carroça que remetem a carroças de nobres, além disso, marcas de caixas espalhadas pelo local.

### Tela inicial
<img src = "https://github.com/eriklemy/Detetive/blob/main/screenshots/startscreen.png">

### Tela de opções
<img src = "https://github.com/eriklemy/Detetive/blob/main/screenshots/pathScreen.png">

<img src = "https://github.com/eriklemy/Detetive/blob/main/screenshots/randomscreen.png">

