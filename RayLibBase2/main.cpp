#include "gameapplication.h"

int main()
{
    GameApplication::initialize();
    GameApplication::exec();
    GameApplication::release();
    return 0;
}
