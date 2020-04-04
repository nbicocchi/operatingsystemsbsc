#!/bin/bash

USAGE="usage: $0 d1 .. dn"
LINKDIR="/tmp/links"

# Check arguments
if [ $# -lt 1 ]; then
  echo "$USAGE"
  exit 1
fi

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
rm -rf "$LINKDIR"
mkdir -p "$LINKDIR"
count=0
for dname in $*; do
  list=$(find "$dname" -type f -readable -mtime -1 2>/dev/null)
  for item in $list; do
  	echo "$item"
  	ln -s "$item" "$LINKDIR"/$(basename "$item")."$count"
  	count=$(expr "$count" + 1)
  done
done

exit 0