#ifndef GAMEAPPLICATION_H
#define GAMEAPPLICATION_H

#include "gamewindow.h"

/** game application - singleton class */
class GameApplication
{
public:
    /** initialize application */
    static void initialize();

    /** execute application */
    static void exec();

    /** free memory */
    static void release();
private:
    /** constructor */
    explicit GameApplication();

    /** destructor */
    virtual ~GameApplication();

    GameWindow *m_window; //!< main window
    static GameApplication *s_globalInstance; //!< application global instance
};

#endif // GAMEAPPLICATION_H
