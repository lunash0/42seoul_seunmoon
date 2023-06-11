#!/bin/bash
cat /etc/passwd | grep -v '^#' | cut -d ":" -f1 | awk "NR%2==0" | rev | sort -r | awk "$FT_LINE1<=NR && $FT_LINE2>=NR" | xargs | sed 's/ /, /g' | sed 's/$/./g' | tr -d '\n'
