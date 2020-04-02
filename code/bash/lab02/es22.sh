#!/bin/bash

echo '#!/bin/bash' > "$1"
echo "echo \"Hello World!\"" >> "$1"
echo "exit 0" >> "$1"

exit 0

