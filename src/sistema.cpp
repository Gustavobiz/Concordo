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
        }else if (comando.find("disconnect")) {
            return 4;
        }else if (comando.find("create-server") == 0 && Idlogado>0) {
            return 5;
        }else if (comando.find("set-server-desc") == 0 && Idlogado>0) {
            return 6;
        }else if (comando.find("set-server-invitecode") == 0 && Idlogado>0) {
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
        
        for ( Usuario usuario : todosUsu) {
            if (usuario.getEmail() == email && usuario.getSenha() == senha) {
                Idlogado=usuario.getId();
                return resultado;
            }
        }
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