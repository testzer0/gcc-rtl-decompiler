#ifndef _H_list
#define _H_list

#include <deque>
#include "utility.h"  // for Assert()
using namespace std;

class Node;

/**
 *  A custom deque-based class for storing and manipulating lists of objects in the abstract syntax tree.
 */
template<class Element> class List {

 private:
    deque<Element> elems;

 public:
    /**
     *  default constructor, creates an empty list.
     */
    List() {}

    /**
     *  returns the number of elements currently in the list.
     *  @return number of elements in list
     */
    int NumElements() const
	  { return elems.size(); }

    /**
     *  Returns element at index in list. Indexing is 0-based.
     *  Raises assert if index out of range
     *  @param index index of element to be returned
     *  @return element at the desired index
     */
    Element Nth(int index) const
	{ Assert(index >= 0 && index < NumElements());
	  return elems[index]; }

    /**
     *  Inserts element at index, shuffling over others
     *  Raises assert if index out of range
     *  @param elem element to be inserted
     *  @param index index at which element is to be inserted
     */
    void InsertAt(const Element &elem, int index)
	{ Assert(index >= 0 && index <= NumElements());
	  elems.insert(elems.begin() + index, elem); }

    /**
     *  Adds element to list end
     *  @param elem element to be added
     */
    void Append(const Element &elem)
	{ elems.push_back(elem); }

    /** 
     *  Removes element at index, shuffling down others
     *  Raises assert if index out of range
     *  @param index index at which element is to be removed
     */
    void RemoveAt(int index)
	{ Assert(index >= 0 && index < NumElements());
	  elems.erase(elems.begin() + index); }
          
    /**
     *  Sets node p as the parent for each node in the list
     *  @param p parent-to-be node
     */
    void SetParentAll(Node *p)
        { for (int i = 0; i < NumElements(); i++)
             Nth(i)->SetParent(p); }

    /**
     *  Prints all nodes in the list with an appropriate indentation level
     *  @param indentLevel indentation level at which the list is to be printed
     */
    void PrintAll(int indentLevel, const char *label = NULL)
        { for (int i = 0; i < NumElements(); i++)
             Nth(i)->Print(indentLevel, label); }
             

};

#endif