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
    Mensagem test("",0,"");
    novoCanal = new CanalVoz(nomeCanal,test);
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
void Servidor::setMensagem(string mensagem,int idUsu,string nomeCanal){
      std::time_t tempo = std::time(nullptr);
      std::tm* tempoMensagem = std::localtime(&tempo);
      int mes = tempoMensagem ->tm_mon + 1;
      int dia = tempoMensagem ->tm_mday;
      int ano = tempoMensagem ->tm_year + 1900;
      int min = tempoMensagem ->tm_min;
      int hora = tempoMensagem ->tm_hour;

      std::ostringstream oss;
      oss << "<" << dia << "/" << mes << "/" << ano << " - " << hora << ":" << min << ">: " ;
      std::string data = oss.str();  
      Mensagem send(data,idUsu,mensagem);
        for (Canal* canal : canais) {
          if (CanalTexto* canalTexto= dynamic_cast<CanalTexto*>(canal)) {
            if(canal->getNomeC()==nomeCanal){
                   canalTexto->setMensagens(send);
            }
            }
            }
      

}
void Servidor::exibirMensagens(string nomeCanal,vector<Usuario>& todosUsu){
      for (Canal* canal : canais) {
          if (CanalTexto* canalTexto= dynamic_cast<CanalTexto*>(canal)) {
            if(canal->getNomeC()==nomeCanal){
              vector<Mensagem> mensagens = canalTexto->getMensagens();
              if(mensagens.size()==0){
                return;

              }else{
              for (Mensagem mensagem : mensagens) {
                 for ( Usuario usuario : todosUsu) {
                     if (usuario.getId() == mensagem.getId()) {
                      cout<<usuario.getNome() <<mensagem.getDataHora() << mensagem.getConteudo()<<endl;

            }
        }                


              }
              }                  
            }
    }
    }      


}