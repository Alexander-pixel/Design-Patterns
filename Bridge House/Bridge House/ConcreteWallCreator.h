#pragma once


#include "AbstractWallCreator.h"

class ConcreteWallCreator: public AbstractWallCreator
{
public:
    void buildWall() override;

    void buildWallWithDoor() override;

    void buildWallWithWindow() override;
};




