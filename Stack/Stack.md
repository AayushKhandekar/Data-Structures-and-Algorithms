# Stack Implementation in C++

Stack data structure can be imagined as a pile of plates kept on top of each other. Everytime you need a plate, you take the plate on top and you cannot remove the plates below without removing the above plates. 

Stack follows the Last-In-First-Out (LIFO) Principle.

Stack Functions :  

1. isEmpty ( ) : To check if the stack is empty.
2. isFull ( ) : To check is the stack is full.
3. Push ( ) : To add an element to the top in the stack.
4. Pop ( ) : To remove an element from the top in the stack.
5. Peek ( ) : To display the top element of the stack without removing it.

Working of Stack :

1. A pointer 'TOP' is used to keep a track of the element at the top. Initially (or when the stack is empty) the top pointer is set to -1.
2. While pushing an element, increment the top pointer by 1 and then add the element.
3. While popping an element, remove the element and then decrement the top pointer.



