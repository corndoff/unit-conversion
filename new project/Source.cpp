#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Warrior {
private :
	int attack;
	int move;
	int defense;
public:
	int get_attack() {
		return attack;
	}
	int get_move() {
		return move;
	}
	int get_defense() {
		return defense;
	}
};
class Ground : public Warrior {
	

};
