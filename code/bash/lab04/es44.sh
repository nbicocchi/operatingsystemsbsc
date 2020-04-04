#!/bin/bash

USAGE="usage: $0 filename d1 .. dn"
LOG="/tmp/script.log"

# Check arguments
if [ $# -lt 2 ]; then
  echo "$USAGE"
  exit 1
fi

F="$1"
shift

for dname in $*; do
  case "$dname" in 
    /*) ;;
    *)  echo "$USAGE"
        exit 1
        ;;
  esac

  if [ ! -d "$dname" -o ! -x "$dname" ]; then
    echo "$USAGE"
    exit 1
  fi
done

# Main body
rm -rf "$LOG"
for dname in $*; do
  list=$(find "$dname" -type f -readable -name "$F" 2>/dev/null)
  for item in $list; do
    if [ $(cat "$item" | wc -l) -ge 10 ]; then
      echo "$item"
      tail -n 2 "$item" | head -n 1 >> "$LOG"
    fi
  done
done

exit 0
