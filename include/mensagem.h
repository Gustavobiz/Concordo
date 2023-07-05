#ifndef mensagem_h
#define mensagem_h
#include <string>
using namespace std;
class Mensagem{
     private:
     string dataHora;
     int enviadoPor;
     string conteudo;
     public:
     Mensagem(const string& dataHora ,int enviadoPor ,const string& conteudo);
     string getDataHora();
     int getId();
      string getConteudo();
  

};

#endif 