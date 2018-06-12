#!/bin/bash

# Compile the necessary files in the directory using Makefile:
make
# Ask the user for the desired dictionary and grid files:
echo 'Enter name of dictionary file:'
read dict
echo 'Enter name of grid file:'
read grid
# Run the file and record the time:
RUNNING_TIME=`./a.out "$dict" "$grid" | tail -1`
RUNNING_TIME2=`./a.out "$dict" "$grid" | tail -1`
RUNNING_TIME3=`./a.out "$dict" "$grid" | tail -1`
RUNNING_TIME4=`./a.out "$dict" "$grid" | tail -1`
RUNNING_TIME5=`./a.out "$dict" "$grid" | tail -1`

#Calculate the average:
total_time=$(($RUNNING_TIME + $RUNNING_TIME2 + $RUNNING_TIME3 + $RUNNING_TIME4 + $RUNNING_TIME5))
avg_time=$(($total_time / 5))

#Display the average:
echo "The average runtime in ms was:"
echo "$avg_time"

