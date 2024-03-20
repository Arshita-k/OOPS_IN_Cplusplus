OVERVIEW
1. Objects:-> An entity that can store data and, send  and recieve messages
        -> An instance of class.

2. Class: -> It is a user defined datatype that has its own data members(variables) and member functions
          to operate on its variable. 
       -> It is a group of objects that share common prperties and relationships.
       -> Object is an instance of class.

3. Encapsulation: The mechanism with which the data and functions (manipulating this data) are bound within
               an object definition or into a single unit called class.

4. Data Hiding: A property whereby the internal data structure of an object is hidden from the 
             rest of the program. The data can be accessed only by the functions declared 
             within the class (of that object)

5. Abstraction: The act of representing the essential features of something without including much details.
                Since the classes use the concept of abstraction there are known as abstract data type

6. Inheritance: It is a process by which objects of one class acquires property of another class. Each derived class
                share common characteristics with the class from which it is derived.(Base Class)
    -> Base Class: A class from which other classes are derived. A derived class can inherit 
                 members from a base class.
    -> Derived Class: A class that inherits some or all of its members from another class, called 
                base class

7. Polymorphism: (Ability to take different forms) A property by which we can send the same message to objects of several different classes, and each object can respond in a different way 
                 depending on its class. We can send such a message without knowing to which of the classes the objects belong. In C++, polymorphism is 
                 implemented by means of virtual functions and dynamic binding
            -> Compile Time
              i. Function Overloading
              ii. Operator Overloading
            -> Run time 
              i. Function Overriding
              ii. Virtual Functions

8. Dynamic Binding: also known as late binding means that the code associated with a given procedure call is not known 
                 untill the time of the call at run-time.
                -> The addresses of the functions are determined at run time rather than compile time. 
