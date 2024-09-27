#include <iostream>
#include <iomanip>
#include <vector>
#include <iterator>
#include <cstring>
#include <string>
#include <cassert>
#include <fstream>




int main(int argc,char **argv) {

    std::string file1 = "/Users/mateo2/Documents/Code/CParty-RawData/HFoldvsCPartyPOC/CParty/rnastrandSmall.txt";
    std::string fileH1 = "/Users/mateo2/Documents/Code/CParty-RawData/HFoldvsCPartyPOC/HFold/rnastrandSmall.txt";


    std::vector<std::string> structures1;
    std::vector<double> energies1;

    std::vector<std::string> structuresH1;
    std::vector<double> energiesH1;


    // Get sequences, structures and energies for CParty-MFE
    std::ifstream in(file1);
    std::string str;
    std::string seq;
    int k = 0;
    std::vector<std::string> seqs;
    while(getline(in,str)){
        if(k%2 == 0){
            seqs.push_back(str);
        }
        else{
            int difference = (str.length()-seq.length()-2);
            std::string structure = str.substr(0,seq.length());
            double energy = std::stod(str.substr(seq.length()+2,difference-1));

            structures1.push_back(structure);
            energies1.push_back(energy);
        }
        seq = str;
        ++k;
    }
    k=0;

    // Get structures and energies for HFold
    std::ifstream in1(fileH1);
    while(getline(in1,str)){
        if(k%2 == 0){
        }
        else{
            int difference = (str.length()-seq.length()-3);

            std::string structure = str.substr(0,seq.length());
            double energy = std::stod(str.substr(seq.length()+3,difference-1));
            structuresH1.push_back(structure);
            energiesH1.push_back(energy);
        }
        seq = str;
        ++k;
    }

    // check energies and structures
    int n = seqs.size();
    int count = 0;
    int countS = 0;
    std::vector<int> needsToBeChecked;
    for(int i = 0; i < n;++i){
        if(energies1[0] == energiesH1[0]) count++;
        // if(structures1[0] == structuresH1[0]) countS++;
    }
    for(int i = 0; i < n;++i){
        int length = seqs[i].length();
        bool check = true;
        std::string structure1 = structures1[i];
        std::string structure2 = structuresH1[i];
        for(int j = 0; j < length; ++j){
            if(structure1[j] != structure2[j]){
                if((structure1[j] == '(' && structure2[j] == '[') || (structure1[j] == ')' && structure2[j] == ']')){

                }
                else{
                    check = false;
                    
                }
            }
        }
        if(check) countS++;
        else{
            needsToBeChecked.push_back(i);
        }
    }
    std::cout << needsToBeChecked[0] << std::endl;
    printf("%d/%d have the same energy and %d/%d have the same structure\n",count,n,countS,n);

return 0;
}