#!/bin/bash

gcc -g -Wall  $1

echo "

------------------
(program exited with code: $?)"   


read  -p "Hit ENTER to close"
