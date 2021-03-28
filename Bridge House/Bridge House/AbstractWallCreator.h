#pragma once

#include <iostream>
using namespace std;

class AbstractWallCreator
{
public:
    virtual void buildWall()=0;
    virtual void buildWallWithDoor()=0;
    virtual void buildWallWithWindow()=0;
    virtual ~AbstractWallCreator();

};




