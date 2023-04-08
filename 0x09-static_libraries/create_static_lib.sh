#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c _.c
ar rc liball.a _.o
