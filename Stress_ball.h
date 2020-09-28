#ifndef Stress_ball_H
#define Stress_ball_H
#include <string>
#include <iostream>

enum class Stress_ball_colors{
    red,
    blue,
    yellow,
    green
};

enum class Stress_ball_sizes{
    small,
    medium,
    large
};


class Stress_ball{
    private:
        Stress_ball_colors color;
        Stress_ball_sizes size;
    public:
        Stress_ball();
        Stress_ball( Stress_ball_colors c, Stress_ball_sizes s);
        Stress_ball_colors get_color() const;
        Stress_ball_sizes get_size() const ;
        bool operator == (const Stress_ball& sb);
        friend std::ostream& operator<<(std::ostream& os, const Stress_ball& sb);
};

std::ostream& operator<<(std::ostream& os, const Stress_ball& sb){
    if(sb.color == Stress_ball_colors::red){
        os << "(red, ";
    }
    else if (sb.color == Stress_ball_colors::blue){
        os<< "(blue, ";
    }
    else if (sb.color == Stress_ball_colors::yellow){
        os<< "(yellow, ";
    }
    else if (sb.color == Stress_ball_colors::green){
        os<< "(green,  ";
    }

    if(sb.size == Stress_ball_sizes::small){
        os<< "small)\n";
    }
    if(sb.size  == Stress_ball_sizes::medium){
        os<< "medium)\n";
    }
    if(sb.size == Stress_ball_sizes::large){
        os<< "large)\n";
    }

    return os;
}

bool Stress_ball:: operator == (const Stress_ball& sb){
    if((color == sb.get_color())&& (size == sb.get_size())){
        return true;
    }
    return false;
}

Stress_ball_colors Stress_ball:: get_color() const{
    return color;
}

Stress_ball_sizes Stress_ball:: get_size() const {
    return size;
}


Stress_ball:: Stress_ball(){
    color = Stress_ball_colors(rand()%4);
    size = Stress_ball_sizes(rand()%3);
}

Stress_ball:: Stress_ball(Stress_ball_colors c, Stress_ball_sizes s){
    color = c;
    size = s;
}


#endif  