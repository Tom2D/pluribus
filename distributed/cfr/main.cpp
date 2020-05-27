#include <iostream>
#include <chrono>
#include "Trainer.hpp"

int main(){
    Trainer train;
    auto t1 = std::chrono::high_resolution_clock::now();
    train.train(10000);
    auto t2 = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
    std::cout <<"duration "<< duration/pow(10, 6) <<"\n";

    for(auto map: train.mNodeMap){
        std::cout << "\nplayer " << map.first << "\n";
        for(auto infoSet: map.second){
            std::cout << "\n" + infoSet.first + "\n" << infoSet.second.getAverageStrategy() << "\n";
        }
    }
    Eigen::RowVectorXf expectedUtility = train.expectedUtility();

    for(int i=0; i<expectedUtility.size(); i++){
        std::cout << "Player " << i << " utility \n";
        std::cout << expectedUtility[i] << "\n";
    }


    return 0;
}