#ifndef GRAF_H
#define GRAF_H

#include "node.h"

#include <QString>
#include <exception>
#include <vector>
//#include <string.h>



using namespace std;
class Graf
{
    int maxIndex=0;
    std::vector<Node> nodes;

public:
    void addNode(int index, std::vector<int> edges);
    void removeNode(int index);
    void addIsoNodes(int number);

    int getMaxIndex();
    Graf();
};


//Klasa wyjatkow w grafie
class GrafException : public exception {
    string * m;

public:
    GrafException();
    GrafException(string m);
   // GrafException(char* m);
    string getMessage();

};

#endif // GRAF_H
