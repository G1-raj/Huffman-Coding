# Huffman Coding in C++

## 📌 Overview

This project implements the **Huffman Coding algorithm** in C++ using object-oriented design. It demonstrates how to **compress and decompress text** using a binary tree and greedy approach.

---

## 🚀 Features

* Build Huffman Tree from input text
* Generate Huffman Codes using recursion
* Encode text into binary string
* Decode binary string back to original text
* Modular structure (Node, Comparator, Huffman classes)

---

## 🧠 How It Works

### 1. Frequency Calculation

Counts frequency of each character using `unordered_map`.

### 2. Build Min Heap

Uses `priority_queue` with custom comparator.

### 3. Build Huffman Tree

* Take 2 nodes with lowest frequency
* Merge into new node
* Repeat until one root remains

### 4. Generate Codes

Traverse tree:

* Left → `0`
* Right → `1`

### 5. Encoding

Replace each character with its binary code.

### 6. Decoding

Traverse tree based on bits to reconstruct original text.

---

## 📂 Project Structure

```
Huffman-Coding/
│── main.cpp
│
├── huffman/
│   ├── huffman.hpp
│   ├── huffman.cpp
│   └── comparator.hpp
│
├── node/
│   ├── node.hpp
│   └── node.cpp
```

---

## ⚙️ Compilation & Execution

### Compile

```bash
g++ -std=c++11 main.cpp huffman/huffman.cpp node/node.cpp -o main
```

### Run

```bash
./main
```

---

## 📊 Example Output

```
Original: hello world
Encoded: 1010110010...
Decoded: hello world
```

---

## 🛠️ Concepts Used

* Greedy Algorithm
* Binary Tree
* Priority Queue (Min Heap)
* Recursion
* Hash Map (`unordered_map`)

---

## ⚠️ Limitations

* Works only for in-memory strings (no file compression yet)
* No memory deallocation (uses raw pointers)
* Encoded output is string (not bit-optimized)

---

## 🔥 Future Improvements

* Add file compression support
* Use bit-level storage for better compression
* Add destructor to free memory
* Visualize Huffman Tree
* CLI support (input/output files)

---

## 🤝 Contribution

Open to improvements and optimizations!

---

## 📜 License

MIT License
