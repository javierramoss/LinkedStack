#include "linkedstack.hpp"
#include "contact.hpp"

int main()
{
    //LinkedStack example using integers
    std::cout << "Instantiating integers LinkedStack" << std::endl;
    LinkedStack<int> integerStack(0);

    std::cout << "Push numbers from 1 to 5.." << std::endl;
    for (int x = 1; x < 6; x++) {
        integerStack.push(x);
    }
    
    std::cout << "Print the stack.." << std::endl;
    std::cout << integerStack << std::endl;
    
    std::cout << "Size: " << integerStack.size() << std::endl;

    std::cout << "Element at the front: " << integerStack.top() << std::endl;
    
    std::cout << "Pop the 3 elements at the top of the stack.." << std::endl;
    for (int x = 0; x < 3; x++)
        std::cout << integerStack.pop() << " was poped" << std::endl;
    
    std::cout << "Now the new front of the stack: " << integerStack.top() << std::endl;

    std::cout << "Print the stack again.." << std::endl;
    std::cout << integerStack << std::endl;
    
    //LinkedStack example using Contact objects
    std::cout << "\nInstantiating contacts LinkedStack" << std::endl;
    LinkedStack<Contact> contactStack(Contact("none","none","none","none",-1));

    std::cout << "Push 3 contacts to contactStack" << std::endl;
    contactStack.push(Contact("1", "Charles", "Disick", "4530 New Grove Avenue", 34));
    contactStack.push(Contact("2", "Kylie", "Michaels", "2310 Buena Vista Apartments", 26));
    contactStack.push(Contact("3", "Jackson", "Smith", "1265 New Dawn Apartments", 45));

    std::cout << "Print the stack.." << std::endl;
    std::cout << contactStack << std::endl;

    std::cout << "Size: " << contactStack.size() << std::endl;

    std::cout << "Element at the front: " << contactStack.top() << std::endl;

    std::cout << "Pop the 3 elements at the top of the stack.." << std::endl;
    for (int x = 0; x < 3; x++)
        std::cout << contactStack.pop() << "was poped\n" << std::endl;

    if (contactStack.empty()) 
        std::cout << "contactStack is now empty" << std::endl;

    return 0;
}