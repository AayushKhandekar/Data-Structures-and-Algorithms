# Queue

- Queues follow First-In-First-Out ( FIFO ).

- Elements are always added from the rear and removed from the front. Example : Line of people at a ticket counter.
 
- There are two pointers, `front` and `rear`. Initially both are set to 0.

- Queue Operations :

    1. Enqueue :
    
        Check if the queue is full before pushing an element. If the queue is not full, add the element from the rear and increase the rear pointer by 1.
    
    2. Dequeue :

        Check is the queue is empty before popping an element from the front. If the queue is not empty, remove the element pointed by the `front` pointer and increment the front pointer by 1. When the `front` and `rear` pointers are equal, it indicates that the queue is empty and hence we set both the pointers to 0.

- Circular Queue :

    1. It is a queue in which the last element is connected to the first element forming a circular structure.

    2. In a normal queue, after enqueue-ing and dequeue-ing multiple times, the there are non-usable spaces before the `front` pointer. This problem is solved by circular queue.

    3. 

 

        

    
