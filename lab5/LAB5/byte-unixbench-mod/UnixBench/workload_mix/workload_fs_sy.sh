#!/bin/sh
./fstime.sh &
./syscall.sh &
./fstime.sh &
./syscall.sh &
./fstime.sh &
wait
