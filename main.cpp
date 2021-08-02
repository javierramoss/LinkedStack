#include "linkedstack.hpp"
#include "contact.hpp"

int main()
{
    //LinkedStack of integers using pointers
    std::cout << "Instantiating integers LinkedStack\n";
    LinkedStack<int>* integerStack = new LinkedStack<int>(-1);

    std::cout << "Push numbers from 1 to 5..\n";
    for (int x = 1; x < 6; x++)
        integerStack->push(x);

    std::cout << "Make a new LinkedStack using the copy constructor to display later on..\n\n";
    LinkedStack<int>* copyIntegerStack = new LinkedStack<int>(*integerStack);
    
    std::cout << "Print the stack..\n";
    std::cout << *integerStack << "\n";
    
    std::cout << "Size: " << integerStack->size() << "\n\n";

    std::cout << "Element at the front: " << integerStack->top() << "\n\n";
    
    std::cout << "Pop the 3 elements at the top of the stack..\n";
    for (int x = 0; x < 3; x++)
        std::cout << integerStack->pop() << " was poped\n";
    
    std::cout << "\nNow the new front of the stack: " << integerStack->top() << "\n\n";

    std::cout << "Print the stack again..\n";
    std::cout << *integerStack << std::endl;

    std::cout << "The deep copied LinkedStack using the copy constructor remained unmodified:" << std::endl;
    std::cout << *copyIntegerStack << std::endl;

    std::cout << "Using the copy assignment operator the changes can be seen:" << std::endl;
    *copyIntegerStack = *integerStack;
    std::cout << *copyIntegerStack << "\n";
    
    //LinkedStack of Contact objects using pointers
    std::cout << "Instantiating contacts LinkedStack" << std::endl;
    LinkedStack<Contact>* contactStack = new LinkedStack<Contact>(Contact("none","none","none","none",-1));

    std::cout << "Push 3 contacts to contactStack\n\n";
    contactStack->push(Contact("1", "Charles", "Disick", "4530 New Grove Avenue", 34));
    contactStack->push(Contact("2", "Kylie", "Michaels", "2310 Buena Vista Apartments", 26));
    contactStack->push(Contact("3", "Jackson", "Smith", "1265 New Dawn Apartments", 45));

    std::cout << "Print the stack..\n";
    std::cout << *contactStack;

    std::cout << "Size: " << contactStack->size() << "\n\n";

    std::cout << "Element at the top..\n" << contactStack->top();

    std::cout << "\nPop the 3 elements at the top of the stack..";
    for (int x = 0; x < 3; x++)
        std::cout << "\npoping..\n" << contactStack->pop();

    if (contactStack->empty()) 
        std::cout << "\ncontactStack is now empty\n";

    //deleting
    std::cout << "Freeing memory..\n";
    delete integerStack;
    delete copyIntegerStack;
    delete contactStack; 

    return 0;
}