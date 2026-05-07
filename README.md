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
