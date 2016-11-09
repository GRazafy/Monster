#ifndef OBJET_H
#define OBJET_H
#include <iostream>
#include <cstdlib>
#include <string>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <sstream>

struct Monster
{
    EnumMonster typeMonster;
    int posx;
    int posy;
    int mvt_x;
    int mvt_y;
};

void initMonster(Monster &m)
{

}






#endif // OBJET_H
