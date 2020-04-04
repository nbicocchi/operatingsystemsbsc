#!/bin/bash

USAGE="usage: $0 dirname(abs) EQ|NE"

# Check arguments
if [ $# -ne 2 ]; then
  echo "$USAGE"
  exit 1
fi

case "$1" in 
  /*) ;;
  *) echo "$USAGE"
     exit 1
     ;;
esac

if [ ! -d "$1" -o ! -x "$1" ]; then
  echo "$USAGE"
  exit 1
fi

case "$2" in 
  EQ|NE) ;;
  *)  echo "$USAGE"
      exit 1
      ;;
esac

# Main body
list=$(find "$1" -type d -executable 2>/dev/null)
for item in $list; do
  ndirs=$(find "$item" -maxdepth 1 -type d | wc -l 2>/dev/null)
  nfiles=$(find "$item" -maxdepth 1 -type f | wc -l 2>/dev/null)
  [ "$2" == "EQ" -a "$ndirs" -eq "$nfiles" ] && echo "$item" ["$ndirs" dirs, "$nfiles" files]
  [ "$2" == "NE" -a "$ndirs" -ne "$nfiles" ] && echo "$item" ["$ndirs" dirs, "$nfiles" files]
done

exit 0
