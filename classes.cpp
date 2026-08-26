#include<iostream>

class Player{
public:
    int x , y ;
    int speed;

    
    void move(int x, int y){
        this->x += x * speed;
        this->y += y * speed;
    }
};
struct vec2{
    int x , y ;
    int speed;
};
int main(){
    Player p1;
    p1.x = 10; 
    p1.y = 20; 
    p1.speed = 5;
    p1.move(1, 1);

    // struct v/s class
    // struct members are public by default
    // class members are private by default
    // class can have methods, struct cannot have methods
    //  inheritance is possible in class but not in struct
    
    return 0;
}