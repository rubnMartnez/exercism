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

        Element* currentElem = head;
        Element* oldElem = currentElem;

        while (currentElem) {
            auto tmpNext = currentElem->next;
            currentElem->next = oldElem;
            if (tmpNext) {
                oldElem = currentElem;
                currentElem = tmpNext;
            }
            else {
                head = currentElem;
                break;
            }
        }
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