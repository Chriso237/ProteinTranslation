#include <iostream>
#include "translation.h"
#include <vector>
#include <string>

/*cd "/Users/apple/Desktop/ProteinTranslation/" && g++ main.cpp translation.cpp -o main && ./main */


/*
A program that translates proteins via codons

as known codons we have

AUG -> Methionine
UUU, UUC ->	Phenylalanine
UUA, UUG ->	Leucine
UCU, UCC, UCA, UCG ->	Serine
UAU, UAC ->	Tyrosine
UGU, UGC ->	Cysteine
UGG	-> Tryptophan
UAA, UAG, UGA -> STOP


We read the proteins until we meet a stop codon

*/

int main(){
    
    std::string protein;
    std::cout << "Enter a protein: ";
    std::getline(std::cin >> std::ws ,protein );

    std::vector<std::string> array = slice(protein);
    std::vector<std::string> aminoArray = translate(array);

    std::cout << "The protein conteins: \n";
    for(int i = 0; i < array.size(); i++){
        std::cout << array[i] << " ---> " << aminoArray[i] << "\n";
    }


    return 0;
}