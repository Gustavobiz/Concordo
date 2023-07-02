#ifndef sistema_h
#define sistema_h
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
    string serAtual="nenhum";

    public:
/**
 * @brief Construtor da classe Sistema.
 */
    Sistema();
/**
 * @brief destrutor da classe Sistema.
 */
    ~Sistema();
/**
 * @brief Verifica e retorna o código correspondente ao comando fornecido.
 *
 * @param comando O comando fornecido pelo usuário.
 * @return O código correspondente ao comando.
 */    
    int comandos(string& comando);
 /**
 * @brief Cria um novo usuário com as informações fornecidas.
 *
 * @param nome O nome do usuário.
 * @param email O email do usuário.
 * @param senha A senha do usuário.
 * @param id O ID do usuário.
 * @return Uma mensagem indicando o resultado da operação.
 */   
    string criarUsuario(std::string& nome, std::string& email,  std::string& senha,int& id);
/**
 * @brief Realiza o login do usuário com o email e senha fornecidos.
 *
 * @param email O email do usuário.
 * @param senha A senha do usuário.
 * @return Uma mensagem indicando o resultado da operação.
 */    
    string login(std::string& email, std::string& senha);
 /**
 * @brief Desconecta o usuário logado.
 *
 * @return Uma mensagem indicando o resultado da operação.
 */   
    string desconectar();
/**
 * @brief Cria um novo servidor com o nome fornecido.
 *
 * @param nomeServer O nome do servidor.
 * @return Uma mensagem indicando o resultado da operação.
 */    
    string criarServer( std::string& nomeServer);
/**
 * @brief Define a descrição do servidor com o nome fornecido.
 *
 * @param nomeServer O nome do servidor.
 * @param Descricao A descrição do servidor.
 * @return Uma mensagem indicando o resultado da operação.
 */    
    string descricao( std::string& nomeServer, std::string& Descricao);
/**
 * @brief Define o código de convite do servidor com o nome fornecido.
 *
 * @param nomeServer O nome do servidor.
 * @param convite O código de convite a ser definido.
 * @return Uma mensagem indicando o resultado da operação.
 */    
    string definindoConvite(std::string& nomeServer, std::string& convite);
/**
 * @brief Lista os servidores disponíveis.
 */    
    void listarServer();
/**
 * @brief Remove o servidor com o nome fornecido.
 *
 * @param nomeServer O nome do servidor a ser removido.
 * @return Uma mensagem indicando o resultado da operação.
 */    
    string removerServer(std::string& nomeServer);
/**
 * @brief Permite entrar em um servidor com o nome e código de convite fornecidos.
 *
 * @param nomeServer O nome do servidor.
 * @param convite O código de convite para entrar no servidor.
 * @return Uma mensagem indicando o resultado da operação.
 */    
    string entrarServer(std::string& nomeServer, std::string& convite);
/**
 * @brief Sai do servidor atual.
 *
 * @return Uma mensagem indicando o resultado da operação.
 */    
    string sairServer();
 /**
 * @brief Lista as pessoas presentes no servidor atual.
 */   
    void listarPessoasServer();

    Servidor getServer(Servidor& Server);
};
#endif 