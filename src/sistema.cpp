#include <string>
#include "sistema.h"


Sistema::Sistema(){
Idlogado=0;
} 
int Sistema::comandos(string& comando){
        if (comando.find("quit") == 0) {
            return 1;
        }else if (comando.find("create-user") == 0) {
            return 2;
        }else if (comando.find("login") == 0) {
            return 3;
        }else if (comando.find("disconnect") == 0) {
            return 4;
        }else if (comando.find("create-server") == 0 && Idlogado>0) {
            return 5;
        }else if (comando.find("set-server-desc") == 0 && Idlogado>0) {
            return 6;
        }else if (comando.find("set-server-invite-code") == 0 && Idlogado>0) {
            return 7;
        }else if (comando.find("list-servers") == 0 && Idlogado>0) {
            return 8;
        }else if (comando.find("remove-server") == 0 && Idlogado>0) {
            return 9;
        }else if (comando.find("enter-server") == 0 && Idlogado>0) {
            return 10;
        }else if (comando.find("leave-server") == 0 && Idlogado>0) {
            return 11;
        }else if (comando.find("list-participants") == 0 && Idlogado>0) {
            return 12;
        }else if (comando.find("list-channels") == 0 && Idlogado>0) {
            return 13;
        }else if (comando.find("create-channel") == 0 && Idlogado>0) {
            return 14;
        }else if (comando.find("enter-channel") == 0 && Idlogado>0) {
            return 15;
        }else if (comando.find("leave-channel") == 0 && Idlogado>0) {
            return 16;
        }else if (comando.find("send-message") == 0 && Idlogado>0) {
            return 17;
        }else if (comando.find("list-messages") == 0 && Idlogado>0) {
            return 18;
        }

        
        else{
            return 40;
        }                
    }

string Sistema::criarUsuario( std::string& nome,  std::string& email,  std::string& senha, int& id ){
        for ( Usuario usuario : todosUsu) {
            if (usuario.getEmail() == email) {
                return "Erro: O email já está em uso!";
            }
        }
        Usuario newUser(nome,email,senha,id);
        id++;
        todosUsu.push_back(newUser);

        return "Usuário criado com sucesso!";

}

string Sistema::login(std::string& email, std::string& senha){
        string str1 = "Logado como ";
        string resultado = str1+email;
        if(Idlogado>0){
            return "Voce já está logado em uma conta!";
        }else{
          for ( Usuario usuario : todosUsu) {
            if (usuario.getEmail() == email && usuario.getSenha() == senha) {
                Idlogado=usuario.getId();
                
                
                return resultado;
            }
        }}
        return "Senha ou usuário inválidos!";
}

string Sistema::desconectar(){
        for ( Usuario usuario : todosUsu) {
            if (usuario.getId() == Idlogado) {
                  string str1 = "Desconectando usuário ";
                  string resultado = str1+usuario.getEmail();                
                Idlogado=0;
                return resultado;
            }
        }
        return "Não está conectado";    

}

string Sistema::criarServer( std::string& nomeServer){
        for ( Servidor server : todosSer) {
            if (server.getNomeSer() == nomeServer) {
                return "Servidor com esse nome já existe";
            }
        }
        Servidor newServer(nomeServer,Idlogado);
        todosSer.push_back(newServer);

        return "Servidor criado";

}

string Sistema::descricao(std::string& nomeServer, std::string& Descricao){
        for ( Servidor& server : todosSer) {
            if (server.getNomeSer() == nomeServer) {
                if(server.getIdDono()==Idlogado){
                    server.setDescricao(Descricao);
                    string resultado="Descrição do servidor '"+nomeServer+"' modificada!";
                    return resultado;
                }else{
                    return "Você não pode alterar a descrição de um servidor que não foi criado por você";
                }                
            }
        }
        string resultado="Servidor '"+nomeServer+"' não existe";
        return resultado;            
}
string Sistema::definindoConvite(std::string& nomeServer, std::string& convite){
    int x=0;
        for ( Servidor server : todosSer) {
            if (server.getNomeSer() == nomeServer) {
                if(server.getIdDono()==Idlogado){
                    if(convite.size() == 0){
                        convite="";                       
                        todosSer[x].setConvite(convite);                        
                        string resultado="Código de convite do servidor '"+nomeServer+"'  removido!";
                    return resultado;
                    }else{
                        convite = convite.substr(convite.find_first_not_of(" ")); 
                        todosSer[x].setConvite(convite);                        
                        string resultado="Código de convite do servidor '"+nomeServer+"' modificada!";
                    return resultado;
                    }

                }else{
                    return "Você não pode alterar a covite de um servidor que não foi criado por você";
                }                
            }
            x++;
        }
        return "Servidor não foi encontrado";

}
void Sistema::listarServer(){
        for ( Servidor server : todosSer) {
            cout << server.getNomeSer() <<endl;
        }

}

string Sistema::removerServer(std::string& nomeServer){
    int x=0;
        for ( Servidor server : todosSer) {
            if (server.getNomeSer() == nomeServer) {
                if(server.getIdDono()==Idlogado){
                    todosSer.erase(todosSer.begin() +x);
                    string resultado="Servidor '"+nomeServer+"' removido!";
                    return resultado;                    
                }
                string resultado="Você não é o dono do servidor '"+nomeServer+"'";
                return resultado;
            }
            x++;
        }
        string resultado="Servidor '"+nomeServer+"' não encontrado";
        return resultado;

}

string Sistema::entrarServer(std::string& nomeServer, std::string& convite){
        for ( Servidor& server : todosSer) {
            if (server.getNomeSer() == nomeServer) { 
                if(server.getCodigoConvite().size() == 0){
                    server.addId(Idlogado);
                    serAtual=server.getNomeSer();
                    return "Entrou no servidor com sucesso";
                    

                }if(server.getCodigoConvite()== convite){
                    server.addId(Idlogado);
                    serAtual=server.getNomeSer();
                    return "Entrou no servidor com sucesso";


                }else if(convite.size() == 0){
                    return "Servidor requer código de convite";
                }else{
                    return "Código convite errado!";
                }

            }                 
       }
        string resultado="Servidor '"+nomeServer+"' não encontrado";
        return resultado;
}
string Sistema::sairServer(){
    if(serAtual=="nenhum"){
        return "Você não está visualizando nenhum servidor";
    }else{
        string resultado="Saindo do servidor '"+serAtual+"'";  
        serAtual="nenhum";
        return resultado;  

    }

}
void Sistema::listarPessoasServer() {
    if("nenhum"== serAtual){
           cout <<"Você parece não estar online"<< endl;
           return;
    }
    for (Servidor& servidor : todosSer) {
        if (servidor.getNomeSer() == serAtual) {
            for (int idUsuario : servidor.getIdPart()) {
                for (Usuario& usuario : todosUsu) {
                    if (usuario.getId() == idUsuario) {
                        std::cout << usuario.getNome() << std::endl;
                    }
                }
            }
            return;
        }
    }   
}
Sistema::~Sistema(){}
void Sistema::listarCanais() {

    if (serAtual == "nenhum") {
        cout << "Você parece não estar online" << endl;
        return;
    }

    for (Servidor& servidor : todosSer) {
        if (servidor.getNomeSer() == serAtual) {
            cout << "#Canais de Texto:" << endl;
            for (Canal* canal : servidor.getCanais()) {
                if (canal != nullptr && dynamic_cast<CanalTexto*>(canal) != nullptr) {
                    cout << canal->getNomeC() << endl;
                }
            }

            cout << "#Canais de Voz:" << endl;
            for (Canal* canal : servidor.getCanais()) {
                if (canal != nullptr && dynamic_cast<CanalVoz*>(canal) != nullptr) {
                    cout << canal->getNomeC() << endl;
                }
            }
        }
    }
}

// void Sistema::listarCanais() {
//     if(serAtual=="nenhum"){
//         cout<<"Você parece não estar online"<<endl;
//            return ;
//     }    
//         for (Servidor& servidor : todosSer) {
//             if (servidor.getNomeSer() == serAtual) {
//                 cout << "#Canais de Texto:" << endl;
//                 for (Canal* canal : servidor.getCanais()) {
//                     if (dynamic_cast<CanalTexto*>(canal) != nullptr) {
//                           cout << canal->getNome() << endl;
//         }
//     }

//              cout << "#Canais de Voz:" << endl;
//                   for (Canal* canal : servidor.getCanais()) {
//                       if (dynamic_cast<CanalVoz*>(canal) != nullptr) {
//                           cout << canal->getNome() << endl;
//         }
//     }                
//         }
//         }

// }

string Sistema::criarCanal(std::string& nomeCanal, std::string& tipo){
    if(serAtual=="nenhum"){
           return "Você parece não estar online em um server";
    }else{
    for (Servidor& servidor : todosSer) {
        if (servidor.getNomeSer() == serAtual) {
            return servidor.addCanais(nomeCanal, tipo);
        }
        }        
    }    

        return "erros2";

}

string Sistema::entrarCanal(std::string& nomeCanal){
    if(serAtual=="nenhum"){
           return "Você parece não estar online em um server";
    }else{ 
    string resultado="Entrou no canal '"+nomeCanal;
    for (Servidor& servidor : todosSer) {
        if (servidor.getNomeSer() == serAtual) {
            if(servidor.logarCanal(nomeCanal)==resultado){
                 canalAtual=nomeCanal;
                 return servidor.logarCanal(nomeCanal); 
            }else{
                return servidor.logarCanal(nomeCanal); 
            }
        }
        }
               
    } 
    return "erros2";
}
string Sistema::sairCanal(){
    if(canalAtual=="nenhum"){
        return "Você não está visualizando nenhum canal";
    }else{
        canalAtual="nenhum";
        return "Saindo do canal ";  

    }

}
string Sistema::enviarMensagem(string mensagem){
    if(canalAtual=="nenhum"){
        return "Você não está visualizando nenhum canal";
    }else{
    for (Servidor& servidor : todosSer) {
        if (servidor.getNomeSer() == serAtual) {
            for (Usuario& usuario : todosUsu) {
                    if(usuario.getId() == Idlogado){
                        servidor.setMensagem(mensagem,usuario.getId(),canalAtual);
                        return "enviada";

                }
        }
        }        

    }    
}
return "erro enviar mensagem";
}

void Sistema::listarMensagem(){
    if(canalAtual=="nenhum"){
        cout<<"Você não está visualizando nenhum canal"<<endl;
    }else{    
    for (Servidor& servidor : todosSer) {
        if (servidor.getNomeSer() == serAtual) {
            servidor.exibirMensagens(canalAtual,todosUsu);        
        }        

    }  
    }  
}


void Sistema::salvar() {
    salvarUsuarios();
    salvarServidores();

}
void Sistema::salvarUsuarios() {
    ofstream arquivo("usuarios.txt");
    arquivo << todosUsu.size() << "\n";

    if (arquivo.is_open()) {
        // Percorra a lista de usuários e escreva as informações atualizadas no arquivo
        for (const Usuario& usuario : todosUsu) {
            arquivo << usuario.getId() << "\n";
            arquivo << usuario.getNome() << "\n";
            arquivo << usuario.getEmail() << "\n";
            arquivo << usuario.getSenha() << "\n";
        }

        arquivo.close();
    } else {
        cout << "Erro ao abrir o arquivo usuarios.txt" << endl;
    }
}

void Sistema::salvarServidores() {
    std::ofstream arquivo("servidores.txt");
    if (arquivo.is_open()) {
        // Escrever o total de servidores
        arquivo << todosSer.size() << "\n";
        
        // Escrever os dados de cada servidor no arquivo
        for (const Servidor& servidor : todosSer) {
            arquivo << servidor.getIdDono() << "\n";            
            arquivo << servidor.getNomeSer() << "\n";
            arquivo << servidor.getDescricao() << "\n";

            arquivo << servidor.getCodigoConvite() << "\n";

            
            // Escrever os IDs dos participantes do servidor
            arquivo << servidor.getIdPart().size() << "\n";
            for (int id : servidor.getIdPart()) {
                arquivo << id << "\n";
            }
            
            // Escrever os canais do servidor
            arquivo << servidor.getCanais().size() << "\n";
            for (const Canal* canal : servidor.getCanais()) {
                arquivo << canal->getNomeC() << "\n";
                // Verificar se é um canal de texto
                if (const CanalTexto* canalTexto = dynamic_cast<const CanalTexto*>(canal)) {
                    arquivo << "texto" << "\n";
                    arquivo << canalTexto->getMensagens().size() << "\n";
                    // servidor.salvarMensagensTxt(canalTexto);
                    for(Mensagem mensagem:canalTexto->getMensagens()){
                           arquivo << mensagem.getId() << "\n";
                           arquivo << mensagem.getDataHora() << "\n";
                           arquivo << mensagem.getConteudo() << "\n";
                    }

                }
                // Verificar se é um canal de voz
                else if (const CanalVoz* canalVoz = dynamic_cast<const CanalVoz*>(canal)) {
                    arquivo << "voz" << "\n";
                    if(canalVoz->getMensagensVoz().getId() == 0){
                        arquivo <<0<<"\n";
                    }else{
                        arquivo <<1<<"\n";
                    }

                }
            }
        }
        
        arquivo.close();
    }
}