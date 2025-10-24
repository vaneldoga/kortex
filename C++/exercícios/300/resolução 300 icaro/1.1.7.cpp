#include <iostream>
#include <string>
struct aluno{
    std::string nome;
    float nota; std::string nota_c;
};

int main(){
    struct aluno alunos[5];
    for(unsigned int  i=0; i<5; i++){
        std::cin>>alunos[i].nome;
        float nota;
        std::cin>>nota;
        if(nota>=10){
            alunos[i].nota_c = "DEZ";
        }
        else{
            alunos[i].nota_c = "vazio";
            alunos[i].nota = nota;
        }
    }
    std::cout<<"ALUNO(A)           NOTA\n========           ====\n";
    for(unsigned int i=0; i<5;i++){
        std::cout<<alunos[i].nome;
        for(unsigned int j = 0; j < 20 - alunos[i].nome.length(); j++)
            std::cout<<" ";
        if(alunos[i].nota_c=="vazio"){
            std::cout<<alunos[i].nota;
        }
        else{
            std::cout<<alunos[i].nota_c;
        }
        std::cout<<"\n";
    }

}
