#ifndef GERENCIADORARQUIVO_H
#define GERENCIADORARQUIVO_H


#include <fstream>
#include <string>
#include <map>

#include <limits>
#include <QString>


#include <iostream>

class GerenciadorArquivo
{
private:
    std::string nome_arquivo;

public:
    GerenciadorArquivo();
    bool salvar_guitarra(Guitarra guitarra);
    bool salvar_dados(std::map<std::string,Guitarra> dados)
    {
        for(const auto &[cod,filme] : dados){
            if(!this->salvar_guitarra(guitarra)){
                return false;
            }
        }
        return true;
    }
    std::map<std::string,Guitarra> obter_dados();

};

#endif // GERENCIADORARQUIVO_H
