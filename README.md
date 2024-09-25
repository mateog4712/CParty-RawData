# CParty-RawData

CParty-RawData contains the testing results from the creation and publication of CParty. 

#### HFoldvsCPartyPOC

HFoldvsCPartyPOC contains the proof of concept results for the comparison of CParty-MFE, that is the MFE portion of CParty, with HFold.

#### PseudoknotFreePOC

PseudoknotFreePOC contains the proof of concept results for the comparision between CParty and and RNAFold's partition function when looking at pseudoknot-free structure. Each program was given an empty structure as input. This ensures that CParty is calculating the partition function for only pseudoknot-free structures as well.

#### TimeAndSpace

TimeAndSpace looked at the time and space usage when finding the partition function for three different programs. The three programs were CParty, NUPACK, and RNAFold. RNAFold provided a pseudoknot-free comparison for the time that CParty takes while NUPACK is a pseudoknotted partition function.