#include <iostream>

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<6; j++){
            if((i==0 || i==4)||(j==0||j==5)){
                std::cout<<"X";
            }
            else{
                std::cout<<" ";
            }
        }
        std::cout<<"\n";
    }
    return 0;
}
