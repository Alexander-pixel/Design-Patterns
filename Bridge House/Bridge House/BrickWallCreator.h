#pragma once


#include "AbstractWallCreator.h"

class BrickWallCreator: public AbstractWallCreator
{
public:
    void buildWall() override;

    void buildWallWithDoor() override;

    void buildWallWithWindow() override;
};




