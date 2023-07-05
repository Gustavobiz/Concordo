#ifndef servidor_h
#define servidor_h
#include <string>
#include <vector>
#include "canal.h"
#include <iostream>
#include "canalVoz.h"
#include "canalTexto.h"
using namespace std;
class Servidor{
    private:
    int IdDono;
    string nome;
    string descricao;
    string codigoConvite;
    std::vector<Canal*> canais;
    std::vector<int> idPart;
    public:
   
/**
 * @brief Construtor da classe Servidor.
 *
 * @param nome O nome do servidor.
 * @param id O ID do dono do servidor.
 */
    Servidor( std::string& nomeServer, int& IdDono);
    ~Servidor();
 /**
 * @brief Obtém o nome do servidor.
 *
 * @return O nome do servidor.
 */   
    string getNomeSer();
/**
 * @brief Obtém o ID do dono do servidor.
 *
 * @return O ID do dono do servidor.
 */    
    int getIdDono();
/**
 * @brief Obtém a descrição do servidor.
 *
 * @return A descrição do servidor.
 */    
    string getDescricao();
 /**
 * @brief Define a descrição do servidor.
 *
 * @param Descricao A descrição do servidor.
 */   
    void setDescricao(string& Descricao);
 /**
 * @brief Define o código de convite do servidor.
 *
 * @param convite O código de convite do servidor.
 */   
    void setConvite(string& convite);
 /**
 * @brief Obtém o código de convite do servidor.
 *
 * @return O código de convite do servidor.
 */   
    string getCodigoConvite();    
 /**
 * @brief Adiciona um ID de participante ao servidor.
 *
 * @param id O ID do participante a ser adicionado.
 */   
    void addId(int id);
 
/**
 * @brief Obtém os IDs dos participantes do servidor.
 *
 * @return Um vetor contendo os IDs dos participantes do servidor.
 */   
    vector<int>&  getIdPart();
    vector<Canal*>& getCanais();
    string addCanais(string nomeCanal, string tipo);
};

#endif 