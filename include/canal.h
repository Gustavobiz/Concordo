#ifndef canal_h
#define canal_h
#include <string>
#include "mensagem.h"


using namespace std;
class Canal{
    protected:
        string nome;
    public:
/**
 * @brief Construtor da classe Canal.
 * 
 * @param nome O nome do canal.
 */    
         Canal(const std::string& nome);
/**
 * @brief Obtém o nome do canal.
 * 
 * @return O nome do canal.
 */         
         virtual string getNomeC()const;
 /**
 * @brief Destrutor da classe Canal.
 */        
         virtual ~Canal();
};



#endif 