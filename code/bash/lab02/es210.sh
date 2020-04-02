#!/bin/bash

USAGE="usage: $0 dirname seconds"

count() {
  tmpF=0
  tmpD=0
  for fname in "$1"/*; do
    if [ -f "$fname" ]; then
      tmpF=$(expr $tmpF + 1)
    elif [ -d "$fname" ]; then
      tmpD=$(expr $tmpD + 1)
    fi
  done
}

if [ $# -ne 2 ]; then 
  echo "$USAGE"
  exit 1
fi

if [ ! -d "$1" -o ! -x "$1" ]; then
  echo "$USAGE"
  exit 1
fi

# checks if $2 actually contains a number
expr $2 + 0 >/dev/null 2>&1
if [ $? -ne 0 ]; then
  echo "$USAGE"
  exit 1
fi

# init phase
count "$1"
lastF=$tmpF
lastD=$tmpD

# check phase
echo "[$(date +%H:%M)] $1 monitored..."
while [ true ]; do
  count "$1"
  if [ $lastF -ne $tmpF -o $lastD -ne $tmpD ]; then
  	echo "[$(date +%H:%M)] $1 changed"
  	lastF=$tmpF
  	lastD=$tmpD
  fi
  sleep "$2"
done

exit 0

