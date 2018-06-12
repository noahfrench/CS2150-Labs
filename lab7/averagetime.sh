#!/bin/bash

# Take in an exponent value
echo 'Enter the exponent for counter.cpp:'
read e

# Exit if the user inputs "quit"
if [[ "$e" == 'quit' ]] ; then
    exit  0

# Run counter.cpp 5 times with the user's desired exponent value
# Output the time taken for each individual run, the total time from all 5 runs, and the average time 
else
    totalTime=0
    for i in {1..5} ; do
	runtime=`./a.out "$e" | tail -1`
	echo 'Running iteration' "$i"'...'
	echo 'time taken:' "$runtime" 'ms'
	totalTime=$(($totalTime + $runtime))
    done
    echo '5 iterations took' "$totalTime" 'ms'
    avgTime=$(($totalTime / 5))
    echo 'Average time was' "$avgTime" 'ms'
fi
