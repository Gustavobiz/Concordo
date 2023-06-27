#include <string>
#include <vector>
#include "canal.h"
using namespace std;
class Servidor{
    private:
    int IdDono;
    string nome;
    string descricao;
    string codigoConvite;
    std::vector<Canal> canais;
    std::vector<int> idPart;
    public:
    Servidor( std::string& nomeServer, int& IdDono);
    string getNomeSer();
    int getIdDono();
    string getDescricao();
    void setDescricao(string& Descricao);
    void setConvite(string& convite);
};