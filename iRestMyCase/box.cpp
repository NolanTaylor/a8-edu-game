#include "box.h"
#include "qvectornd.h"

Box::Box()
{

}
Box::~Box(){

}

void Box::init(b2World* world, QVector2D& position, QVector2D& dimensions){
    //Make the body
    b2BodyDef bodyDef;
    bodyDef.type = b2_dynamicBody;
    bodyDef.position.Set(position.x(), position.y());

    body = world->CreateBody(&bodyDef);

    //Create fixture and shape
    b2PolygonShape boxShape;
    boxShape.SetAsBox(dimensions.x()/2.0f, dimensions.y() / 2.0f);

    b2FixtureDef fixtureDef;
    fixtureDef.shape = &boxShape;
    fixtureDef.density = 1.0f;
    fixtureDef.friction = 0.3f; //Use parameter
    fixture = body->CreateFixture(&fixtureDef);

}

