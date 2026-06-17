# 🔷 Object-Oriented Programming in C++

A structured collection of C++ programs covering all four pillars of OOP — **Encapsulation, Abstraction, Inheritance, and Polymorphism** — built across 7 assignments with additional standalone concept files and STL practice.

Written during the second year at TIET, this repo progresses from C++ basics all the way through templates, operator overloading, virtual functions, and the Standard Template Library.

---

## 📂 Repository Structure

```
OOPS-Codes/
├── Assignment 1/    → C++ basics & I/O (10 programs)
├── Assignment 2/    → Classes, structs, scope & namespaces (7 programs)
├── Assignment 3/    → Friend functions & inline functions (7 programs)
├── Assignment 4/    → Constructors & destructors (4 programs)
├── Assignment 5/    → Inheritance — all types (11 programs)
├── Assignment 6/    → Polymorphism — virtual functions & abstract classes (6 programs)
├── Assignment 7/    → Operator overloading (7 programs)
├── STL/             → Standard Template Library (vector, stack, queue, deque)
├── Standalone/      → Deep-dives: templates, exception handling, friend functions, etc.
```

---

## 🗂️ Assignment Breakdown

### Assignment 1 — C++ Basics & I/O (10 programs)
| File | Topic |
|------|-------|
| `program1.cpp` | Hello World, `cout`, `cin` |
| `program2.cpp` | Variables — `int`, `float`, `char` |
| `program3.cpp` | Arithmetic operators |
| `program4.cpp` | Celsius to Fahrenheit conversion |
| `program5.cpp` | String output & escape sequences |
| `program6.cpp` | Swap two numbers |
| `program7.cpp` | XOR swap (bitwise) |
| `program8.cpp` | Library fine calculator (`if/else`) |
| `program9.cpp` | Calculator with `switch/case` |
| `program10.cpp` | Even/odd check |

### Assignment 2 — Classes, Structs, Scope & Namespaces (7 programs)
| File | Topic |
|------|-------|
| `program1.cpp` | `struct` — Student record |
| `program2.cpp` | `class` — access specifiers (`private`, `public`) |
| `program3.cpp` | `this` pointer |
| `program4.cpp` | Rectangle class with member functions |
| `program5.cpp` | Complex number class |
| `program6.cpp` | Scope resolution operator `::` |
| `program7.cpp` | Namespaces |

### Assignment 3 — Friend Functions & Inline (7 programs)
| File | Topic |
|------|-------|
| `Program1.cpp` | Friend function basics |
| `Program2.cpp` | Friend function across two classes (forward declaration) |
| `Program3.cpp` | Forward declaration & friend |
| `Program4.cpp` | Friend function with two classes |
| `Program5.cpp` | Rectangle area using friend |
| `Program6.cpp` | `inline` function — cube calculation |
| `Program7.cpp` | Static data members & static functions |

### Assignment 4 — Constructors & Destructors (4 programs)
| File | Topic |
|------|-------|
| `program1.cpp` | Default constructor — Rectangle |
| `program2.cpp` | Parameterized constructor |
| `program3.cpp` | Constructor with `this` pointer |
| `program4.cpp` | Constructor in Student class |

### Assignment 5 — Inheritance (11 programs)
| File | Topic |
|------|-------|
| `Program1.cpp` | Single inheritance — Teacher/Student |
| `Program2.cpp` | Single inheritance basics |
| `Program3.cpp` | `protected` access in inheritance |
| `Program4.cpp` | Single inheritance with constructors |
| `Program5.cpp` | Multilevel inheritance |
| `Program6.cpp` | Book hierarchy |
| `Program7.cpp` | Speedometer (derived class) |
| `Program8.cpp` | LibraryUser — multiple inheritance |
| `Program9.cpp` | Vehicle hierarchy |
| `Program10.cpp` | Person → Student/Employee (multilevel) |
| `inheritance.cpp` | Inheritance revision |

### Assignment 6 — Polymorphism (6 programs)
| File | Topic |
|------|-------|
| `program1.cpp` | Compile-time polymorphism — function overloading |
| `program1ii.cpp` | Runtime polymorphism — `virtual` functions |
| `program2.cpp` | Virtual function & `vtable` |
| `program3.cpp` | Pure virtual function |
| `program4.cpp` | Virtual destructor |
| `program5.cpp` | Abstract class with constructor |

### Assignment 7 — Operator Overloading (7 programs)
| File | Topic |
|------|-------|
| `program1b.cpp` | Operator overloading basics |
| `Q3.cpp` | Unary minus operator |
| `Q4a.cpp` | Arithmetic operators (+, -, *, /) — Complex class |
| `Q4b.cpp` | Relational operator `==` |
| `Q4c.cpp` | Subscript operator `[]` |
| `Q5.cpp` | Complex number — full operator suite |
| `Q6.cpp` | Time class with operator overloading |
| `Q7.cpp` | Pre/post increment operators |

---

## 📚 Standalone Concept Files

| File | Topic |
|------|-------|
| `basics.cpp` | `this` keyword deep-dive |
| `class.cpp` | `enum` and custom variables |
| `class2.cpp` | Constructor types — Player class |
| `constructors.cpp` | Rectangle with constructor |
| `typesconstruc.cpp` | Default, parameterized, copy constructors — Student class |
| `functionoverloading.cpp` | Function overloading (structures + multiple signatures) |
| `singleinherit.cpp` | Single inheritance |
| `singleinheritconstructor.cpp` | Inheritance with constructors |
| `multipleinheritance.cpp` | Multiple inheritance |
| `virtualbaseclass.cpp` | Virtual base class (Diamond problem) |
| `inheritance.cpp` | Inheritance with `protected` |
| `operatoroverloading.cpp` | Unary minus overloading |
| `binaryoperator.cpp` | Binary operator overloading |
| `binary2.cpp` | `obj + scalar` overloading |
| `unary2friend.cpp` | Pre/post increment via friend function |
| `friendfun.cpp` | Friend of multiple classes |
| `friendfun2.cpp` | Friend function — triangle area |
| `pointertoobj.cpp` | Pointer to object (`->` operator) |
| `templates.cpp` | Function templates with multiple types |
| `templates2.cpp` | Class template with non-type parameter |
| `exception.cpp` | Exception handling — `try/catch/throw` |
| `1.cpp` | Variables & basics revision |
| `2.cpp` | Conditional statements revision |
| `3.cpp` | Access specifiers + `cmath` |

---

## 📦 STL (Standard Template Library)

| File | Topic |
|------|-------|
| `vector.cpp` | `vector<int>` — push, display, iterators |
| `vector2.cpp` | vector `size()`, `push_back()`, `pop_back()` |
| `stack.cpp` | `stack<int>` — `push`, `pop`, `top` |
| `queue.cpp` | `queue<int>` — `push`, `pop`, `front`, `back` |
| `deque.cpp` | `deque` — double-ended queue |

---

## 🧠 OOP Pillars Covered

| Pillar | Concepts |
|--------|----------|
| **Encapsulation** | `private`/`public`/`protected`, getter/setter methods, `this` pointer |
| **Abstraction** | Abstract classes, pure virtual functions, interface design |
| **Inheritance** | Single, multilevel, multiple, virtual base class (diamond problem) |
| **Polymorphism** | Function overloading, operator overloading, virtual functions, runtime binding |

---

## 🛠️ How to Run

```bash
g++ filename.cpp -o output
./output
```

---

## 🏫 Course Info

**Course:** Object-Oriented Programming  
**Language:** C++  
**Institute:** Thapar Institute of Engineering and Technology  
**Year:** Second Year (2024–25)

---

## 👩‍💻 Author

**Asmita** — [@techAsmita](https://github.com/techAsmita)  
B.E. Computer Engineering | AI/ML Enthusiast  
[LinkedIn](https://linkedin.com/in/techasmita)
