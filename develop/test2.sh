#!/bin/bash

PATH1=$(pwd)

#PATH1='/home/l0voj/Documents/BeakJoon_2023/develop/sample'

for file in $PATH1/*
   do
      if [ -f $file ]
      then
         filename=${file}
   	 echo "${filename##/*/}"
      fi
   done
