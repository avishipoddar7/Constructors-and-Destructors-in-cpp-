# 🚀 C++ Constructor and Destructor Examples  

This repository contains a series of **C++ programs (`exp12a.cc` through `exp12f.cc`)** designed to demonstrate the **fundamentals of constructors and destructors** in object-oriented programming.  
Each file provides a **clear, concise, and practical example** of a specific concept.  

---

## 🔑 What are Constructors and Destructors?  

- 🏗️ **Constructor**  
  - A **special member function** automatically invoked when an object is created.  
  - Used to **initialize data members**.  
  - Same name as the class, **no return type**.  
  - Types include:  
    ✅ Default Constructor  
    ✅ Parameterized Constructor  
    ✅ Copy Constructor  
    ✅ Constructor with Default Values  

- 🧹 **Destructor**  
  - A **special member function** automatically invoked when an object goes out of scope.  
  - Used for **cleanup** (memory, files, connections, etc.).  
  - Same name as the class, prefixed with `~`.  
  - Takes **no parameters** and returns nothing.  

👉 Together, **constructors** ensure objects start in a valid state, while **destructors** handle cleanup when objects are no longer needed.  

---

## 📂 Programs Included  

### 🔹 `exp12a.cc` → 🏫 **Default Constructor**  
- 📥 Takes input inside the constructor.  
- When a `Student` object is created, it prompts for **roll number, name, and fees**.  

**📝 Algorithm**:  
1️⃣ Start  
2️⃣ Define `Student` class with members (roll, name, fees).  
3️⃣ Create a constructor to ask for user input.  
4️⃣ Instantiate a `Student` object → constructor runs automatically.  
5️⃣ End  

---

### 🔹 `exp12b.cc` → 🚗 **Constructor Defined Outside the Class**  
- Demonstrates how to define a constructor using the `::` operator.  
- The `Car` class constructor asks for **brand, model, and price**.  

**📝 Algorithm**:  
1️⃣ Start  
2️⃣ Define `Car` class with members (brand, model, price).  
3️⃣ Declare constructor inside the class.  
4️⃣ Define constructor outside using `Car::Car()`.  
5️⃣ Instantiate an object → constructor runs.  
6️⃣ End  

---

### 🔹 `exp12c.cc` → 🎯 **Constructor with Default Values**  
- Constructor initializes values automatically: `a=10`, `b=20`.  

**📝 Algorithm**:  
1️⃣ Start  
2️⃣ Define class `Construct` with members `a` and `b`.  
3️⃣ Write constructor that sets defaults (`a=10`, `b=20`).  
4️⃣ Instantiate object → values auto-initialized.  
5️⃣ Display results.  
6️⃣ End  

---

### 🔹 `exp12d.cc` → 👥 **Parameterized and Copy Constructors**  
- 📌 **Parameterized constructor** initializes with given values.  
- 📌 **Copy constructor** duplicates an object.  

**📝 Algorithm**:  
1️⃣ Start  
2️⃣ Define `Student` class with (name, age).  
3️⃣ Create parameterized constructor for initialization.  
4️⃣ Create copy constructor for duplication.  
5️⃣ Make object `s1` (parameterized).  
6️⃣ Make object `s2` (copy of `s1`).  
7️⃣ Display both.  
8️⃣ End  

---

### 🔹 `exp12e.cc` → 🧹 **Destructors and Object Lifetime**  
- Tracks how many objects are created/destroyed.  
- Destructor shows objects destroyed in **reverse order of creation**.  

**📝 Algorithm**:  
1️⃣ Start  
2️⃣ Define `Destruct` class with constructor + destructor.  
3️⃣ Constructor → increments global counter.  
4️⃣ Destructor → decrements global counter.  
5️⃣ Create multiple objects → constructors run.  
6️⃣ Program ends → destructors run in reverse.  
7️⃣ End  

---

### 🔹 `exp12f.cc` → 📅 **Constructor to Initialize Date**  
- Default constructor sets date → **28/08/2025**.  

**📝 Algorithm**:  
1️⃣ Start  
2️⃣ Define `Date` class with (day, month, year).  
3️⃣ Constructor initializes values → (28, 8, 2025).  
4️⃣ Create objects → auto-initialized.  
5️⃣ Destructor called when objects go out of scope.  
6️⃣ End  

---

## 🎯 Key Learning Outcomes  

By exploring these examples, you will:  
✔ 🏗️ Understand constructors for object initialization  
✔ 🎯 Use **default, parameterized, and copy constructors**  
✔ 🧩 Learn defining constructors **inside & outside the class**  
✔ 🧹 See how destructors manage automatic cleanup  
✔ 💡 Write clean, safe, and structured C++ code  

---

## 🗂️ Repository Structure  

```plaintext
Constructor_Destructor/
├── exp12a.cc # 🏫 Default Constructor
├── exp12b.cc # 🚗 Constructor Outside Class
├── exp12c.cc # 🎯 Constructor with Default Values
├── exp12d.cc # 👥 Parametric + Copy Constructor
├── exp12e.cc # 🧹 Destructor and Object Lifetime
├── exp12f.cc # 📅 Date Initialization Constructor
└── README.md # 📘 Documentation

