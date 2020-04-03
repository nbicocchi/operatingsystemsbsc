#!/bin/bash

USAGE="usage: $0 dirname(abs) n(>0)"

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

expr "$2" + 0 > /dev/null 2>&1
if [ $? -gt 1 ]; then
  echo "$USAGE"; 
  exit 1
fi

if [ "$2" -le 0 ]; then
  echo "$USAGE"
  exit 1
fi

# Main body
list=$(find "$1" -type d -executable 2>/dev/null)
for item in $list; do
  nfiles=$(find "$item" -maxdepth 1 -type f | wc -l 2>/dev/null)
  if [ "$nfiles" -ge 1 -a "$nfiles" -le "$2" ]; then
    echo "$item" ["$nfiles" files]
  fi
done

exit 0