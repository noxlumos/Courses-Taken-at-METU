#ifndef HW4_TRACER_H
#define HW4_TRACER_H


#include "Player.h"

class Tracer : public Player {
public:
    Tracer(uint id, int x, int y);

    // Name     : Tracer
    // Priority : { UP, LEFT, DOWN, RIGHT, ATTACK }

    // Armor    : BRICK
    // Weapon   : SHOVEL
    // HP       : 100

    // DO NOT MODIFY THE UPPER PART
    // ADD OWN PUBLIC METHODS/PROPERTIES/OVERRIDES BELOW
    ~Tracer();
    Armor getArmor() const;
    Weapon getWeapon() const;
    std::vector<Move> getPriorityList()const;
    const std::string getFullName() const;
    const std::string getName() const;
    Color::Code getColorID() const;
};


#endif //HW4_TRACER_H
