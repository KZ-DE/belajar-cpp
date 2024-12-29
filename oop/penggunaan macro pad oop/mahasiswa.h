// #define __ENABLE_PLAYER

#include <iostream>

class Player
{
public:
    void init();

#ifdef __PLAYER_H__
    void update();

    void draw();
#endif // __PLAYER_H__
};
