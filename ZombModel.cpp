#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

class Actor {
private: 
    bool infected = 0; // No one is infected when game starts. 

public:
    int health;
    int max_health;
    double speed;
    int strength;
    bool dead;

    Actor(double health, double initialSpeed, double initialStrength)
        : health(initialHealth), speed(initialSpeed), max_health(initialHealth), 
            strength(initialStrength) {
        
    }

    void Turning() {
        if(std::rand() > (health/max_health)) {
            infected = 1;

        }
    }
    // Other methods or properties specific to the Actor class
};

class Human : public Actor {
public:
    std::string name;
    Items equiped
    // You can add more properties related to holding items

    Human(const std::string humanName, int initialHealth, double initialSpeed, int initialStrength)
        : Actor(initialHealth, initialSpeed, initialStrength), name(humanName) {
        // 
    }

    void Attack(Zombie victim) {
        if(speed > victim.speed) {
            victim.health -= strength
            if(equiped.type == 1) { victim.health -= equiped.value }
        } else {
            health = victim.strength;
        }
        return;
    }
};

class Zombie : public Actor {
public: 
    int damage
    std::string name

    Zombie(const std::string humanName, int initialDamage) 
        : name(humanName), damage(initialDamage) {
            Actor::infected = 1; // Turned into a Zombie
    }

    void Attack(Human victim) {
        if(speed >= victim.speed) {
            victim.health -= strength;
        } else {
            health -= victim.strength;
            if(victim.equiped.type == 1) { health -= victim.equiped.value; }
        }
        return;
    }
}

class Items {
public:
    int type; //0 = healable. 1 = weapon
    int value;

    Items(int initialType, int initialValue)
        : type(initialType), value(initialValue) {

        }
}

std::
int main() {
    // Example usage
    std::string name1 = "Levis Thomas";
    std::stirng name2 = "Louis Thomas";
    std::string name3 = "Owen O Connor";
    std::string name4 = "Gwen Mathews"

    Actor* map[2][2] = {
        {new Human(name1, 20, 5, 10), new Human(name2, 20, 6, 8)},
        {new Human(name3, 20, 5, 10), new Human(name4, 20, 6, 8)}
    };



    return 0;

}