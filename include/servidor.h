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
    std::vector<Canal*> canais;
    std::vector<int> idPart;
    public:
};