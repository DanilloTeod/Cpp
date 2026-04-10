# 📘 Guia Definitivo: Git & GitHub

Este guia reúne os comandos essenciais, configurações de segurança e o fluxo de trabalho para versionamento de código.

---

## 1. Configuração Inicial do Ambiente
*Execute estes comandos apenas uma vez ao instalar o Git ou configurar um novo computador.*

```bash
# Definir usuário e e-mail (global para o PC)
git config --global user.name "Danillo Teodoro"
git config --global user.email "SEU_EMAIL_AQUI"

# Verificar se as configurações foram salvas corretamente
git config --list

Configuração de Chave SSH

# https://docs.github.com/en/authentication/connecting-to-github-with-ssh/generating-a-new-ssh-key-and-adding-it-to-the-ssh-agent
ssh-keygen -t ed25519 -C "seu-email@exemplo.com"

Entre na pasta onde a chave foi gerada (geralmente ~/.ssh/).
Abra o arquivo id_ed25519.pub com o bloco de notas e copie todo o conteúdo.
No GitHub, vá em Settings > SSH and GPG Keys > New SSH Key e cole o conteúdo.


Testar conexão
ssh -T git@github.com


2. Salvando a Primeira Versão (Projeto Novo)

git init                            # Inicia o rastreamento do Git na pasta
git add .                           # Envia arquivos para a área de preparação (STAGE)
git status                          # Verifica o estado atual do STAGE
git commit -m "Mensagem explicativa" # Salva a versão com um histórico
git branch -M main                  # Garante que a branch principal se chama main

# Conectar a pasta local ao repositório remoto (SSH)
git remote add origin git@github.com:seu-usuario/seu-repositorio.git

git push -u origin main             # Envia os dados e vincula as branches


3. Trabalhando em Projetos Existentes

git clone URL_COPIADA
cd nome-do-repositorio
git pull origin main             # Baixa e aplica as mudanças da nuvem no seu PC


4. O Dia a Dia: Branches e Colaboração

git branch                          # Mostra em qual branch você está
git checkout -b nome-da-branch      # Cria e entra em uma nova branch
git checkout main                   # Volta para a branch principal

# Unir alterações (Merge)
# Primeiro, volte para a main, depois puxe as alterações da sua branch:
git checkout main
git merge nome-da-branch

5. Inspeção e Organização

git log: Exibe o histórico de todos os commits.
git diff: Mostra as diferenças entre o arquivo atual e o último commit. (Aperte q para sair).
git fetch: Baixa as novidades do servidor para o histórico, mas não altera seus arquivos (seguro para revisar).


Arquivo .gitignore

Crie um arquivo chamado .gitignore na raiz do projeto para listar arquivos que não devem subir para a nuvem:

.env                # Senhas e chaves de API
node_modules/       # Pastas de dependências pesadas
*.log               # Arquivos de log do sistema


6. Comandos de Emergência (Correções)


git restore nome-arquivo: Descarta as mudanças atuais e volta para a última versão salva.

git reset: Tira os arquivos da área de stage (desfaz o git add .).

git commit --amend -m "Nova mensagem": Altera a mensagem do último commit feito.

