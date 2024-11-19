# CParty-RawData

CParty-RawData contains the testing results from the creation and publication of CParty. 

#### HFoldvsCPartyPOC

HFoldvsCPartyPOC contains the proof of concept results for the comparison of CParty-MFE, that is the MFE portion of CParty, with HFold.

#### PseudoknotFreePOC

PseudoknotFreePOC contains the proof of concept results for the comparision between CParty and and RNAFold's partition function when looking at pseudoknot-free structures. Within the folder. EmptyInput, each program was given an empty structure as input. This ensures that CParty is calculating the partition function for only pseudoknot-free structures as well. Within the folder, FullInput, each program was given the full reference structure as input. This shows that CParty is not predicting pseudoknots in structures which do not contain them.

#### TimeAndSpace

TimeAndSpace looked at the time and space usage when finding the partition function for three different programs. The three programs were CParty, NUPACK, and RNAFold. RNAFold provided a pseudoknot-free comparison for the time that CParty takes while NUPACK is a pseudoknotted partition function.