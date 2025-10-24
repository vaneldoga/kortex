#include <iostream>

int main(){
    std::string nomes_negativos[5];
    for(int i=0; i<5; i++)
        std::cin>>nomes_negativos[i];
    for(int i=0; i<5; i++)
        std::cout<<nomes_negativos[i]<<"\n";
    return 0;
}
