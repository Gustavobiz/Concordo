#include <string>
#include <vector>
#include "usuario.h"
#include "servidor.h"
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
};