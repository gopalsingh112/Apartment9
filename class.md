Formal definition of the principle, along with an explanation in your own words.
The Open Closed Principle addresses the "O" of the five SOLID programming building principles  to make productive and viable code that is more readable, maintainable, easy to upgrade and modify. 
It is described by Robert C. Martin and he considered this as “the most important principle of object oriented design.” 
Definition : 
“Software entities (classes, modules, functions, etc.) should be open for extension, but closed for modification.”
 
Modules that conform to the open-closed principle have two essential attributes. 
“Open For Extension”.
 This implies that the conduct of the module can be extended. As the requirements of the application changes,  we can make the changes in the module behaviour by implementing new code with the  new features 
“Closed for Modification”.
 This means that  the source code of such a module stays untouched.
Because making changes directly to those entities may result in unwanted consequences.
It is possible that a bug can be introduced in the system, increasing additional complexity to the system.
The worst case scenario would be break the existing system.
Exceptional cases where modification of code is absolutely necessary,
 	
Existing defect in the module. 
A module where classes are loosely coupled. 
 
 
 
Make sure below points if modification is unavoidable,  
Keep the current functions, Classes, modules as they are or immutable.  
Extend the existing Classes, functions or modules in a composable way so that they expose the new feature or functionality possibly in a different name, (avoid inheritance) 
 
 
 
	How to design for open closed principle  
 
Implementation inheritance
		It uses abstract classes and methods. We can define abstract methods as extension potins.
Interface inheritance
		In this, the client's dependency on a class is replaced with the interfaces.
 
Open Closed Principle promotes the use of interfaces to enable you to adapt the functionality of your application without changing the existing code and to make it more resilient  to the changing requirements without rewriting code again and again.
 
	Benefits of adhering to the Open Closed Principle
It covers how software entities can be changed by extension.
Can potentially streamline code maintenance.
Minimize the risk of breaking existing code base.
Only new changes will have to be deployed.
If changes no longer serve user needs, they can be reverted back.
