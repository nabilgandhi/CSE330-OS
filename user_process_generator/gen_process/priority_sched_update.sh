#!/bin/bash

pid=( $(pgrep -f user_process) )
len=$(( ${#pid[@]} - 1 ))
#echo $len
for i in $( seq 0 $len )
do
	if [[ $i == 0 ]]
	then
		chrt -o -p 0 ${pid[$i]}
	elif [[ $i == 1 ]]
	then
		chrt -f -p 98 ${pid[$i]}
	elif [[ $i == 2 ]]
	then
		chrt -r -p 97 ${pid[$i]}
	elif [[ $i == 3 ]]
	then
		chrt -b -p 0 ${pid[$i]}
	elif [[ $i == 4 ]]
	then
		chrt -r -p 97 ${pid[$i]}
	elif [[ $i == 5 ]]
	then
		chrt -b -p 0 ${pid[$i]}
	elif [[ $i == 6 ]]
	then
		chrt -b -p 0 ${pid[$i]}
	elif [[ $i == 7 ]]
	then
		chrt -b -p 0 ${pid[$i]}
	fi
done    
