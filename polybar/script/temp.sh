#!/bin/sh

 tempjc=$(sensors | grep "Package id 0:" | tr -d '+'| awk '{print $4}' | cut -d "." -f 1)

echo $tempjc"°C"``

