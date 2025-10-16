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
        if (head) {
            newEntry->next = head;
        }
        current_size++;
        head = newEntry;
    }

    int List::pop() {
        // TODO: Implement a function that returns the data value of the first
        // element in the list then discard that element.

        if (!head) return  {};

        int res = head->data;
        Element* entryToDelete = head;
        head = head->next;
        delete entryToDelete;
        current_size--;
        return res;
    }

    void List::reverse() {
        // TODO: Implement a function to reverse the order of the elements in the
        // list.

        Element* prev = nullptr;
        Element* current = head;

        while (current) {
            Element* next = current->next;  // store next node
            current->next = prev;           // reverse pointer
            prev = current;                 // move prev forward
            current = next;                 // move current forward
        }

        head = prev; // new head is the last non-null node
    }

    List::~List() {
        // TODO: Ensure that all resources are freed on destruction
        Element* currentElem = head;
        while (currentElem)
        {
            auto elemToDelete = currentElem;
            currentElem = currentElem->next;
            delete elemToDelete;
        }
    }

}  // namespace simple_linked_list