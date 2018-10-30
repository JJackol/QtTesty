#include "node.h"


void Node::addEdge(int e)
{
    edges.push_back(e);
}

void Node::rEdge(int index)
{
    edges.erase(edges.begin()+index);
}

int Node::getIndex()
{
    return index;
}

Node::Node(int index , std::vector<int> edges)
{
    this->index=index;
    this->edges=edges;
}
Node::~Node(){
    ;
}
