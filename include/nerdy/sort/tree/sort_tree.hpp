#include <vector>
#include <cmath>
#include <iostream>

namespace nd
{

template< typename tp > class sort_tree
{

public :
    enum KEY
{
	MIN,
	MAX
};

private :

template <typename t> struct tree_node
{
    tree_node<t> * _left = nullptr;
    tree_node<t> * _right = nullptr;
    t * val;
};

typedef std::vector< tree_node<tp>* > path_home;

tree_node<tp> root;
tp * _arr = 0;
int size = 0;
KEY KEY_VAL;
bool (sort_tree<tp>::*compare_function)(const tp & , const tp &) = 0;

bool compare_min (const tp & a1, const tp & a2) /* For min */
{
	if (a1 < a2)
		return true;
	else
		return false;
}

bool compare_max(const tp & a1, const tp & a2) /* For Max */
{
	if (a1 < a2)
		return false;
	else
		return true;
}

tp & build_tree(tp * arr, int a, int b, tree_node<tp> * tn)
{
    std::cout << a << "    " << b << " \n" ;
	if (a == b)
       {
            tn->val = &arr[a];
            return arr[a];
        }
       /* if (std::abs(a - b) == 1){
            if (arr[a] < arr[b]){
            tn->val = &arr[a]; return arr[a];}
            else{
            tn->val = &arr[b]; return arr[b];}
        }*/
        else
        {
            int leftId = ( a + b ) / 2 + 1; /* For right side */
            int rightId = ( a + b ) / 2; /* For left side */
            tn->_left = new tree_node<tp>;
            tn->_right = new tree_node<tp>;
            int * lSide = &(build_tree(arr, a, rightId, tn->_left));
            int * rSide = &(build_tree(arr, leftId, b, tn->_right));
            if ((*this.*compare_function)(*lSide, *rSide)) {
                tn->val = lSide;
                return *lSide;
            }
            else{
                tn->val = rSide;
                return *rSide;
            }
        }
}

tree_node<tp> * find_node(int idx, path_home & ph, tree_node<tp> * current, int a , int b)
{
    std::cout << a << "    " << b << " \n";
	if (a != b)
	{
		ph.push_back(current);
		std::cout << "hello \n";
		std::cout << "ph value index " << *(ph[ph.size()-1]->val) << std::endl;
		int mid = (a+b) / 2;
		if ( idx <= mid )
		{
			return find_node(idx , ph, current->_left, a, mid);
		}
		else
		{
			return find_node(idx, ph, current->_right, mid+1 , b);
		}
	}
	else
	{
	    std::cout << "CURRENT  : "<<  current << "\n";
		return current;
	}
}

/*void go_back(path_home & ph, tree_node<tp> * current , tp * lastwin, int path_idx=0)
{
    std::cout << "SIZEOF PATHOHOME : " << ph.size() << std::endl;
    for (int i = 0 ; i < ph.size(); i++)
    {
        std::cout << *(ph[i]->val) << std::endl;
    }
    std::cout << ph[ph.size()-path_idx-1]->_left << std::endl;
    std::cout << current << std::endl;
    std::cout << ph[ph.size()-path_idx-1]->_right << std::endl;
    std::cout << std::endl;
    if (current == ph[ph.size()-path_idx-1]->_left)
    {
        std::cout << "here";
        if (*lastwin < *(ph[ph.size()-path_idx-1]->_right->val))
        {
            ph[ph.size()-path_idx-1]->val = lastwin;
            go_back(ph, ph[ph.size()-path_idx-1], lastwin, path_idx+1);
        }
        else
        {
            return ;
        }
    }
    else
    {
        std::cout << "else herle \n";
        if (*lastwin < *(ph[ph.size()-path_idx-1]->_left->val))
        {
            std::cout << "last win " << *lastwin << std::endl;
            ph[ph.size()-path_idx-1]->val = lastwin;
            go_back(ph, ph[ph.size()-path_idx-1], lastwin, path_idx+1);
        }
        else
        {
            return ;
        }
    }
    std::cout << "helo \n";
}*/

tp & rebuild_part(int a , int b, tree_node<tp> * tn, tp & new_value)
{

}

public :

sort_tree(tp * arr ,int size_,  KEY KEY_VAL_ = KEY::MIN) : KEY_VAL(KEY_VAL_)
{
    if (KEY_VAL_ == KEY::MIN)
		compare_function = &sort_tree<tp>::compare_min;
	else
		compare_function = &sort_tree<tp>::compare_max;
	build_tree(arr, 0, size_, &root);
	_arr = arr;
	size = size_;
}

sort_tree()
{

}

const tp & get_value ()
{
	return *root.val;
}

/* These two functions is under dev. */
void insert(int idx, tp  & value)
{

}

void change_value(int idx, tp  & value)
{
	/*static path_home ph;
	int a = 0;
	int b = size;

	tree_node<tp> * FN = find_node(idx , ph, &root, a , b);
	_arr[idx] = value;*/
	_arr[idx] = value;
	int mid = size / 2 ;
	if ( idx <= mid )
    {
        tp & value = build_tree(_arr , 0, mid, root._left);
        if (*(root._right->val) > value)
        {
            root.val = &value;
        }
    }
    else
    {
        tp & value = build_tree(_arr, mid+1, size, root._right);
        if (*(root._left->val) > value)
        {
            root.val = &value;
        }
    }
}

void push_back(tp & value);
/* */

};

}



int main () //test
{
	int uiui [] = { 7, 2, 12 ,13, 1, 9};
	int val = 88;
	nd::sort_tree<int> st(uiui, 6, nd::sort_tree<int>::KEY::MAX);

	st.change_value(1, val);

		std::cout << std::endl << std::endl << st.get_value() << std::endl;
	return 0;

}
