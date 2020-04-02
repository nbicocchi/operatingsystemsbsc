#!/bin/bash

# For testing: ./es27.sh 2>/dev/null

for fname in *; do
  case "$fname" in
    *.sh) echo "$fname" 1>&2 
          ;;
    *) echo "$fname"
       ;;
  esac
done

exit 0

