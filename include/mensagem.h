#ifndef mensagem_h
#define mensagem_h
/**
 * @file mensagem.h
 * @brief Definição da classe Mensagem que representa uma mensagem enviada por um usuário.
 */
#include <string>
using namespace std;
class Mensagem{
     private:
     string dataHora;
     int enviadoPor;
     string conteudo;
     public:
     /**
     * @brief Construtor da classe Mensagem.
     * @param dataHora A data e hora em que a mensagem foi enviada.
     * @param enviadoPor O ID do usuário que enviou a mensagem.
     * @param conteudo O conteúdo da mensagem.
     */     
     Mensagem(const string& dataHora ,int enviadoPor ,const string& conteudo);
     /**
     * @brief Destrutor da classe Mensagem.
     */     
     ~Mensagem();
     /**
     * @brief Obtém a data e hora da mensagem.
     * @return A data e hora da mensagem.
     */     
     string getDataHora();
     /**
     * @brief Obtém o ID do usuário que enviou a mensagem.
     * @return O ID do usuário que enviou a mensagem.
     */     
     int getId();
     /**
     * @brief Obtém o conteúdo da mensagem.
     * @return O conteúdo da mensagem.
     */     
      string getConteudo();
  

};

#endif 