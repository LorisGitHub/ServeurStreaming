include = -I/include/

server: obj/Player.o obj/PlayerI.o obj/Server.o
	g++ $^ -o $@ $(include) -lIce -pthread -lvlc

obj/Player.o: src/Player.cpp include/Player.h
	g++ $< -o $@ $(include) -c

obj/PlayerI.o: src/PlayerI.cpp include/PlayerI.h
	g++ $< -o $@ $(include) -c

obj/Server.o: src/Server.cpp
	g++ $< -o $@ $(include) -c

clean:
	rm obj/*.o