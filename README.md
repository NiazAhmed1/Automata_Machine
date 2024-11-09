# Regular Language Analyzer

This project, written in C++, is designed to help users explore the behavior of regular expressions by analyzing how they interact with predefined sets of strings. It provides insights into which strings a given regular expression will accept or reject, making it an invaluable tool for those interested in pattern matching, natural language processing, and data analysis.

## Features
- **Regular Expression Input**: Supports expressions with the characters `a`, `b`, `e` (for epsilon), `|` (or), `(`, `)`, and `*` (Kleene star).
- **String Matching**: Users can input a list of strings, and the program will evaluate each one against the provided regular expression.
- **Flexible Language Evaluation**: The project reveals which strings are accepted or rejected by the regular expression, aiding in the understanding of expression behavior.

## Usage Instructions

1. **Run the Program**:
   - Compile and execute the C++ code using any C++ compiler, such as `g++`.

2. **Input Regular Expression**:
   - The program will prompt you to enter a regular expression.
   - The expression can consist of the characters: `a`, `b`, `e`, `|`, `(`, `)`, and `*`.
   - After typing the expression, press `Enter`.

3. **Enter a List of Strings**:
   - The program will ask you to enter a list of **6 strings**.
   - After inputting each string, press `Enter`.

4. **View Output**:
   - The program will display the results, indicating which strings are **accepted** or **rejected** by the provided regular expression.

## Example
```plaintext
Enter a regular expression: (a|b)*abb
Enter 6 strings:
> ababb
> abb
> aab
> bbb
> aabb
> ab

Output:
Accepted: ababb, abb
Rejected: aab, bbb, aabb, ab
