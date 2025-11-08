
# Calculator
A simple command-line calculator built in Python that supports basic arithmetic operations including addition, subtraction, multiplication, division, and integer division with remainder calculation.


## 🎯 About This Project

This project demonstrates fundamental programming concepts including:
- **Function decomposition** - Breaking complex logic into smaller, manageable functions
- **Input validation** - Handling user errors gracefully with try-except blocks
- **String manipulation** - Parsing mathematical expressions to extract operators and operands
- **Conditional logic** - Using if statements to execute different operations

The calculator accepts user input in the format `number operator number` (e.g., `5+3`, `10-2`, `8*4`) and performs the requested calculation multiple times in a single session.

## ✨ Features

- ✅ **Basic Arithmetic** - Addition, subtraction, multiplication, and division
- ✅ **Integer Division** - Performs integer division and calculates remainder simultaneously
- ✅ **Error Handling** - Validates operator support and catches invalid input
- ✅ **Multiple Calculations** - Perform multiple calculations in one session
- ✅ **User-Friendly** - Clear prompts and readable output format

## 🔧 Supported Operators

| Operator | Operation | Example | Output |
|----------|-----------|---------|--------|
| `+` | Addition | `10+5` | `The answer is 15` |
| `-` | Subtraction | `10-5` | `The answer is 5` |
| `*` | Multiplication | `10*5` | `The answer is 50` |
| `/` | Division | `10/5` | `The answer is 2.0` |
| `~` | Integer Division + Remainder | `10~3` | `The answer is 3` / `The remainder is 1` |

## 📋 Requirements

- **Python 3.6+** - The code uses f-strings which require Python 3.6 or later
- **No external dependencies** - Uses only Python standard library

## 🚀 Installation & Usage

### Clone the Repository

```bash
git clone https://github.com/Miami05/python-calculator.git
```


```
cd python-calculator
```


### Run the Calculator
```bash
python calculator.py
```

`### Example Usage` 

Welcome to the Python calculator!  
How many calculations do you want to do? 3 
What do you want to calculate? 10+5  
The answer is 15  
What do you want to calculate? 20-8  
The answer is 12  
What do you want to calculate? 10~3  
The answer is 3  
The remainder is 1


## 📝 Code Structure

### Main Functions

**`get_operator(operation)`**
- Searches through supported operators to find which one is in the input string
- Returns the operator found, or `None` if no supported operator exists
- Handles the parsing stage of the calculation

**`calculate(operation)`**
- Validates that the operator is supported
- Splits the operation string by the operator to extract operands
- Converts operands to integers
- Executes the appropriate calculation based on the operator
- Prints the result in a user-friendly format

**`main()`**
- Prompts user for number of calculations desired
- Handles `ValueError` if user enters non-integer input
- Loops through each calculation using the `calculate()` function

## 🔍 How It Works

1. **Input Parsing** - User provides an operation as a string (e.g., `"10+5"`)
2. **Operator Detection** - The `get_operator()` function finds which operator is present
3. **Validation** - Checks if the operator is in the `SUPPORTED_OPERATORS` tuple
4. **Operand Extraction** - Splits the operation string by the operator to get two numbers
5. **Calculation** - Performs the mathematical operation
6. **Output** - Displays the result in a readable format

### Example Flow
Input: "10+5"  
↓  
Operator found: "+"  
↓  
Operands: 10, 5  
↓  
Calculation: 10 + 5 = 15  
↓  
Output: "The answer is 15"

`## 🐛 Error Handling   The calculator handles several error cases:   **Invalid Operator**` 

What do you want to calculate? 10&5  
The program only supports the following operator: +, -, *, /, ~

`**Non-Integer Input for Calculation Count**` 

How many calculations do you want to do? abc  
Oops! That doesn't look like an integer. Please try again.


## 💡 What I Learned

- **String operations in Python** - Using `split()` to parse input
- **Tuple iteration** - Efficiently searching through supported operators
- **Function design** - Creating single-responsibility functions
- **User input validation** - Gracefully handling unexpected input
- **Exception handling** - Using try-except blocks to prevent crashes


## 📚 Use Cases

This project is ideal for:
- **Learning Python basics** - Functions, loops, conditionals, input/output
- **Understanding parsing** - Breaking down user input into meaningful components
- **Practicing error handling** - Validating user input and handling edge cases
- **Beginner projects portfolio** - Demonstrates clean code and good practices

## 📖 Code Quality

**Strengths:**
- ✅ Clear, descriptive function names
- ✅ Docstrings for all functions
- ✅ Proper error handling and validation
- ✅ Modular design with single-responsibility principle
- ✅ User-friendly output messages

## 🤝 Contributing

Contributions are welcome! Feel free to:
- Report bugs or suggest features
- Improve code efficiency or readability
- Add support for additional operators
- Enhance error messages

## 📄 License

This project is open source and available under the MIT License.

## 👤 Author

**Ledio Durmishaj**
- GitHub: [@Miami05](https://github.com/Miami05)
- Email: lediodurmishaj16@gmail.com

---

