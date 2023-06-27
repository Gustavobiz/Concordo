#include <iostream>
#include <sstream>
#include <string>
#include "sistema.h"
int main() {
    Sistema concordo;
    string linha;
    int quit=0, id=1;

    // Lendo cada linha da entrada padrão (conteúdo do arquivo exemplo.txt)
    while (getline(cin, linha)&& quit==0 ) {
    string comando;
    string nome,email,senha,generico;

    // Criar um stringstream para facilitar a extração dos valores
    istringstream iss(linha);

    // Extrair o comando e os parâmetros da linha
    iss >> comando;
    int op=concordo.comandos(comando);
        //saindo do sistema
        if(op==1){
            quit=1;
            std::cout<<"Saindo do Concordo"<<endl;

        }
        //criando usuaria e resistrando em sistema
        else if(op==2){
             iss >> email >>senha;
             getline(iss, nome);
             nome = nome.substr(nome.find_first_not_of(" "));  
             cout<<concordo.criarUsuario( nome, email,senha, id )<<endl;
             
        }else if(op==3){
             iss >> email >>senha;
             cout<<concordo.login(email,senha)<<endl;

        }else if(op==4){
             cout<<concordo.desconectar()<<endl;

        }else if(op==5){
            iss >> nome;
             cout<<concordo.criarServer(nome)<<endl;
        }else if(op==6){
            iss >> nome;
            getline(iss, generico);
             cout<<concordo.descricao(nome,generico)<<endl;
        }
        
        else if(op==40){
            std::cout<<"Código inesistente ou você não tem permissão para realizar comando"<<endl;

        }

    }
}