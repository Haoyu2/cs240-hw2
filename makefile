
client-debug = client-debug.exe 
client-ag = client-ag.exe 

all : $(client-ag)
	./$<

test : debug
	@rm -rf $(client-debug)

debug : $(client-debug)
	./$(client-debug)

$(client-debug) : client.c hw2.c 
	@gcc -o $@ $^

$(client-ag) : client.c hw2.c 
	@gcc -o $@ $^ -D AUTOGRADER
