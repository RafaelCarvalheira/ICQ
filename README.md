# Trabalho de Computação Quântica: Algoritmo de Grover

Este repositório reúne as implementações e resultados obtidos no desenvolvimento do **Algoritmo de Grover** para busca de elementos em listas não ordenadas, comparando abordagens clássica e quântica em hardware real da IBM e em simulador.

---

## 👥 Integrantes

- **Luana Vieira de Alcântara Garcia**
- **Marcos Henrique Yukio Suguita**
- **Rafael Vargas Carvalheira**
- **Ruan Pablo Rodrigues**

---
## 🎓 Professores

- **Cel. Anderson Fernandes Pereira dos Santos**  
- **Cap. Oscar Martins Wanderley Filho**

---

## 📂 Estrutura do Repositório

- **`Codigo_classico.c`**  
  Implementação em C da busca clássica em dados desordenados, servindo como referência de desempenho.

- **`codigoIBM.ipynb`**  
  Notebook Jupyter com a execução do **Algoritmo de Grover** em hardware quântico da IBM. Inclui:
  - Configuração do token IBM Quantum
  - Construção do circuito quântico de busca
  - Coleta e análise dos resultados obtidos no hardware real

- **`grover_3_e_4.ipynb`**  
  Notebook Jupyter com a implementação do **Algoritmo de Grover** em simulador quântico. Contém:
  - Cenários de 3 e 4 qubits
  - Extrapolação até o ponto de falha do simulador
  - Comparação de tempos de execução e taxas de acerto

---

## 🚀 Pré-requisitos

- **Git**
- **Compilador C** (GCC, Clang ou similar)
- **Python 3.8+**
- **Qiskit ≥ 1.0**
- **Qiskit IBM Runtime** (`qiskit_ibm_runtime`)
- **Dependências Python**:
  ```bash
  pip install qiskit qiskit_ibm_runtime matplotlib numpy
  ```
- **Jupyter Notebook** ou **JupyterLab** (ou Google Colab)

---

## 🛠️ Instalação e Execução

1. Clone o repositório:
   ```bash
   git clone https://github.com/RafaelCarvalheira/ICQ.git
   cd ICQ
   ```

2. Compile e execute o código clássico:
   ```bash
   gcc -o busca Codigo_classico.c
   ./busca
   ```

3. Execute os notebooks:
   - **Grover (IBM Quantum)**:
     ```bash
     jupyter lab codigoIBM.ipynb
     ```
     Siga as instruções no notebook para configurar seu token IBM Quantum.

   - **Grover (Simulador)**:
     ```bash
     jupyter lab grover_3_e_4.ipynb
     ```
     Execute célula a célula e observe a extrapolação até a falha do simulador.

---

## 📊 Resultados Esperados

- **Busca Clássica**: tempo de execução linear em função do tamanho da lista.
- **Grover (IBM Quantum)**: aceleração quântica demonstrada no hardware real, com análise de fidelidade.
- **Grover (Simulador)**: aceleração quadrática versus o método clássico e levantamento do limite de escala do simulador.

---

## 🤝 Contribuições

Contribuições são bem-vindas! Abra uma _issue_ ou envie um _pull request_ com sugestões.

---

## 📬 Contato

Rafael Carvalheira  
✉️ carvalheira.vargas@ime.eb.br  
🔗 https://github.com/RafaelCarvalheira/ICQ
