Markdown
# 🧾 Bill Maker

> A console-based Bill Generator written in **C**. Enter item names, quantities, and prices — then automatically generate a formatted bill with totals and grand total calculation.

---

## 🗂️ Table of Contents

- [About](#about)
- [Features](#features)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Limitations](#limitations)
- [File Structure](#file-structure)
- [Future Plans](#future-plans)

---

## 📖 About

This project is a **Bill Maker / Bill Generator** built in C. It allows users to enter multiple inventory items along with quantity and price, then generates a formatted bill in tabular form.

The project demonstrates:
- Structures
- Arrays
- Formatted table printing
- Dynamic-sized arrays (VLA)
- Basic input handling

Built and tested on **Android using CxxDroid**.

---

## ✨ Features

| Feature | Description |

|---|---|

| ➕ Add Items | Enter multiple bill items |

| 📦 Quantity Handling | Store quantity for each item |

| 💰 Price Handling | Store item prices |

| 🧮 Total Calculation | Automatically calculates item totals |

| 🧾 Grand Total | Displays final combined total |

| 📋 Formatted Bill Output | Generates a structured bill table |

---

## 🚀 Getting Started

### Prerequisites

- A C compiler such as **GCC**
  
- Linux/macOS terminal, **MinGW** on Windows, or **CxxDroid** on Android

### Compilation

```bash
gcc "BILL MAKER.c" -o billmaker
```
Run
```Bash
./billmaker
```
🖥️ Usage

On launch, the program asks for the number of items:
```
Enter the number of items:
```

For each item, the user enters:
```
Item Name
Quantity
Price
```
Example Output:
```
---------------------------------------------------------------------
Serial   Item Name  Qty      Price      Total
---------------------------------------------------------------------
1        Rice       2.00     40.00      80.00
2        Sugar      1.50     50.00      75.00
---------------------------------------------------------------------
Grand Total:                         155.00
---------------------------------------------------------------------
```

⚠️ Limitations
1. **No File Handling**
   
Bill data is not saved permanently. All data is lost after program termination.

2. **No Input Validation**
   
The program does not validate:

●negative quantities

●invalid prices

●non-numeric inputs

●Invalid input may crash the program or produce incorrect output.

3. **Fixed Item Name Length**
   
Item names are limited to:
```
char item_name[50];
```
Longer names may get truncated.

4. **Platform Dependency**

system("clear") may not work properly on all systems.

5. **No Tax / Discount System**
    
The bill generator only calculates simple totals. 
Features like:
```
●GST/VAT
●Discounts
●Invoice IDs
●Tmestamps
```
are not implemented.
📁 File Structure
```
.
├── BILL MAKER.c    # Main source file
└── README.md       # Documentation
```

🔮 Future Plans

[1] Add GST / tax calculation

[2] Add discount system

[3] Add file saving and bill history

[4] Add date and time support

[5] Improve input validation

[6] Export bills as text files

[7] Improve UI formatting

👤 Author

Adrish Datta

Made with ❤️ in C by Adrish Datta | Built on Android 📱
