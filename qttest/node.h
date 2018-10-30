#ifndef NODE_H
#define NODE_H
#include <vector>

class Node
{
    int index;
    std::vector<int> edges;
public:

    void addEdge(int e);
    void rEdge(int index);
    int getIndex();

    Node(int, std::vector<int>);
    ~Node();
};

#endif // NODE_H
