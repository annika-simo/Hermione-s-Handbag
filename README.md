# Hermione-s-Handbag
CS1021 Lab 9

## Introduction
Though small physically, the volume of Hermione’s beaded handbag is actually quite vast! In fact, [it is infinite](https://en.wikipedia.org/wiki/Magical_objects_in_Harry_Potter#Hermione's_handbag). In the Harry Potter series, the small sack Hermione carries, pictured at right, was enough to hold at least a pair of jeans, a sweatshirt, a pair of socks and an invisibility cloak! My sister is a world traveler, but not even she could fit that much stuff in luggage that size! [1](https://harrypotter.fandom.com/wiki/Hermione_Granger%27s_beaded_handbag)

Don’t worry, you don’t have to be a Harry Potter fan to complete this lab. Nor do you have to believe in Wizardry because, in the end, all you need is some C++ and you, too, can create a beaded handbag of your own!

[I solemnly swear that I am up to no good.](https://www.hp-lexicon.org/magic/solemnly-swear-no-good/)

Recall our discussion in class about the difference in C++ between *fundamental* (e.g., `char`, `int`, `bool`, etc) and (precisely) *composite* types. A composite type is any type that is *not* a fundamental type. A helpful definition, I know! A good example of a composite type is an array! Another composite type, and one that we will be exploring in this lab, is the *class type*. Class types are also known as user-defined types. We can see the true power of C++ when we use its syntax and semantics to define our own user-defined types that look and act just like fundamental types. When defined correctly, our fellow programmer can use our user-defined types just like they would, say, an `int` or a `bool` or a `double`. Pretty neat!
  
User-defined types *implement* abstract data types (ADTs). Remember from class the definition of *abstraction*:

> An abstraction is a general model of something. It is a definition that includes only the general characteristics of an object. 

That's the long-winded, technical definition. The short, loose definition of abstraction is "hiding". An ADT hides data *and* process from the user. Do not forget: An ADT is not the same as a user-defined type. The former is a conceptual entity that is implemented (in code) by the latter.

In this lab you are going to write the user-defined types that implement the *Item* and a *Beaded-Bag* ADTs.

## The Item and Beaded-Bag ADTs
Before we can implement the ADTs we must define the ADTs. Recall that we defined an ADT as “a set of data and a set of operations on that data”.

Let's talk first about the *Item* ADT. For data, each *Item* will have a name. The *Item* ADT will have two operations it can perform on its data:
1. Get The Name: This operation will simply return the name of the *Item*.
2. Is Equal?: This operation will simply return whether this Item equals another, according to whether the names of the *Items* match.

The *Item* is a fairly boring ADT. The *Beaded-Bag* ADT is far more magical. First, we will define the data. Like Hermione’s physical bag, the *Beaded-Bag* ADT holds an infinite number of *Items*.

Having defined the data of the Beaded-Bag ADT, we turn our attention to defining its operations. The user of a bag should be able to
1. Insert a new *Item* into the *Beaded-Bag* as long as it is not already in the *Beaded-Bag* -- Hermione does not need two toothbrushes, after all!
2. Query whether the *Beaded-Bag* contains a certain *Item*.
3. Determine how many *Items* the *Beaded-Bag* actually contains.

The following are the specifications of the *Beaded-Bag* ADT's operations:

| Operation |	Task |	Input |	Output |
| --- | --- | --- | --- |
| insert	| Insert an *Item* into the *Beaded-Bag* as long as it is not already present. |	An *Item* to insert. |	Nothing. |
| contains |	Check whether a given *Item* is in the *Beaded-Bag* or not.	| An Item potentially contained in the *Beaded-Bag*. |	True or False depending on whether the given *Item* is contained in the *Beaded-Bag*. |
| size |	Access the number of *Items* contained in the *Beaded-Bag*. |	Nothing.	| The number of *Items* in the *Beaded-Bag*, as an integer. |

## Programming Task and Requirements
Your programming task for this lab is to complete the implementation of the user-defined type that implements the *Item* ADT and write the entire implementation of the *Beaded-Bag* ADT. Your implementation of the *Item* ADT will be done with the `Item` class. Your implementation of the *Beaded-Bag* ADT will be done with the `BeadedBag` class. If you are a Windows C++ programmer, begin with the skeleton .zip in this repository.

Before beginning to code, familiarize yourself with the contents of each of the files:

- `item.h`: Contains the class definition of the `Item` class that implements the *Item* ADT.
- `item.cpp`: Contains the implementation of the member functions in the `Item` class.
- `beadedbag.h`: Contains the class definition of the `BeadedBag` class that implements the *Beaded-Bag* ADT.
- `beadedbag.cpp`: Contains the implementation of the member functions in the `BeadedBag` class.

## `Item` Class
The `Item` class has the following member variables declared:

- `m_name`: A `std::string` used to hold the name of the *Item*.

The `Item` class has a constructor defined/implemented that takes a single parameter, the default name of the item, as a `std::string`, and assigns that parameter to the `m_name` member variable.

The `Item` class has the following member functions declared:
- `std::string getName()`; This member function will return the `m_name` of the *Item*.
- `bool isEqual(Item other)`; This member function returns true if `other`'s `m_name` is equal to this *Item*'s `m_name`.

Stubs of the implementation of those member functions are present in the `item.cpp` file. Your job is to complete their implementation according to the specification above.

BeadedBag Class
You are flying solo on the implementation of the BeadedBag class! You must implement the following member functions for the `BeadedBag` class according to these specifications:
- `void insert(Item to_insert);`: This function will insert `to_insert` into the *Beaded-Bag as long as it is not already present*.
- `bool contains(Item maybe_contained_item);`: This function will return `true` if `maybe_contained_item` is already present in the *Beaded-Bag*; it will return `false` otherwise.
- `int size();`: This function will return the number of *Items* in the *Beaded-Bag*.

You must define the `BeadedBag` class in `beadedbag.h` and you must implement the member functions in the `beadedbag.cpp` file.

Just how do you hold the group or list of *Items* in the *Beaded-Bag*? It seems like a `std::vector` might do the trick? Yes, that's definitely a good idea! When you declare/define a `std::vector` to hold the *Items*, make sure that it is a private member variable.

## Check Me Out
Like previous labs, you will not write a `main` function for this lab. One is provided for you. The provided `main` function will test your implementation. When your main function prints

```
Success
```

you can be confident that your code is correct and you should submit to Gradescope for testing.

## Documentation
All member functions that you write must be commented. You must comment the member functions at their declaration (i.e., in the `.h` files) according to the following specification:

```cpp
/*
 * <function name>
 *
 * <short description of what the function does>
 *
 * input: <short description of all input parameters>
 * output: <short description of all output parameters
 *          and the return value>
 */
 ```
 
## Critical Thinking Task
There are many examples of inheritance hierarchies in the real world. For instance, the professional sports leagues in the United States can be ordered into an inheritance hierarchy.

Your job in this Critical Thinking Task is to come up with real-world example of an inheritance hierarchy and document it!

## Critical Thinking Requirement
In writing (500 words or less) or graphically, describe a real-world example of an inheritance hierarchy. The real-world example that you document must have at least two layers of base/derived classes. You must clearly indicate the Is-A relationships among the classes and which elements are instances of a base/derived class. The more creativity that you use in documenting your example, the better!

## Submission
Submit your `beadedbag.h`, `beadedbag.cpp`, `item.h` and `item.cpp` files to Gradescope. Your response to the Critical-Thinking Task should be named `hierarchy.pdf`.

## Associated Learning Objectives
1. Implement basic ADTs using C++.
2. Use `std::vectors`.
3. Distinguish between ADTs and data structures.
4. Understand class hierarchies and the Is-A relationship.
