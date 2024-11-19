## Full input structure Proof of Concept

We looked at all tRNA structures on RNASTRAND which contain only standard RNA characters (ACGU), do not contain hairpins < 3, and do not contain pseudoknots. We ran both RNAFold and CPArty on the full reference structure given through RNASTRAND. 

#### CParty
In the folder CParty, we have the file: pkfree.txt which contain all ensemble energies for each prediction by CParty. The folder also contains pkfreeStructures.txt which contain the result of running CParty on each sequence and input structure. This gives the MFE structure, energy and ensemble energy. This shows that within the MFE structure given by CParty, there are no pseudoknotted base pairs added.

#### RNAFold
In the folder RNAFold, we have the file: pkfree.txt which contain all ensemble energies for each prediction by RNAFold.

#### Fasta
In the folder Fasta, we have all of the sequences predicted on.

#### Structures
In the folder Structures, we have all of the reference structures for the sequences.