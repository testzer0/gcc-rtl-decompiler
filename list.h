#ifndef _H_list
#define _H_list

#include <deque>
#include "utility.h"  // for Assert()
using namespace std;

class Node;

template<class Element> class List {

 private:
    deque<Element> elems;

 public:
           // Create a new empty list
    List() {}

           // Returns count of elements currently in list
    int NumElements() const
	{ return elems.size(); }

          // Returns element at index in list. Indexing is 0-based.
          // Raises an assert if index is out of range.
    Element Nth(int index) const
	{ Assert(index >= 0 && index < NumElements());
	  return elems[index]; }

          // Inserts element at index, shuffling over others
          // Raises assert if index out of range
    void InsertAt(const Element &elem, int index)
	{ Assert(index >= 0 && index <= NumElements());
	  elems.insert(elems.begin() + index, elem); }

          // Adds element to list end
    void Append(const Element &elem)
	{ elems.push_back(elem); }

         // Removes element at index, shuffling down others
         // Raises assert if index out of range
    void RemoveAt(int index)
	{ Assert(index >= 0 && index < NumElements());
	  elems.erase(elems.begin() + index); }
          
       // These are some specific methods useful for lists of ast nodes
       // They will only work on lists of elements that respond to the
       // messages, but since C++ only instantiates the template if you use
       // you can still have Lists of ints, chars*, as long as you 
       // don't try to SetParentAll on that list.
    void SetParentAll(Node *p)
        { for (int i = 0; i < NumElements(); i++)
             Nth(i)->SetParent(p); }
    void PrintAll(int indentLevel, const char *label = NULL)
        { for (int i = 0; i < NumElements(); i++)
             Nth(i)->Print(indentLevel, label); }
             

};

#endif