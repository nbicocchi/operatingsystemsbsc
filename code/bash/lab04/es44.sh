#!/bin/bash

USAGE="usage: $0 string d1 .. dn"

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
tsize=0
for dname in $*; do
  dsize=0
  list=$(find "$dname" -type f -readable -name "$F" 2>/dev/null)
  for item in $list; do
    size=$(cat "$item" | wc -c)
    dsize=$(expr "$dsize" + "$size")
    echo "$item" ["$size" bytes]
  done
  tsize=$(expr "$tsize" + "$dsize")
  echo ["$dname": "$dsize" bytes]
done

echo [total: "$tsize" bytes]

exit 0
