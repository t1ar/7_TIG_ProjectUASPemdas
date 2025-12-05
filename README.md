# Vending Machine Simulator
![](assets/images/ICON.png)
## Created by Lifestream (TIG-7-PEMDAS)

A small command-line vending machine simulator written in C++.

This project models a vending machine and a storage/warehouse, supporting operations such as:
- Buying an item from the vending machine (customer purchase)
- Viewing vending machine profit
- Buying stock from storage (warehouse purchase)
- Restocking the vending machine from storage

Key implementation details:
- Uses a `structItem` struct to represent each product (name, quantity, price)
- Stores two arrays: `Item` (vending machine) and `Storage` (warehouse)
- Reads and writes data from text files: `Stock.txt`, `Storage.txt`, `Profit.txt`
- Basic input validation and simple confirmation prompts

How to use
----------
1. Ensure `Stock.txt`, `Storage.txt`, and `Profit.txt` exist in the same folder as the executable. These files store item names, quantities, and prices.
2. Run the program. The menu will present options to buy items, view profit, buy stock, and restock.
3. Follow on-screen prompts. The program uses 1-based indexing for menu choices (e.g. choose `1` for the first item).

Notes
-------------------
- The code stores state back to the text files when you exit, so changes persist between runs.
- Input validation is minimal — avoid entering invalid data in the files. The program includes a basic integer input validator for menu choices.

Files of interest
-----------------
- `VendingMachine.cpp` — main program and logic
- `Stock.txt` — vending machine initial data
- `Storage.txt` — warehouse initial data
- `Profit.txt` — stored profit integer

