#include <iostream>
#include <malloc.h>
#include <vector>
#include <algorithm>
#include <unordered_map>
#include <stack>
using namespace std;

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

struct node *root = nullptr;

struct node* create();
int size(struct node*);
int height(struct node*);
void insert(struct node**, int);
void del(struct node**, int);
void display(struct node*);
void display2(struct node*); //display without recursion
int smallestlargest(struct node*);
int largestsmallest(struct node*);
int nthelement(struct node*, int);


int main()
{
    /*insert(&root, 10);
    insert(&root, 5);
    insert(&root, 15);
    insert(&root, 100);
    insert(&root, 101);
    insert(&root, 17);
    display(root);
    cout << endl << "The height is " << height(root);
    cout << endl << "The size is  " << size(root) << endl;
    del(&root, 102);
    display2(root);*/

    string str = "hello";

    for (auto c : str)
        cout << c;
    

    return 0;
}


void insert(struct node **n, int num)
{
    if (*n == nullptr)
    {
        *n = static_cast<node*>(malloc(sizeof(node)));
        (*n)->left = (*n)->right = nullptr;
        (*n)->data = num;
    }
    else if ((*n)->data == num)
    {
        cout << "Number already exists in tree!" << endl;
    }
    else if ((*n)->left == nullptr && (*n)->right == nullptr)
    {
        node* temp = static_cast<node*>(malloc(sizeof(node)));
    	temp->left = temp->right = nullptr;
        temp->data = num;
	    if((*n)->data < num)
	    {
            (*n)->right = temp;
	    }
        else
        {
            (*n)->left = temp;
        }
    }
    else if((*n)->data < num && (*n)->right == nullptr)
    {
        node* temp = static_cast<node*>(malloc(sizeof(node)));
        temp->left = temp->right = nullptr;
        temp->data = num;
        (*n)->right = temp;
    }
    else if((*n)->data > num && (*n)->left == nullptr)
    {
        node* temp = static_cast<node*>(malloc(sizeof(node)));
        temp->left = temp->right = nullptr;
        temp->data = num;
        (*n)->left = temp;
    }
    else if ((*n)->data < num)
    {
        insert((&(*n)->right), num);
    }
    else
    {
        insert((&(*n)->left), num);
    }
}

void display(struct node *p)
{
	if(p == nullptr)
	{
        return;
	}
    else
    {
        display(p->left);
        cout << p->data << ", ";
        display(p->right);
    }
}

void display2(struct node* p)
{
    stack<node*> s;
    struct node* c = p;
    do
    {
        while (c) {
			s.push(c);
			c = c->left;
        }
	    
        cout << s.top()->data << ", ";
        c = s.top()->right;
        s.pop();
	    
    } while (c || !s.empty());
}

int height(struct node *p)
{
    if (p == nullptr)
    {
        return 0;
    }
    else
    {
        int l = height(p->left);
        int r = height(p->right);
        if (l < r)
            return r + 1;
        else
            return l + 1;
    }
}

int size(struct node *p)
{
    if (p == nullptr)
        return 0;
    else
        return size(p->left) + size(p->right) + 1;
}

int smallestlargest(struct node* p)
{
    while (p->left != nullptr)
        p = p->left;
    return p->data;
}

int largestsmallest(struct node* p)
{
    while (p->right != nullptr)
        p = p->right;
    return p->data;
}

void del(struct node** n, int num)
{
    if (*n == nullptr)
    {
        cout << "Tree is empty!" << endl;
    }
    else if ((*n)->data == num)
    {
        if ((*n)->left == nullptr && (*n)->right == nullptr)
        {
            free(*n);
            *n = nullptr;
        }
        else if ((*n)->right == nullptr)
        {
            struct node* temp = *n;
            (*n) = (*n)->left;
            free(temp);

        }
        else
        {
            int t = smallestlargest(((*n)->right));
            (*n)->data = t;
            del(&(*n)->right, t);
        }
    }
    else if (((*n)->left == nullptr && (*n)->right == nullptr) || ((*n)->left == nullptr && (*n)->data > num) || ((*n)->right == nullptr && (*n)->data < num))
    {
        cout << "Element does not exist in tree" << endl;
    }
    else if ((*n)->left != nullptr && (*n)->left->data == num)
    {
        if ((*n)->left->left == nullptr && (*n)->left->right == nullptr)
        {
            free((*n)->left);
            (*n)->left = nullptr;
        }
        else if ((*n)->left->right == nullptr)
        {
            struct node* temp = (*n)->left;
            (*n)->left = (*n)->left->left;
            free(temp);
        }
        else
        {
            int t = smallestlargest((*n)->left->right);
            (*n)->left->data = t;
            del(&(*n)->left->right, t);
        }
    }
    else if ((*n)->right != nullptr && (*n)->right->data == num)
    {
        if ((*n)->right->left == nullptr && (*n)->right->right == nullptr)
        {
            free((*n)->right);
            (*n)->right = nullptr;
        }
        else if ((*n)->right->left == nullptr)
        {
            struct node* temp = (*n)->right;
            (*n)->right = (*n)->right->right;
            free(temp);
        }
        else
        {
            int t = largestsmallest((*n)->right->left);
            (*n)->right->data = t;
            del(&(*n)->right->left, t);
        }
    }
    else if ((*n)->data < num)
    {
        del(&(*n)->right, num);
    }
    else
    {
        del(&(*n)->left, num);
    }
}

int nthelement(node* p, int i)
{
    if (i < 0 || i >= size(p))
    {
        return NULL;
    }
    else if (i == p->data) {
        return p->data;
    }
    else if (i < size(p->left))
        return nthelement(p->left, i);
    else
        return nthelement(p->right, i - size(p->left) - 1);
}
