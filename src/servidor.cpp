#include "servidor.h"
Servidor::Servidor( std::string& nome, int& id): nome(nome), IdDono(id)  {}

string Servidor::getNomeSer() {
  return nome;
}
string Servidor::getDescricao() {
  return descricao;
}
int Servidor::getIdDono() {
  return IdDono;
}
void Servidor::setDescricao(string& Descricao) {
  descricao=Descricao;
}
void Servidor::setConvite(string& convite){
codigoConvite=convite;
}
string Servidor::getCodigoConvite(){
  return codigoConvite;
}
void Servidor::addId(int id) {
  idPart.push_back(id);
}

vector<int>&  Servidor::getIdPart() {  
    return idPart;
}
Servidor::~Servidor(){}

vector<Canal*>& Servidor::getCanais(){
  return canais;

}
string Servidor::addCanais(string nomeCanal, string tipo) {
     Canal* novoCanal = nullptr;
  if(tipo=="texto"){
      for (Canal* canal : canais) {
          if (CanalTexto* canalTexto = dynamic_cast<CanalTexto*>(canal)) {
            if(canal->getNomeC()==nomeCanal){
            string resultado="Canal de texto '"+nomeCanal+"' já existe!";          
            return resultado; 
            }
    }
    }
    novoCanal = new CanalTexto(nomeCanal);
    canais.push_back(novoCanal);
    string resultado="Canal de texto '"+nomeCanal+"'  criado";          
    return resultado;    

  }else if(tipo=="voz"){
      for (Canal* canal : canais) {
          if (CanalVoz* canalVoz= dynamic_cast<CanalVoz*>(canal)) {
            if(canal->getNomeC()==nomeCanal){
            string resultado="Canal de voz '"+nomeCanal+"' já existe!";          
            return resultado;               

            }
    }
    }
    novoCanal = new CanalVoz(nomeCanal);
    canais.push_back(novoCanal);
    string resultado="Canal de voz'"+nomeCanal+"'  criado";          
    return resultado;  

  }
      return "Esse tipo não existe";

}
string Servidor::logarCanal(string nomeCanal){
      for (Canal* canal : canais) {
          if (CanalTexto* canalTexto= dynamic_cast<CanalTexto*>(canal)) {
            if(canal->getNomeC()==nomeCanal){
            string resultado="Entrou no canal '"+nomeCanal;          
            return resultado;               
            }
    }
    }
    string resultado="Canal '"+nomeCanal+"' não existe"; 
    return resultado;
}