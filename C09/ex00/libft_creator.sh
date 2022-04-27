#remove previous builts
rm -f libft.a
#search and compite c files
find . -type f -name "*.c" -exec gcc -Wall -Werror -Wextra -c {} \;
#archive file into libft.a
ar -rc libft.a *.o
#delete compiled file (*.o)
find . -type f -name "*.o" -delete