all:server

server:server.c
	gcc server.c -o server	-L/usr/lib/x86_64-linux-gnu -lmysqlclient

clean:
	rm *.o server

.PHONY:clean
