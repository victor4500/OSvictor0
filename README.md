 🖥️ OSvictor
 
> Um sistema operacional construído do zero — por Victor, para aprender como computadores realmente funcionam por dentro.
 
## 🎯 Motivação
 
Este projeto nasceu de uma curiosidade simples: *como um sistema operacional funciona de verdade?*
 
A ideia não é apenas usar ferramentas prontas — é entender o que acontece embaixo de tudo. Desde o momento em que o computador liga, até como a memória é gerenciada, como processos rodam, como o teclado comunica com o kernel.
 
Esse conhecimento é a base para quem quer seguir carreira em **cibersegurança** — porque pra proteger um sistema, ou entender como ele é atacado, você precisa saber exatamente como ele funciona por dentro. Saber quebrar e consertar começa aqui.
 
---
 
## 🛠️ Ferramentas
 
| Ferramenta | Uso |
|---|---|
| **C** | Linguagem principal do kernel |
| **Assembly (NASM)** | Bootloader e instruções de baixo nível |
| **GCC** | Compilador C |
| **QEMU** | Emulador — roda o SO sem risco ao sistema real |
| **Make** | Automação de compilação |
| **Ubuntu** | Ambiente de desenvolvimento |
 
---
 
## 📚 O que vou aprender
 
O projeto é dividido em módulos — cada um representa uma etapa real do desenvolvimento de um SO.
 
- **Fundamentos de C** — linguagem base do kernel: memória, ponteiros, funções, structs
- **Assembly** — instruções de baixo nível, comunicação direta com o hardware
- **Bootloader** — o primeiro código que roda quando o computador liga
- **Kernel** — o coração do SO, responsável por gerenciar tudo
- **Gerenciamento de memória** — como o SO organiza e distribui memória entre programas
- **Interrupções e drivers** — como o hardware se comunica com o kernel
- **Sistema de arquivos** — como o SO organiza e lê arquivos no disco
- **Processos e multitarefa** — como o SO roda vários programas ao mesmo tempo
---
 
## 🖥️ Apps nativos planejados
 
- [ ] Shell — linha de comando nativa
- [ ] Editor de texto nativo
- [ ] Gerenciador de memória
- [ ] Configurações de rede
- [ ] Navegador nativo
- [ ] Linguagem de script própria para o shell
---
 
## 🔐 Conexão com Cibersegurança
 
Entender SOs por dentro é fundamental para cibersegurança. Este projeto cobre diretamente:
 
- **Como exploits funcionam** — buffer overflow, escalada de privilégios
- **Como malwares interagem com o kernel** — rootkits, hooks de sistema
- **Como sistemas são protegidos** — DEP, ASLR, proteção de memória
- **Engenharia reversa** — entender Assembly e código de máquina
- **Análise de vulnerabilidades** — saber o que pode quebrar e por quê
---
 
> *"Pra proteger um sistema, primeiro você precisa entender como ele quebra."*
 