#include "graf.h"

void Graf::addNode(int index, vector<int> edges)
{
    for(Node &i : nodes){
        if(i.getIndex()==index){
            throw GrafException("Istnieje graf o takim indeksie");
        }
        nodes.push_back({index,{}});

    }
    nodes.push_back({index,edges});
}

void Graf::removeNode(int index)
{
    nodes.erase(nodes.begin()+index);
}

void Graf::addIsoNodes(int number)
{
    int index=this->getMaxIndex();
    for(int i =1 ; i<=number; i++){
        nodes.push_back({index+i,{}});
    }
}

int Graf::getMaxIndex()
{
    int temp=0;
    for(Node &n: nodes){
        if(n.getIndex()>temp)
            temp=n.getIndex();
    }
    return temp;
}


Graf::Graf()
{


}

GrafException::GrafException()
{

}

GrafException::GrafException(string m)
{
    this->m = new string(m);
}

/*GrafException::GrafException(char *m)
{
    this->m = new string(m);
}*/

string GrafException::getMessage()
{
    return *m;
}
