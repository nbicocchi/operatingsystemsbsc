#!/bin/bash

# Da invocare nel seguente modo per rispettare la specifica riguardo l'ordinamento
# $ ./es35.sh D N | sort -rn | cut -d ':' -f 2

USAGE="usage: $0 dirname(abs) n"

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

expr "$2" + 0 1>/dev/null 2>&1
if [ $? -gt 1 -o "$2" -lt 0 ]; then
  echo "$USAGE"; 
  exit 1
fi

# Main body
list=$(find "$1" -type d -executable 2>/dev/null)
for item in $list; do
  nfiles=$(find "$item" -maxdepth 1 -type f -size +$2c | wc -l 2>/dev/null)
  if [ "$nfiles" -ge 1 ]; then
    echo "$nfiles":"$item"
  fi
done

exit 0