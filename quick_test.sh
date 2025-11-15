#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'
BOLD=$(tput bold)
NORMAL=$(tput sgr0)

echo "=====| test start |====="
echo "==> do full cleanup"
make fclean

echo "==> rebuild project"
make

echo -e "${GREEN}${BOLD}==> run test cases${NC}${NORMAL}"

echo -e "${GREEN}${BOLD}TC01 - all valid params${NC}${NORMAL}"
./push_swap 3 -1 0 35 400 | while IFS= read -r line; do
    echo -e "${GREEN}${BOLD}${line}${NC}${NORMAL}";
done
echo

echo "==> do full cleanup"
make fclean

echo "=====|  test end  |====="