
cc=gcc
cflags = -W -g
target = main #variable setting

objects = main.o count.o print.o array.o

$(target) : $(objects)
        $(cc) $(cflags) -o $(target) $(objects)
#target :result of command, object : using for making target file

%.o : %.c
        $(cc) $(cflags) -c -o $@ $<

main.o count.o print.o array.o : count.h

.PHONY : clean #remove files
clean :
        rm $(target) $(objects)

