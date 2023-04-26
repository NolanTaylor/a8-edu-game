#ifndef BOX_H
#define BOX_H
#include <Box2D/Box2D.h>
#include <QOpenGLContext>
#include <QtMath>
//Create a box, each box will be living in our physics world (b2World)
class Box
{
public:
    Box();
    ~Box();
    void init(b2World* world,  QVector2D& position, QVector2D& dimensions);
    b2Body* getBody() {return body;}

 private:
    b2Body* body = nullptr;
    b2Fixture* fixture = nullptr;

};

#endif // BOX_H
