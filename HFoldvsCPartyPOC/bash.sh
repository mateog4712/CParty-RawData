input=$1
file="/home/mgray7/CParty-RawData/HFoldvsCPartyPOC/rnastrandSmall.fa";
file2="/home/mgray7/CParty-RawData/HFoldvsCPartyPOC/structures/rnastrandSmall.txt";
exec 5<$file
exec 6<$file2
while read line1 <&5 && read line2 <&6; do

if ((i % 2 == 1))  

then

/home/mgray7/CParty/build/CParty -P "/home/mgray7/CParty/src/params/parameters_DP09_Vienna.txt" -d1 -r $line2 $line1 > "/home/mgray7/CParty-RawData/HFoldvsCPartyPOC/out.txt"


cat "/home/mgray7/CParty-RawData/HFoldvsCPartyPOC/out.txt" >> "/home/mgray7/CParty-RawData/HFoldvsCPartyPOC/CParty/rnastrandSmall.txt"

fi
i=$((i+1));
done
echo "first is $i";
#   echo "${line}";
exec 5</dev/null
exec 6</dev/null
