#include "simple_linked_list.h"

#include <stdexcept>

namespace simple_linked_list {

std::size_t List::size() const {
    // TODO: Return the correct size of the list.
    return current_size;
}

void List::push(int entry) {
    // TODO: Implement a function that pushes an Element with `entry` as data to
    // the front of the list.
    Element* newEntry = new Element(entry);
    if (!head){
        head = newEntry;
    } else {
        if (lastEntry){
            newEntry->next = lastEntry;
        } else {
            newEntry->next = head;
        }
    }
    current_size++;
    lastEntry = newEntry;


    // Element* newEntry = new Element(entry);
    // if (!head){
    //     head = newEntry;
    // } else {
    //     if (current_size == 1){
    //         head->next = newEntry;
    //     } else {
    //         Element* elemPtr{head->next};
    //         while (elemPtr->next)
    //         {
    //             elemPtr = elemPtr->next;
    //         }
    //         elemPtr->next = newEntry;
    //     }
    // }
    // newEntry->next = nullptr;
    // current_size++;
}

int List::pop() {
    // TODO: Implement a function that returns the data value of the first
    // element in the list then discard that element.
    
    if (!lastEntry) return  {};

    int res = lastEntry->data;
    Element* entryToDelete = lastEntry;
    lastEntry = lastEntry->next;
    delete entryToDelete;
    current_size--;
    return res;
    
    // if (!head) return {};
    // int res = head->data;
    // Element* headToDelete = head;
    // head = head->next;
    // delete headToDelete;
    // current_size--;
    // return res;
}

void List::reverse() {
    // TODO: Implement a function to reverse the order of the elements in the
    // list.

    auto currentElem = lastEntry;

    while (currentElem != head){
        Element* nextElem = currentElem->next;
        currentElem->next = currentElem;
        currentElem = nextElem;
    }
    std::swap(head, lastEntry);
    


    // if (!head) return;
    // Element* currentElem{head};
    // Element* nextElem{head->next};
    // while (nextElem)
    // {
    //     nextElem = currentElem->next;
    //     currentElem->next = currentElem;
    // }
    // head = elemPtr;
}

List::~List() {
    // TODO: Ensure that all resources are freed on destruction
    // if (!head) return;
    // Element* elemPtr{head->next};
    // while (elemPtr->next)
    // {
    //     Element* elemToDelete{elemPtr};
    //     elemPtr = elemPtr->next;
    //     delete elemToDelete;
    // }
    // delete elemPtr;
    // delete head;
    // elemPtr = nullptr;
    // head = nullptr;
}

}  // namespace simple_linked_list