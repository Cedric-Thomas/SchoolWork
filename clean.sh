#!/bin/bash
EXCLUDE=`cat ./EXCLUDE`
var=`find -not -path '*/\.*' | grep -v .c`
nmb_line=`echo "$var" | wc -l`
for (( i=1; i<=$nmb_line; i++ ))
do
	act_line=`echo "$var" | sed "$i!d"`
	if [ ! -d "$act_line" ]; then	
		act_line=`echo "$act_line" | grep -v "^$" | egrep -v "$EXCLUDE"`
		if [ "$act_line" != "" ]; then
			rm "$act_line"
			echo "$act_line ---> Deleted"
		fi	
	fi
done
