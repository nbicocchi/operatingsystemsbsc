#!/bin/bash

USAGE="usage: $0 dirname(abs) n(>0)"

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

expr "$2" + 0 > /dev/null 2>&1
case $? in
  0) ;; # result != 0
  1) ;; # result == 0
  2) echo "$USAGE"; 
     exit 4
     ;;
esac

if [ "$2" -le 0 ]; then
  echo "$USAGE"
  exit 5
fi

export PATH=$(pwd):$PATH
es36r.sh $*

exit 0
