#include <string>
#include <vector>
#include "usuario.h"
#include "servidor.h"
#include <iostream>
using namespace std;
class Sistema{
    private:
    std::vector<Usuario> todosUsu;
    std::vector<Servidor> todosSer;
    int Idlogado;

    public:
    Sistema();
    int comandos(string& comando);
    string criarUsuario(std::string& nome, std::string& email,  std::string& senha,int& id);
    string login(std::string& email, std::string& senha);
    string desconectar();
    string criarServer( std::string& nomeServer);
    string descricao( std::string& nomeServer, std::string& Descricao);
    string definindoConvite(std::string& nomeServer, std::string& convite);
    void listarServer();
    string removerServer(std::string& nomeServer);
    string entrarServer(std::string& nomeServer, std::string& convite);
};