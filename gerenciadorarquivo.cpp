#include "gerenciadorarquivo.h"

GerenciadorArquivo::GerenciadorArquivo()
{
    this->nome_arquivo = "dados.csv";
}

bool GerenciadorArquivo::salvar_instrumento(Guitarra guitarra)
{
    std::ofstream arquivo(this->nome_arquivo,std::ios::app);
    if(arquivo.is_open()){
        arquivo << filme.getTitulo() << ",";
   << std::endl;
        arquivo.close();
        return true;
    }
    return false;
}



std::map<std::string, guitarra> GerenciadorArquivo::obter_dados()
{
    Guitarra guitarra;
    std::map<std::string, Filme> dados;
    std::ifstream arquivo(nome_arquivo);
    std::string aux;
    std::string cod;
    if(arquivo.is_open()){
        while(std::getline(arquivo,aux,',')){
            filme.setTitulo(aux);

            getline(arquivo,aux,',');
            filme.setDiretor(aux);


        }

    }
    arquivo.close();
    return dados;
}
