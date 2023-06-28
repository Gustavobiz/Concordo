# projeto 3 
Gustavo Sousa Bernardes 

# Concordo
Nessa projeto você criará um sistema chamado "Concordo" com recursos similares ao Discord, porém vai funcionar somente em modo texto e sem recursos de rede.

# Modo de execução
Vou mandar o arquivo teste separadamente, e ele deve ser colocado na pasta build logo após você seguir os abaixo. 

mkdir build
cd build
cmake ..
make

Caso queira fazer manualmente 

./concordo          

Caso queira executar com os testes desnvolvidos por mim

./concordo < teste.txt

# Comandos
A1.1 Sair do sistema : comando quit
A1.2 Criar usuário : comando create-user <email> <senha_sem_espaços> <nome com espaços>
A1.3 Entrar no sistema : login <email> <senha>

A2.1 - Desconectar do Concorda : comando disconnect
A2.2 - Criar servidores : comando create-server <nome>
A2.3 - Mudar a descrição do servidor : comando set-server-desc <nome> "<descrição>"
A2.4 - Setar código de convite para o servidor : comando set-server-invitecode <nome> <codigo>
A2.5 - Listar servidores : comando list-servers
A2.6 - Remover servidor : comando remove-server <nome>
A2.7 - Entrar em um servidor : comando enter-server <nome>
A2.8 - Sair de um servidor: comando leave-server
A2.9 - Listar pessoas no servidor: comando list-participants

# Teste dos comandos 

# A1.2 Sair do sistema :
Execução do comando no fim do teste:
quit

Saída:
Saindo do Concordo

# A1.2 Criar usuário :
criando usuarios e com o segundo usuario com email repetido

create-user joao@gmail.com senha123 João Silva
create-user joao@gmail.com senha123 João Silva
create-user maria@hotmail.com segredo456 Maria Souza
create-user pedro@yahoo.com.br 12345678 Pedro Santos
create-user julio.melo@imd.ufrn.br 12ab34cd Julio Melo
create-user ana@outlook.com.br minhaSenha Ana Oliveira
create-user carlos@uol.com.br 9876Carlos Carlos Ferreira

Saída:

Usuário criado com sucesso!
Erro: O email já está em uso!
Usuário criado com sucesso!
Usuário criado com sucesso!
Usuário criado com sucesso!
Usuário criado com sucesso!
Usuário criado com sucesso!

# A1.3 Login :
Tentando logar com email falso e logo em seguida logando com um verdadeiro.

login falso@falso.br 12ab34cd
login julio.melo@imd.ufrn.br 12ab34cd
login pedro@yahoo.com.br 12345678 Pedro Santos

Saída:

Senha ou usuário inválidos!
Logado como julio.melo@imd.ufrn.br
Voce já está logado em uma conta!

# A2.1 - Desconectar :
Desconectantando, e depois tentando desconectar sem estar logado.
disconnect
disconnect

Saída:
Desconectando usuário julio.melo@imd.ufrn.br
Não está conectado

# A2.2 - Criar servidores :
Criando server com o usuario logado Julio, tentando criar server sem estar conectado e depois criando server com a usuario maria.

login julio.melo@imd.ufrn.br 12ab34cd
create-server minha-casa
disconnect
disconnect
create-server minha-casa2
login maria@hotmail.com segredo456
create-server minha-casa2

Saída:

Logado como julio.melo@imd.ufrn.br
Servidor criado
Desconectando usuário julio.melo@imd.ufrn.br
Não está conectado
Código inesistente ou você não tem permissão para realizar comando
Logado como maria@hotmail.com
Servidor criado

# A2.3 - Mudar a descrição do servidor :
Desconectando de mairia e loga com julio, que vai tentar criar server com um nome já existente, depois vai mudar
a descrição de um sever que ele é o dono, segido da descrição de um server que não existe e logo em seguida de um
um server que não é dele.

disconnect
login julio.melo@imd.ufrn.br 12ab34cd
create-server minha-casa
set-server-desc minha-casa “Este servidor serve como minha casa, sempre estarei nele”
set-server-desc nao-existe “Este servidor serve como minha casa, sempre estarei nele”
set-server-desc minha-casa2 “Este servidor serve como minha casa, sempre estarei nele”

Saída:

Desconectando usuário maria@hotmail.com
Logado como julio.melo@imd.ufrn.br
Servidor com esse nome já existe
Descrição do servidor 'minha-casa' modificada!
Servidor 'nao-existe' não existe
Você não pode alterar a descrição de um servidor que não foi criado por você

# A2.4 - Setar código :

Usuario Julio muda código de um servidor dele, seguido de um servido que não exite, depois de um serividor que não é seu, remove o codigo do seu servidor e por fim add novamente .

set-server-invite-code minha-casa oiii
set-server-invite-code nao-existe oiii
set-server-invite-code minha-casa2 4567
set-server-invite-code minha-casa 
set-server-invite-code minha-casa oiii

Saída:

Código de convite do servidor 'minha-casa' modificada!
Servidor não foi encontrado
Você não pode alterar a covite de um servidor que não foi criado por você
Código de convite do servidor 'minha-casa'  removido!
Código de convite do servidor 'minha-casa' modificada!

# A2.5 - Listar servidores :
O comando é usado e lista os existentes, depois são criados varios servidores com usuarios existentes e logo em seguida exibidos

list-servers
disconnect
login joao@gmail.com senha123
create-server juliaofest
disconnect
login pedro@yahoo.com.br 12345678
create-server pedrofest
disconnect
login ana@outlook.com.br minhaSenha
create-server anafest
disconnect
login carlos@uol.com.br 9876Carlos
create-server cacafest
list-servers 

Saída:

minha-casa
minha-casa2
Desconectando usuário julio.melo@imd.ufrn.br
Logado como joao@gmail.com
Servidor criado
Desconectando usuário joao@gmail.com
Logado como pedro@yahoo.com.br
Servidor criado
Desconectando usuário pedro@yahoo.com.br
Logado como ana@outlook.com.br
Servidor criado
Desconectando usuário ana@outlook.com.br
Logado como carlos@uol.com.br
Servidor criado
minha-casa
minha-casa2
juliaofest
pedrofest
anafest
cacafest

# A2.5 - Remover servidores :
O usuario logado remove um servidor que ele é dono, tenta apagar um servidor que não é dele e depois tenta apagar um servidor que não existe, ao final a lista é exibida e o servidor
apagado não está mais lá. 

remove-server cacafest
remove-server minha-casa2
remove-server balacobaco
list-servers

Saída:

Servidor 'cacafest' removido!
Você não é o dono do servidor 'minha-casa2'
Servidor 'balacobaco' não encontrado
minha-casa
minha-casa2
juliaofest
pedrofest
anafest

# A2.7  - Entrar em um servidor :
O usuario logado tenta entrar em um servidor sem o codigo e fracassa, colocou o código corretamente e consegue, tenta entrar em um que não existe, e por fim entra em um server que não tem código.

enter-server minha-casa
enter-server minha-casa oiii
enter-server falso
enter-server anafest

Saída:

Servidor requer código de convite
Entrou no servidor com sucesso
Servidor 'falso' não encontrado
Entrou no servidor com sucesso

# A2.8 - Sair de um servidor :
O usuario sair do servidor que ele estava online, depois faz o mesmo só que dá erro pois não está online em nenhum.

leave-server
leave-server

Saída:

Saindo do servidor 'anafest'
Você não está visualizando nenhum servidor

# A2.9 - Listar pessoas no servidor :
 não consegui fazer funcionar