#!/bin/bash
echo "" > lib.txt
for x in $(cat main.h | grep ";$" | awk -F " " '{print $1"µ"$2"µ"$3"µ"$4"µ"$5"µ"$6"µ"$7"µ"$8}')
do
    a=$(echo $x| tr "µ" " " | cat $1 | sed "s/;[[:blank:]]*//")
    a=$(echo $a | tr "  " " ")
    grep -Frl "$a" ../ >> lib.txt
done
cat lib.txt | sort | tr -d "~" | uniq -c | rev | cut -d " " -f1 | rev | egrep "*.c$" > lib.txt
while read p
do
  cp $p .
done <lib.txt
rm lib.txt
