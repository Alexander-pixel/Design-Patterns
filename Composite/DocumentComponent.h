#pragma once

#include "AbstractComponent.h"
#include <list>
class DocumentComponent : public AbstractComponent
{
    string name;
    list<AbstractComponent*>arr;
    public:
    DocumentComponent(const string &n);
    string gatherData() override;
    void addComponent(AbstractComponent*pt);
};




