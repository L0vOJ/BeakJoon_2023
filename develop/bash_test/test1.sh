#!/bin/bash

searchdir=/home/l0voj/Documents/BeakJoon_2023/develop

for entry in $searchdir/*

do

        echo "$entry"

        # filename="$entry"

        # sed 's/Sep/\t09\t/g' $filename > $searchdir/tmp

        # sed -i 's/Oct/\t10\t/g' $searchdir/tmp

        # sed -i 's/Dec/\t12\t/g' $searchdir/tmp

        # ...

        # sort -u $searchdir/tmp | sort -n -k 4,4 -k 3,3 -k 2,2 -k 5,5 > $filename.sorted

done
