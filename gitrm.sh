#!/bin/bash

# find && rename "MAKEFILE" to "Makefile"
mfs=$(find . -name \* | grep "MAKEFILE")

for mf in ${mfs}
do
	mmf=$(echo $mf | sed "s/MAKEFILE/Makefile/")
	git mv ${mf} ${mmf}
done
