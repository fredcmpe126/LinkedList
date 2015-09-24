#include "Node.h"
using namespace std;
Node::Node(){
    data = 0;
    next = NULL;
}

Node::Node(int new_data){
    data = new_data;
    next = NULL;
}
