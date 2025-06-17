CC = gcc
CFLAGS = -Iinclude

OBJ = main.o player.o enemy_ai.o combat.o

all: rpg

rpg: $(OBJ)
	$(CC) -o rpg $(OBJ)

main.o: main.c
	$(CC) -c main.c $(CFLAGS)

player.o: player.c
	$(CC) -c player.c $(CFLAGS)

enemy_ai.o: enemy_ai.c
	$(CC) -c enemy_ai.c $(CFLAGS)

combat.o: combat.c
	$(CC) -c combat.c $(CFLAGS)

clean:
	del *.o rpg.exe
