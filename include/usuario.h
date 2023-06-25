#include <string>
using namespace std;
class Usuario {
    private:
    int id;
    std::string nome;
    std::string email;
    std::string senha;
    public:
    Usuario( std::string& nome,  std::string& email,  std::string& senha,int id);
    //void setUsuario(std::string& Nome,  std::string& Email,  std::string& Senha, int& Id);
    string getEmail();
    string getSenha();
    string getNome();
    int getId();
};