#include "translation.h"
#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> slice(std::string& protein){
    std::vector<std::string> array;
    for(size_t i = 0; i < protein.size();i+=3){
        if((protein.substr(i,3) == "UAA") || (protein.substr(i,3) == "UAG") || (protein.substr(i,3) == "UGA")){
            break;
        }else{
            array.push_back(protein.substr(i,3));
        }
    };
    return array;
}

std::vector<std::string> translate(std::vector<std::string>& array) {
    
    std::vector<std::string> aminoArray;
   
    for (size_t i = 0; i < array.size(); i++) {
        std::string aminoAcid;
        
        if (array[i] == "AUG") {
            aminoAcid = "Methionine";
        }
        else if (array[i] == "UUU" || array[i] == "UUC") {
            aminoAcid = "Phenylalanine";
        }
        else if (array[i] == "UUA" || array[i] == "UUG") {
            aminoAcid = "Leucine";
        }
        else if (array[i] == "UCU" || array[i] == "UCC" || array[i] == "UCA" || array[i] == "UCG") {
            aminoAcid = "Serine";
        }
        else if (array[i] == "UAU" || array[i] == "UAC") {
            aminoAcid = "Tyrosine";
        }
        else if (array[i] == "UGU" || array[i] == "UGC") {
            aminoAcid = "Cysteine";
        }
        else if (array[i] == "UGG") {
            aminoAcid = "Tryptophan";
        }
        else {
            aminoAcid = "Unknown codon: " + array[i];
        }
        
        aminoArray.push_back(aminoAcid);
    }
    
    return aminoArray;
}

