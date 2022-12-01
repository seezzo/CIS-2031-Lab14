#include <iostream>
#include <string>
#include <sstream> 
using std::string;
using std::cout;
using std::endl;


class Player {
    private:
        string name;
        int hitPoints;

    public:
        //❓❓ QUESTION 9, add the constructor here:
        Player(string n, int h){
            name = n;
            hitPoints = h;
        }
        

        string getName(){
            return name;
        }

        int getHitPoints(){
            return hitPoints;
        }

        void damage(int points){
            if ( points > hitPoints )
                hitPoints = 0;
            else
                hitPoints = hitPoints - points;
        }
};

int main(){
    Player a = Player("Sarah", 20);
    Player b = Player ("Bob", 15);
    a.damage(5);
    cout << << endl;


}
