#include <string>
using namespace std;
class Usuario {
    private:
    int id;
    std::string nome;
    std::string email;
    std::string senha;
    public:
/**
 * @brief Construtor da classe Usuario.
 *
 * @param nome O nome do usuário.
 * @param email O email do usuário.
 * @param senha A senha do usuário.
 * @param id O ID do usuário.
 */
    Usuario( std::string& nome,  std::string& email,  std::string& senha,int id);
/**
 * @brief Destrutor da classe Usuario.
 */
    ~Usuario();
/**
 * @brief Obtém o email do usuário.
 *
 * @return O email do usuário.
 */
    string getEmail();
 /**
 * @brief Obtém a senha do usuário.
 *
 * @return A senha do usuário.
 */   
    string getSenha();
    /**
 * @brief Obtém o nome do usuário.
 *
 * @return O nome do usuário.
 */
    string getNome();
    int getId();
};