# Stack implementation using a Doubly Linked List
LinkedStack is a simple implementation of a Stack DS using a Doubly Linked List.

## Installation
Steps for running the examples in `main.cpp`
1. Clone the repo:
```
https://github.com/BigBeakPenguin/LinkedStack.git
```
2. Compile using the command from within the project folder:
```
g++ main.cpp linkedstack.hpp contact.hpp
```
## Usage
LinkedStack can be implemented to a proyect of your own by including `linkedstack.hpp` in your project directory and compiling accordingly. It supports both primitive and abstract data types (such as structs and classes).

To use the LinkedStack DS simply specify the `type` and a undefined variable of the same `type` to pass to the constructor:
```cpp
LinkedStack<type> myLinkedStack(type());
```
The `main.cpp` example file shows the LinkedStack basic functionality using pointers and how to use the copy constructor and copy assignment operators properly. It first creates a LinkedStack for integers, and a LinkedStack for the Contact class defined in `contact.hpp` which represents a person's contact information.

### Member Functions
`empty()` returns `1` when the stack is empty, otherwise `0`.

`size()` returns the current size of the stack.

`top()` returns the element at the top of the stack.

`back()` returns the element at the bottom of the stack.

`pop()` returns the element at the top of the stack and pops it.

`push()` adds a new element `x` to the front of the stack.

## Contributing

Contributions are what make the open source community such an amazing place to be learn, inspire, and create. Any contributions you make are **greatly appreciated**.

1. Fork the Project
2. Create your Feature Branch (`git checkout -b NewBranch`)
3. Commit your Changes (`git commit -m 'Add x'`)
4. Push to the Branch (`git push origin NewBranch`)
5. Open a Pull Request

## License

Distributed under the MIT License. See `LICENSE` for more information.
