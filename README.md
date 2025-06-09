# Trabalho de Computação Quântica: Algoritmo de Shor

Este repositório reúne as implementações e experimentos realizados no escopo do trabalho de computação quântica sobre o **Algoritmo de Shor**, com um estudo comparativo extra utilizando o **Algoritmo de Grover** para problemas de busca não estruturada.
Integrantes:
Luana Vieira de Alcantara Garcia
Marcos Henrique Yukio Suguita
Rafael Vargas Carvalheira
Ruan Pablo Rodrigues 

---

## 📂 Estrutura do Repositório

- **`Codigo_classico.c`**  
  Programa em C que implementa a busca clássica em dados desordenados (caso clássico), usado como referência de desempenho.

- **`codigoIBM.ipynb`**  
  Notebook Jupyter com a implementação do **Algoritmo de Shor** rodado no hardware da IBM Quantum. Inclui:  
  - Configuração do token IBM Quantum  
  - Preparação do circuito quântico de fatoração  
  - Coleta e análise dos resultados do experimento real

- **`grover_3_e_4.ipynb`**  
  Notebook Jupyter com a implementação do **Algoritmo de Grover** em simulador quântico. Contém:  
  - Cenários de 3 e 4 qubits  
  - Extrapolação do problema até o ponto em que o simulador falha  
  - Comparação dos tempos e taxas de sucesso

---

## 🚀 Pré-requisitos

- **Git**  
- **C Compiler** (gcc, clang ou similar)  
- **Python 3.8+**  
- **Qiskit ≥ 1.0**  
- **Qiskit IBM Runtime** (`qiskit_ibm_runtime`)  
- **Dependências Python**:  
  ```bash
  pip install qiskit qiskit_ibm_runtime matplotlib numpy
  ```  
- **Jupyter Notebook / JupyterLab** (ou Google Colab)

---

## 🛠️ Instalação e Execução

1. **Clone o repositório**  
   ```bash
   git clone https://github.com/SeuUsuario/seu-repositorio.git
   cd seu-repositorio
   ```

2. **Compile e execute o código clássico**  
   ```bash
   gcc -o busca Codigo_classico.c
   ./busca
   ```

3. **Abra e rode os notebooks**  
   - Para o **Shor**:  
     ```bash
     jupyter lab codigoIBM.ipynb
     ```  
     Configure seu API token da IBM Quantum conforme instruções no início do notebook.

   - Para o **Grover**:  
     ```bash
     jupyter lab grover_3_e_4.ipynb
     ```  
     Execute célula a célula e acompanhe a extrapolação até a falha do simulador.

---

## 📊 Resultados Esperados

- **Busca Clássica**  
  Crescimento de tempo linear em função do tamanho do dataset.

- **Shor (IBM Quantum)**  
  Demonstração prática de fatoração de pequenos inteiros; análise de ruído e fidelidade.

- **Grover (Simulador)**  
  Aceleração quadrática sobre o método clássico; identificação do limite de escala suportado pelo simulador.

---

## 🤝 Contribuições

Contribuições, sugestões de melhoria e correções são muito bem-vindas!  
1. Abra uma _issue_ descrevendo sua proposta.  
2. Faça um _fork_ e submeta um _pull request_ com suas alterações.

---

## 📄 Licença

Este projeto está licenciado sob a **MIT License**. Veja o arquivo [LICENSE](LICENSE) para detalhes.

---

## 📬 Contato

Rafael Carvalheira  
✉️ carvalheira.vargas@ime.eb.br
🔗 https://github.com/RafaelCarvalheira/ICQ
