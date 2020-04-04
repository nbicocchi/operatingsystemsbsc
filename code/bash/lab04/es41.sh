#!/bin/bash

USAGE="usage: $0 dirname(abs) filename"

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

# Main body
ndirs=0
nfiles=0
list=$(find "$1" -type d -executable 2>/dev/null)
for item in $list; do
  f=$(find "$item" -maxdepth 1 -type f -name \*$2\* | wc -l 2>/dev/null)
  if [ "$f" -ge 1 ]; then
    echo "$item" ["$f" files]
    ndirs=$(expr "$ndirs" + 1)
    nfiles=$(expr "$nfiles" + "$f")
  fi
done

echo "[total dirs: $ndirs]"
echo "[total files: $nfiles]"

exit 0