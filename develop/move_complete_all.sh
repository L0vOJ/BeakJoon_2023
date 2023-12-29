#!/bin/bash

PATH_BASE=$(pwd)

#PATH1='/home/l0voj/Documents/BeakJoon_2023/develop/sample'

PATH_CPP="/home/l0voj/Documents/BeakJoon_2023/complete/c++"
PATH_CPP_BIN="${PATH_CPP}/bin"
PATH_CPP_LIB="${PATH_CPP}/lib"

for file in $PATH_BASE/*
do
   if [ -f $file ]
   then
      #filename=${file}
      filename="$(basename -- $file)" 
      fullname="${filename##/*/}"
      name="${filename%.*}"
      ext="${filename##*.}"
   	#echo "$fullname"   #fullname
      #echo "$name"     #name
      #echo "$ext"    #ext
      if [ "$fullname" = "$name" ]
         then
            mv $file $PATH_CPP_BIN   
      elif [ "$ext" = "cpp" ]
         then
            mv $file $PATH_CPP_LIB
            #echo "this file will go $PATH_CPP_LIB"
      fi
   fi
done
