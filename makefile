q1: main-1.cpp GameEntity.h Effect.h Utils.h
	g++ main-1.cpp GameEntity.h Effect.h Utils.h -o q1

q2: main-2.cpp GameEntity.h Effect.h Utils.h Explosion.h Mine.h Ship.h
	g++ main-2.cpp GameEntity.h Effect.h Utils.h Explosion.h Mine.h Ship.h -o q2

q3: main-3.cpp GameEntity.h Effect.h Utils.h Explosion.h Mine.h Ship.h Game.h
	g++ main-3.cpp GameEntity.h Effect.h Utils.h Explosion.h Mine.h Ship.h Game.h -o q3