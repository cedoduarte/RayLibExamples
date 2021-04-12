#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include "raywindow.h"

/** my game window */
class GameWindow : public RayWindow
{
public:
    /** constructor */
    explicit GameWindow();

    /** destructor */
    virtual ~GameWindow();
protected:
    /** update items */
    void update() override;

    /** draw items */
    void draw() override;
private:
    int m_boxPositionY; //!< ball y position
    int m_scrollSpeed; //!< mouse wheel scroll speed
};

#endif // GAMEWINDOW_H
