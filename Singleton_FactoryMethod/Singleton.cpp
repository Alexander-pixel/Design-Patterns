#include <iostream>
using namespace std;

class Singleton
{
    static Singleton * pt;
    int data = 0;
    Singleton();
public:
    Singleton(const Singleton&obj) = delete;
    Singleton&operator=(const Singleton&obj) = delete;
    static Singleton* getPointer();
    void setData(int val);
    int getData()const;
};
Singleton* Singleton::pt = nullptr;
Singleton::Singleton() = default;

void Singleton::setData(int val)
{
    data = val;
}

int Singleton::getData() const
{
    return data;
}

Singleton *Singleton::getPointer()
{
    if(pt == nullptr)
    {
        pt=new Singleton();
    }
    return pt;
}


int main()
{
    Singleton *a = Singleton::getPointer();
    a->setData(123);
    cout<<a->getData()<<endl;
    Singleton *b= Singleton::getPointer();
    b->setData(234);
    cout<<b->getData()<<endl;
    cout<<a->getData()<<endl;

}
