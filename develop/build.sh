#!/bin/bash
PATH_BASE=$(pwd)
for file in $PATH_BASE/*
do
   if [ -f $file ]
   then
      # filename=${file}
      filename="$(basename -- $file)" 
      fullname="${filename##/*/}"
      name="${filename%.*}"
      ext="${filename##*.}"
   	  # echo "$fullname"   #fullname
      # echo "$name"     #name
      # echo "$ext"    #ext
      # if [ "$fullname" = "$name" ]
      #    then
      #       mv $file $PATH_CPP_BIN   
      if [ "$ext" = "cpp" ]
         then
         	g++ -o $name $fullname
            # mv $file $PATH_CPP_LIB
            #echo "this file will go $PATH_CPP_LIB"
      fi
   fi
done