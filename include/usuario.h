#ifndef usuario_h
#define usuario_h
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
    string getEmail()const;
 /**
 * @brief Obtém a senha do usuário.
 *
 * @return A senha do usuário.
 */   
    string getSenha()const;
 /**
 * @brief Obtém o nome do usuário.
 *
 * @return O nome do usuário.
 */
    string getNome()const;
 /**
 * @brief Obtém o id do usuário.
 *
 * @return O id do usuário.
 */    
    int getId()const;
};

#endif 