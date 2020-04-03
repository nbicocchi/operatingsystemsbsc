#!/bin/bash

USAGE="usage: $0 dir(abs) str"

# Check arguments
if [ $# -ne 2 ]; then
  echo "$USAGE"
  exit 1
fi

case "$1" in 
  /*) ;;
  *) echo "$USAGE"
     exit 2
     ;;
esac

if [ ! -d "$1" -o ! -x "$1" ]; then
  echo "$USAGE"
  exit 3
fi

# Main body
list=$(find "$1" -type f -name "$2" -readable 2>/dev/null)
for item in $list; do
  lines=$(cat "$item" | wc -l)
  if [ "$lines" -ge 10 -a "$lines" -le 100 ]; then
    echo "$item" ["$lines" lines]
  fi
done

exit 0
