all: chess_program

chess_program: Test_Class.o Game.o Board.o Square.o Side.o Move.o Player.o Human.o Computer.o Piece.o King.o Queen.o Rook.o Bishop.o Knight.o Pawn.o Default_Piece.o chess_program.o
	g++ -std=c++11 Test_Class.o Game.o Board.o Square.o Side.o Move.o Player.o Human.o Computer.o Piece.o King.o Queen.o Rook.o Bishop.o Knight.o Pawn.o chess_program.o Default_Piece.o -Wall -g -Wall -o chess_program

Test_Class.o: Test_Class.cpp Test_Class.h
	g++ -std=c++11 -c Test_Class.cpp -g -Wall -o Test_Class.o

Game.o: Game.cpp Game.h
	g++ -std=c++11 -c Game.cpp -g -Wall -o Game.o

Board.o: Board.cpp Board.h
	g++ -std=c++11 -c Board.cpp -g -Wall -o Board.o

Square.o: Square.cpp Square.h
	g++ -std=c++11 -c Square.cpp -g -Wall -o Square.o

Side.o: Side.cpp Side.h
	g++ -std=c++11 -c Side.cpp -g -Wall -o Side.o

Move.o: Move.cpp Move.h
	g++ -std=c++11 -c Move.cpp -g -Wall -o Move.o

Player.o: Player.cpp Player.h
	g++ -std=c++11 -c Player.cpp -g -Wall -o Player.o

Human.o: Human.cpp Human.h
	g++ -std=c++11 -c Human.cpp -g -Wall -o Human.o

Computer.o: Computer.cpp Computer.h
	g++ -std=c++11 -c Computer.cpp -g -Wall -o Computer.o

Piece.o: Piece.cpp Piece.h
	g++ -std=c++11 -c Piece.cpp -g -Wall -o Piece.o

King.o: King.cpp King.h
	g++ -std=c++11 -c King.cpp -g -Wall -o King.o

Queen.o: Queen.cpp Queen.h
	g++ -std=c++11 -c Queen.cpp -g -Wall -o Queen.o

Rook.o: Rook.cpp Rook.h
	g++ -std=c++11 -c Rook.cpp -g -Wall -o Rook.o

Bishop.o: Bishop.cpp Bishop.h
	g++ -std=c++11 -c Bishop.cpp -g -Wall -o Bishop.o

Knight.o: Knight.cpp Knight.h
	g++ -std=c++11 -c Knight.cpp -g -Wall -o Knight.o

Pawn.o: Pawn.cpp Pawn.h
	g++ -std=c++11 -c Pawn.cpp -g -Wall -o Pawn.o

Default_Piece.o: Default_Piece.cpp Default_Piece.h
	g++ -std=c++11 -c Default_Piece.cpp -g -Wall -o Default_Piece.o

chess_program.o: chess_program.cpp Test_Class.h Game.h GameStatus.h Board.h Square.h Colour.h Side.h Move.h Player.h Human.h Computer.h PieceType.h Piece.h King.h Queen.h Rook.h Bishop.h Knight.h Pawn.h Default_Piece.h
	g++ -std=c++11 -c chess_program.cpp -g -Wall -o chess_program.o

clean:
	rm -f *.o chess_program
