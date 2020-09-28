#include "Stress_ball.h"
#include <string>
#include <iostream>
using namespace std;

int main(){
    
    Stress_ball_sizes sizeBall1 = Stress_ball_sizes(0);
    Stress_ball_colors colorBall1 = Stress_ball_colors(2);

    Stress_ball_sizes sizeBall2 = Stress_ball_sizes(1);
    Stress_ball_colors colorBall2 = Stress_ball_colors(2);

    Stress_ball ball1;
    ball1 = Stress_ball(colorBall1, sizeBall1);

    Stress_ball ball2;
    ball2 = Stress_ball(colorBall2, sizeBall2);

    if(ball1 == ball2){
        std::cout<< "They're equal";
    }
    else{
        std::cout<< ball2;
    }

}