#ifndef RAYWINDOW_H
#define RAYWINDOW_H

#include <raylib.h>
#include <string>

/** RayLib Game Window Wrapper */
class RayWindow
{
public:
    /** constructor */
    explicit RayWindow();

    /** destructor */
    virtual ~RayWindow();

    /** show window */
    void show();

    /** set frames per second */
    void setFPS(int fps)
    {
        m_fps = fps;
    }

    /** set width */
    void setWidth(int w)
    {
        m_width = w;
    }

    /** set height */
    void setHeight(int h)
    {
        m_height = h;
    }

    /** set title */
    void setTitle(const std::string &title)
    {
        m_title = title;
    }

    /** get fps */
    int fps() const
    {
        return m_fps;
    }

    /** get width */
    int width() const
    {
        return m_width;
    }

    /** get height */
    int height() const
    {
        return m_height;
    }

    /** get title */
    std::string title() const
    {
        return m_title;
    }
protected:
    /** update items */
    virtual void update() = 0;

    /** draw items */
    virtual void draw() = 0;

    int m_fps; //!< frames per second
    int m_width; //!< window's width
    int m_height; //!< window's height
    std::string m_title; //!< window's title
};

#endif // RAYWINDOW_H
