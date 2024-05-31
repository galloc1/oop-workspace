q1: main-1.cpp Cell.h Effect.h Utils.h
	g++ main-1.cpp Cell.h Effect.h Utils.h -o q1

q2: main-2.cpp Cell.h Effect.h Utils.h Trap.h Character.h
	g++ main-2.cpp Cell.h Effect.h Utils.h Trap.h Character.h -o q2

q3: main-3.cpp Cell.h Effect.h Utils.h Trap.h Character.h Game.h
	g++ main-3.cpp Cell.h Effect.h Utils.h Trap.h Character.h Game.h -o q3