# 🚢 Batalha Naval em C

## 📌 Descrição do Projeto
Este projeto implementa um **tabuleiro de Batalha Naval** utilizando a linguagem **C**, com funcionalidades que permitem:
- Inicializar um tabuleiro 10x10.
- Posicionar **quatro navios** (horizontais, verticais e diagonais).
- Aplicar **habilidades especiais** (cone, cruz e octaedro) que afetam áreas do tabuleiro.
- Exibir o tabuleiro final com navios e áreas de habilidades sobrepostas.

## 🔧 Funcionalidades
### 🛳️ Posicionamento de Navios
- **Navio Horizontal**
- **Navio Vertical**
- **Navio Diagonal ↘**
- **Navio Diagonal ↙**

### 🎯 Habilidades Especiais
- **Cone:** Forma triangular expandindo-se para baixo.
- **Cruz:** Impacta a linha e a coluna do ponto de origem.
- **Octaedro:** Forma um losango em torno do ponto central.

## 📜 Estrutura do Código
O código foi modularizado utilizando funções para:
- `inicializarTabuleiro()`: Inicializa o tabuleiro com água (`0`).
- `posicionarNavio()`: Posiciona os navios conforme suas direções.
- `aplicarHabilidade()`: Aplica habilidades ao tabuleiro.
- `exibirTabuleiro()`: Exibe o tabuleiro no console.

## 🖥️ Como Executar o Código
1. **Clone o repositório**:
   ```bash
   git clone https://github.com/higorldmoreira/Desafio_Batalha_Naval.git
   ```
2. **Compile o código**:
   ```bash
   gcc desafio_batalha_naval.c -o batalha_naval
   ```
3. **Execute o programa**:
   ```bash
   ./main
   ```

## 📌 Exemplo de Saída
```
Tabuleiro de Batalha Naval com Habilidades:
0  0  0  3  3  3  0  0  0  0  
0  3  0  0  0  0  0  3  0  0  
0  0  3  0  0  0  0  0  3  0  
5  5  5  5  5  5  0  0  0  0  
0  0  0  0  5  0  0  0  0  0  
0  0  0  0  5  3  0  5  0  0  
0  0  0  0  5  3  0  5  5  0  
0  0  0  0  0  3  0  0  0  0  
0  0  0  0  0  0  0  0  0  0  
0  0  0  0  0  0  0  0  0  0  
```

## 📄 Licença
Este projeto está sob a licença MIT. Sinta-se livre para usá-lo e modificá-lo conforme necessário!

---
💡 **Desenvolvido por Higor Moreira** | 🚀 Ciência da Computação

