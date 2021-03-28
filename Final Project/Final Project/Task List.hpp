#pragma once

#include "SecondaryFactory.hpp"
#include "MainFactory.hpp"
#include <vector>
#include <iterator>
#include <fstream>

class TaskList
{
    vector<Notification*> tasks;
    
public:
    void find_by_title(const string & title);
    void find_by_comment(const string & comment);
    
    void addTask(Notification* &obj);
    void removeTask(const string & title);
    
    int start_menu()const;
    void make_action(int option);
    
    void print()const;
    
    void save(fstream &fs);
    void load(fstream &fs);
    
    void editTask(Notification* &obj);
    
    const string & getString()const;
};


