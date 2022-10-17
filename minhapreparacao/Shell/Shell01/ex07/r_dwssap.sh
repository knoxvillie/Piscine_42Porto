#!/bin/sh
cat /etc/passwd | cut -d':' -f 1 | sed -n 'n;p' | rev | sort -r | tr -s '\n' ',' | sed 's/,/, /g' |  sed 's/, $/./' 
