#ifndef ANGRY_BIRDS_LEVEL
#define ANGRY_BIRDS_LEVEL

#include <string>
#include <list>
#include <box2d/box2d.h>
#include <SFML/Graphics.hpp>
#include "object.hpp"

const b2Vec2 gravity(0.0f, -9.8f);
const float scale = 100.0f;

class Level
{
public:
    Level();
    Level(std::string name, b2Vec2 bird_starting_pos);

    std::string GetName() const
    {
        return name_;
    };

    b2World *GetWorld()
    {
        return world_;
    }

    std::list<Object *> objects()
    {
        return objects_;
    }

    void ThrowBird(int angle, b2Vec2 velocity);

    // Returns true if world hasn't settled yet
    bool RenderLevel(sf::RenderWindow &window);

private:
    std::string name_;
    b2Vec2 bird_starting_position_;
    b2World *world_;
    std::list<Object *> objects_;
};

#endif // ANGRY_BIRDS_LEVEL