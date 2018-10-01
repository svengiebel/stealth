#ifndef ANIMATION_HPP_INCLUDED
#define ANIMATION_HPP_INCLUDED

#include <SFML/Graphics.hpp>
#include <vector>

class Animation {
private: 
    std::vector<sf::Texture> textures;
    sf::Time elapsed; // Time since last frame

    int frame_time; // Time to stay on each frame
public:
    
};

#endif