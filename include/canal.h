#ifndef canal_h
#define canal_h
#include <string>
#include "mensagem.h"


using namespace std;
class Canal{
    protected:
        string nome;
    public:
         Canal(const std::string& nome);
         virtual string getNomeC();
         virtual ~Canal();
};



#endif 