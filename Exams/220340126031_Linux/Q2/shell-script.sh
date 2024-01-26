#!/bin/bash

echo "Enter usage Percentage of Stack and Heap in range 0 to 100 "
echo  # extra echo command is used for line changing
read -p "Enter Stack usage Percentage of 1st app : " s1
echo
read -p "Enter Heap usage Percentage of 1st app : " h1
echo
read -p "Enter Stack usage Percentage of 2nd app : " s2
echo
read -p "Enter Heap usage Percentage of 2nd app : " h2
echo
read -p "Enter Stack usage Percentage of 3rd app : " s3
echo
read -p "Enter Heap usage Percentage of 3rd app : " h3
echo

let stack_size = 1024   # size in KB
let heap_size = 2048    # size in KB

int max = 100

echo "Stack and Heap usage of all three applications are given below"
echo
int res_s1
res_s1 = `expr $stack_size \* $max \/ $s1`
echo "Stack usage of 1st app in kb = $res_s1"
int res_h1
res_h1 = `expr $heap_size \* $max \/ $h1`
echo "Heap usage of 1st app in kb = $res_h1"
echo

int res_s2
res_s2 = `expr $stack_size \* $max \/ $s2`
echo "Stack usage of 2nd app in kb = $res_s2"
int res_h2
res_h2 = `expr $heap_size \* $max \/ $h2`
echo "Heap usage of 2nd app in kb = $res_h2"
echo

int res_s3
res_s3 = `expr $stack_size \* $max \/ $s3`
echo "Stack usage of 3rd app in kb = $res_s3"
int res_h3
res_h3 = `expr $heap_size \* $max \/ $h3`
echo "Heap usage of 3rd app in kb = $res_h3"
echo