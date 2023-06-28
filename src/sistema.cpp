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
        for ( Servidor server : todosSer) {
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
        for ( Servidor server : todosSer) {
            if (server.getNomeSer() == nomeServer) { 
                if(server.getCodigoConvite().size() == 0){
                    //cout << server.getCodigoConvite()<<endl;
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