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
