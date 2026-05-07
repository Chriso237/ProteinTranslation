# Protein translation

## Description

This project translates RNA sequences to protein (amino acid) according to the standard genetic code

## Functionalities
- Reads a RNA sequence entered by the user
- cut the sequence into codons (group of 3 nucleotids)
- Translate each codon to its the corresponding amino acid
- Stops automatically when meeting a stop codon (UAA, UAG,UGA)

## Genetic code used
| Codon | Acide Aminé |
|-------|-------------|
| AUG | Méthionine |
| UUU, UUC | Phénylalanine |
| UUA, UUG | Leucine |
| UCU, UCC, UCA, UCG | Sérine |
| UAU, UAC | Tyrosine |
| UGU, UGC | Cystéine |
| UGG | Tryptophane |
| UAA, UAG, UGA | STOP |

## Installation

### Prerequisit
-C++ compiler (g++, clang, etc..)

### Compilation
g++ main.cpp translation.cpp -o protein_translator

# Execution

./protein_translator

# Usage

-Run the program

-Enter an RNA sequence (using uppercase letters U, A, C, G only)

-The program displays the translation codon by codon

# Examples

## Example 1
Enter an RNA sequence: AUGUUUUAA

The protein contains:

AUG ---> Methionine

UUU ---> Phenylalanine

## Example 2 - Protein with stop codon

Input: AUGUUUCUAUACUGGUGG

Output:

AUG ---> Methionine

UUU ---> Phenylalanine

UUA ---> Leucine

UAC ---> Tyrosine

UGG ---> Tryptophan

UGG ---> Tryptophan


## Example 3 - Immediate stop

Input: UAA

Output:

(empty - stops immediately)

# Funtion Documentation

## slice(std::string& protein)

Splits an RNA string into codons (groups of 3).


-Parameter: RNA sequence string

-Returns: Vector of codon strings

-Stops when: Stop codon encountered


## translate(std::vector<std::string>& array)

Translates codons to amino acids.


-Parameter: Vector of codon strings

-Returns: Vector of amino acid names


## Limitations

-Sequence must contain only U, A, C, G letters (uppercase)

-Incomplete codons (less than 3 bases) are ignored

-Case-sensitive (use uppercase only)

-No input validation for invalid characters


## Possible Improvements

-Handle lowercase input (convert to uppercase)

-Validate input contains only A, U, C, G

-Support DNA sequences (replace T with U automatically)

-Display complete protein sequence as a single string

-Add error handling for empty input

-Support multi-line input from files

-Add command-line arguments for file input


## Troubleshooting

### Segmentation Fault

If you get a segmentation fault, make sure:

-Your RNA sequence length is valid

-All functions are properly implemented

-You're compiling both .cpp files


## Author
Christ Israel Agnissan
