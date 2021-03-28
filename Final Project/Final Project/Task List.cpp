#include "Task List.hpp"

int TaskList::start_menu()const
{
    int option = 0;
    cout << "Choose the option: " <<endl;
    cout << "Add new task (1)" <<endl;
    cout << "Remove task (2)" <<endl;
    cout << "Edit task (3)" <<endl;
    cout << "Read information from file (4)" <<endl;
    cout << "Save information to file (5)" <<endl;
    cout << "Print information (6)" << endl;
    cout << "Find particular task (7)" << endl;
    cout << "Exit (8)" << endl;
    
     
    while (option > 7 || option < 1)
    {
        cin >> option;
    }
    
    cout<<endl<<endl;
    
    return option;
}

void TaskList::make_action(int option)
{
    if(option == 1)
    {
        int task_option = 0;
        cout << "If you want to create main planned task, press 1" << endl;
        cout << "If you want to create secondary planned task, press 2" << endl;
        cout << "If you want to create main unplanned task, press 3" << endl;
        cout << "If you want to create secondary unplanned task, press 4" << endl;
        
        do{
            cin >> task_option;
        }while(task_option < 1 || task_option > 4);
        
        if(task_option == 1 || task_option == 3)
        {
            AbstractFactory * af = new MainFactory();
            if(task_option == 1)
            {
                Notification * note = nullptr;
                note = af->createPlanned();
                addTask(note);
                delete note;
            }
            if(task_option == 3)
            {
                Notification * note = nullptr;
                note = af->createUnplanned();
                addTask(note);
                delete note;
            }
            delete af;
        }
        if(task_option == 2 || task_option == 4)
        {
            AbstractFactory * af = new SecondaryFactory();
            if(task_option == 2)
            {
                Notification * note = nullptr;
                note = af->createPlanned();
                addTask(note);
                delete note;
            }
            if(task_option == 4)
            {
                Notification * note = nullptr;
                note = af->createUnplanned();
                addTask(note);
                delete note;
            }
            delete af;
        }
    }
    else if(option == 2)
    {
        string title;
        cout << "Enter the title to delete from list: " << endl;
        getline(cin, title);
        
        removeTask(title);
    }
    else if(option == 3)
    {
        string title;
        cout << "Enter the title of task to edit: " << endl;
        getline(cin, title);
        
        for (int i = 0; i<tasks.size(); i++)
        {
            if(title == tasks[i]->getTitle())
            {
                editTask(tasks[i]);
            }
        }
    }
    else if (option == 4)
    {
        // read info from file
        fstream fs("TaskList.txt", ios::in);
        
        if (fs.is_open())
        {
            load(fs);
            fs.close();
        }
    }
    else if (option == 5)
    {
        // save info to file
        fstream fs("TaskList.txt", ios::out);
        
        if (fs.is_open())
        {
            save(fs);
            fs.close();
        }
    }
    else if (option == 6)
    {
        this->print();
    }
    else if(option == 7)
    {
        int searching_method = 0;
        cout << "Find by title (1)"<< endl;
        cout << "Find by comment (2)" << endl;
        
        do {
            cin >> searching_method;
        } while (searching_method > 2 || searching_method < 1);
        
        string str = getString();
        
        if(searching_method == 1)
        {
            find_by_title(str);
        }
        else if (searching_method==2)
        {
            find_by_comment(str);
        }
    }
    else if(option == 8)
    {
        cout << "Bye!" << endl;
        return;
    }
}

void TaskList::addTask(Notification* &obj)
{
    tasks.push_back(obj);
}

void TaskList::removeTask(const string & title)
{
    for (int i = 0; i<tasks.size(); i++)
    {
        if(title == tasks[i]->getTitle())
        {
            tasks.erase(tasks.begin() + i);
        }
    }
    cout << "Task has been removed." << endl;
}


void TaskList::editTask(Notification* &obj)
{
    int option = 0;
    cout << "Choose the field to edit: " << endl;
    cout << "Title (1)" << endl;
    cout << "Comment (2)" << endl;
    
    do {
        cin >> option;
    } while (option > 4 || option < 1);
    cout << endl;
    
    string str = getString();
    
    if(option == 1)
    {
        obj->setTitle(str);
    }
    if(option == 2)
    {
        obj->setComment(str);
    }
    cout << "Task has been edited." << endl;
}

void TaskList::print()const
{
    for (int i = 0; i<tasks.size(); i++)
    {
        tasks[i]->print();
        cout << endl;
    }
}

void TaskList::save(fstream &fs)
{
    for (int i = 0; i<tasks.size(); i++)
    {
        tasks[i]->save(fs);
    }
    cout << "Tasks has been saved." << endl;
}

void TaskList::load(fstream &fs)
{
    vector<string> buf;
    string str;
    while(!fs.eof())
    {
        getline(fs, str);
        buf.push_back(str);
    }
    for (auto item : buf)
    {
        cout<<item<<endl;
    }
}

void TaskList::find_by_title(const string &title)
{
    for (int i = 0; i<tasks.size(); i++)
    {
        if(tasks[i]->getTitle() == title)
        {
            tasks[i]->print();
        }
    }
}

void TaskList::find_by_comment(const string &comment)
{
    for (int i = 0; i<tasks.size(); i++)
    {
        if(tasks[i]->getComment() == comment)
        {
            tasks[i]->print();
        }
    }
}

const string & TaskList::getString()const
{
    string str;
    cout << "Enter the string: " <<endl;
    getline(cin, str);
    
    return str;
}
