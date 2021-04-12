#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "raymainwindow.h"

/** my game window */
class MainWindow : public RayMainWindow
{
public:
    /** constructor */
    explicit MainWindow();

    /** destructor */
    virtual ~MainWindow();
protected:
    /** update items */
    void update() override;

    /** draw items */
    void draw() override;
private:
    int m_boxPositionY; //!< ball y position
    int m_scrollSpeed; //!< mouse wheel scroll speed
};

#endif // MAINWINDOW_H
