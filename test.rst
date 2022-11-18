
.. contents:: Table of Contents

Singleton Design Pattern
========================

Intent
------
Ensure a class has only one instance, and provide a global point of access to it.


Motivation
----------
It is important for some classes to have exactly one instance.
How do we ensure that a class has only one instance and that the instance is easily accessible? 
A global variable makes an object accessible, but it does not keep you from instantiating multiple objects.
A better solution is to make the class itself responsible for keeping track of its sole instance.
The class can ensure that no other instance can be created (by intercepting requests to create new objects), and it can provide a way to access the instance. 
This is the Singleton pattern.


Applicability
-------------
Use the Singleton pattern when
- There must be exactly one instance of a class, and it must be accessible to clients from a well-known access point.
- When the sole instance should be extensible by subclassing, and clients should be able to use an extended instance without modifying their code.


Structure
---------

.. image:: structure.png
	:alt:	Singleton Structure


Participants
------------
**Singleton**
Defines an Instance operation that lets clients access its unique instance. Instance is a class operation (a static member function in C++).


Collaborations
--------------
Clients access a Singleton instance solely through Singleton's Instance operation.


Consequences
------------
.. sectnum::
Controlled access to sole instance
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
The Singleton class encapsulates its sole instance, it can have strict control over how and when clients access it.

Reduced namespace
^^^^^^^^^^^^^^^^^
It avoids polluting the name space with global variables that store sole instances.

More flexible than class operations
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
Another way to package a singleton's functionality is to use class operations (that is, static member functions in C++).
However, this makes it hard to change a design to allow more than one instance of a class.
Moreover, static member functions in C++ are never virtual, so subclasses cannot override them polymorphically.

Permits refinement of operations and representation
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
The Singleton class may be subclassed, and it's easy to configure an application with an instance of this extended class. 
You can configure the application with an instance of the class you need at run-time.

Permits a variable number of instances
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
The pattern makes it easy to change your mind and allow more than one instance of the Singleton class.
