#ifndef ND_LIST_H
#define ND_LIST_H

namespace nd
{

template <typename t> class LinkedList
{
public :

struct Iter;
struct Node;

struct Iter
{
    LinkedList::Node * _n;
    Iter(Node * __n) : _n(__n) {}
    void forward()
    {
        _n = _n->next;
    }
    void back()
    {
        _n = _n->prev;
    }
    t operator*(void)
    {
        return _n->val;
    }
    bool operator!=(const Iter & it)
    {
        return (_n != it._n);
    }
    bool operator==(const Iter & it)
    {
        return (_n == it._n);
    }
};

struct Node
{
    t val;
    Node * prev;
    Node * next;
};


void push_back(const t & toadd)
{
    if (__size == 0)
    {
        root = new Node;
        root->val = toadd;
        root->next = new Node;
        lastempty = root->next;
        lastempty->prev = root;
        root->prev = NULL;
        __size++;
        return;
    }
    /* else */
    lastempty->val = toadd;
    lastempty->next = new Node;
    lastempty->next->prev = lastempty;
    lastempty = lastempty->next;
    __size++;
    return ;
}

Iter begin()
{
    return Iter(root);
}

Iter end()
{
    return Iter(lastempty);
}

private :

int __size = 0;
Node * root;
Node * lastempty;

};

}

#endif