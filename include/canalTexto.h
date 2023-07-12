#ifndef canalTexto_h
#define canalTexto_h
#include <string>
#include <vector>
#include "canal.h"


class CanalTexto: public Canal{
    private:
    std::vector<Mensagem> mensagens;
    public:
/**
 * @brief Construtor da classe CanalTexto.
 * 
 * @param nome nome do canal de texto.
 */    
    CanalTexto(string& nome); 
/**
 * @brief Destrutor da classe CanalTexto.
 */    
    ~CanalTexto(); 
/**
 * @brief Obtém as mensagens do canal de texto.
 * 
 * @return Um vetor contendo as mensagens do canal de texto.
 */    
    vector<Mensagem> getMensagens()const;
/**
 * @brief Adiciona uma mensagem ao canal de texto.
 * 
 * @param mensagem A mensagem a ser adicionada.
 */    
    void setMensagens(Mensagem& mensagem);

};
#endif 