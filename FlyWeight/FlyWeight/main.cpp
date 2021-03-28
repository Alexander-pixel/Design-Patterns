#include "Parse.hpp"

int main()
{
    Parse parser;
    vector<Unit*> units = parser.parse();

    for (Unit* unit : units)
    {
        unit->info();
        cout << endl;
    }
    for (Unit* unit : units)
    {
        delete unit;
    }
}
