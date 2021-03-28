#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <string>

using namespace std;

class Unit
{
protected:
    string name;
    int hp = 0;
public:
    Unit(const string &n, int h);

    void setName(const string &n);

    const string &getName() const;

    void setHp(int h);

    int getHp() const;

    virtual void attack(Unit *target) = 0;

    virtual void getDamage(int dmg) = 0;

    virtual ~Unit();
};

Unit::Unit(const string &n, int h)
{
    name = n;
    hp = h;
}

void Unit::setName(const string &n)
{
    name = n;
}

const string &Unit::getName() const
{
    return name;
}

void Unit::setHp(int h)
{
    hp = h;
}

int Unit::getHp() const
{
    return hp;
}

Unit::~Unit()=default;

class Warrior:public Unit
{
    int armor = 0;
    int min_dmg = 3;
    int max_dmg = 20;
public:
    Warrior(const string &n);

    void attack(Unit *target) override;

    void getDamage(int dmg) override;
};

void Warrior::attack(Unit *target)
{
    int dmg = rand()%(max_dmg-min_dmg)+min_dmg;
    cout<<"Warrior "<<name<<" attacks "<<target->getName()<<" damage is "<<dmg<<endl;
    target->getDamage(dmg);
}

Warrior::Warrior(const string &n):Unit(n, 100)
{
    armor = 50;
}

void Warrior::getDamage(int dmg)
{
    if(dmg<=armor)
    {
        armor-=dmg;
        return;
    }
    dmg-=armor;
    hp-=dmg;
}

class Wizard:public Unit
{
    int dodge = 0;
    int min_dmg = 10;
    int max_dmg = 40;
public:
    Wizard(const string & n);

    void attack(Unit *target) override;

    void getDamage(int dmg) override;
};

void Wizard::attack(Unit *target)
{
    int dmg = rand() % (max_dmg - min_dmg) + min_dmg;
    cout<<"Wizard "<<name<<" attacks "<<target->getName()<<" damage is "<<dmg<<endl;
    target->getDamage(dmg);
}
void Wizard::getDamage(int dmg)
{
    if(rand()%100<dodge)
        return;
    hp-=dmg;
}

Wizard::Wizard(const string &n):Unit(n,65)
{
    dodge = 20;
}

class AbstractBuilding
{
protected:
    static int id;
public:
    virtual Unit*createUnit()=0;
    virtual ~AbstractBuilding();

};
int AbstractBuilding::id = 1;

AbstractBuilding::~AbstractBuilding()=default;

class Barracks:public AbstractBuilding
{
public:
    Unit *createUnit() override;
};

Unit *Barracks::createUnit()
{
    return new Warrior("Warrior_"+to_string(id++));
}
class MageTower:public AbstractBuilding
{
public:
    Unit *createUnit() override;
};

Unit *MageTower::createUnit()
{
    return new Wizard("Wizard_"+to_string(id++));
}

int main()
{
    Warrior enemy("Vasya");
    shared_ptr<AbstractBuilding> creator;
    vector<shared_ptr<Unit>> army;
    for (int i = 0; i < rand()%40+10; ++i)
    {
        if(rand()%2==0)
            creator = shared_ptr<Barracks>(new Barracks());
        else
            creator = shared_ptr<MageTower>(new MageTower());
        army.push_back(shared_ptr<Unit>(creator->createUnit()));
    }
    for_each(army.begin(), army.end(),[&enemy](const shared_ptr<Unit>&obj){
        obj->attack(&enemy);
    });
}
