---
title: C++ Programming Assignment 9
repository: Assignment-9-of-cpp
author: Atharv Pawar
language: C++
compiler: GCC (g++)
sections: 3
---

# C++ Programming Assignment – 9

## 📌 Description
This repository contains solutions to **Assignment 9 of C++ Programming**.  
The assignment focuses on **Object-Oriented Programming (OOP)** concepts such as:

- Classes and Objects  
- Access Specifiers (private, public)  
- Static Member Functions  
- Friend Functions  
- Function Interaction between Classes  
- Basic Data Handling using Classes  

All programs are written in **C++ (.cpp)** and compiled using **g++ (GCC compiler)**.

---

# 🛠 Concepts Used
- Classes and Objects  
- Encapsulation  
- Access Control  
- Static Functions  
- Friend Functions  
- Inter-class Communication  
- Function Design  
- Input / Output using Objects  

---

# 📂 SECTION – 1  
### (Without using Friend Functions)

### Q1.1  
Create class `Number` with variables `x` and `y`.  
Scan and print data for **two objects**.

### Q1.2  
Modify class so that **scan() is private** and print data using public function.

### Q1.3  
Use **static functions** to scan and print data of objects.

### Q1.4  
Perform addition of two objects:
```
T3 = T1 + T2
```

### Q1.5  
Create two classes:
- `Base`
- `Power`  

Calculate **base^power** using an independent function (without friend).

---

# 📂 SECTION – 2  
### (Using Friend Functions)

### Q2.1  
Use class `Digit` to scan and print data of class `Number`.

### Q2.2  
Access private members of class `Number` using friend function.

### Q2.3  
Calculate **base^power** using friend function.

### Q2.4  
Use separate class `Calc` to compute power.

### Q2.5  
Access private data of `Number` from another class without member functions.

### Q2.6  
Use class `Calc` to calculate power using private members of `Base` and `Power`.

---

# 📂 SECTION – 3  
### (Programming + Class Practice)

### Q3.1  
Scan **n integers** and find the **largest value**.

### Q3.2  
Scan **n characters** and count **uppercase alphabets**.

---

### Q3.3  
Class `Student` (public members):  
- Scan and print data of 2 students  
- Write full code in `main()`  
- Draw stack frame  

---

### Q3.4  
Class `Student` (private members):  
- Use member functions to scan and print data  

---

### Q3.5  
Class `Student` with **dynamic name (char pointer)**:  
- Scan and print data  
- Draw stack frame  

---

### Q3.6  
Same as Q3.5 (pointer-based student data handling):  
- Practice memory understanding  
- Draw stack frame  

---

# ▶️ How to Compile and Run

### Compile
```bash
g++ filename.cpp
```

### Run
```bash
./a.out
```

---

# 💻 Tools Used
- Programming Language: **C++**
- Compiler: **GCC (g++)**
- Editor: Any C++ IDE / Terminal

---

# 🎯 Learning Outcomes
- Understanding Object-Oriented Programming concepts  
- Working with private and public members  
- Using static and friend functions effectively  
- Interacting between multiple classes  
- Handling data using objects  
- Understanding memory (stack frame concept)  

---

# 👨‍🎓 Author
Atharv Pawar

---

# 📚 Note
This assignment is created for **academic and learning purposes**.  
Focus is on **OOP fundamentals and class-based programming in C++**.
