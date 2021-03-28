#include"RarCompression.h"
#include"ZipCompression.h"
#include"Archiver.h"
#include<memory>

int main()
{
    shared_ptr<Archiver> archiver(new Archiver(new ZipCompression()));
    archiver->compress("my_file.txt");
    archiver->setStrategy(new RarCompression());
    archiver->compress("one_more_file");

}