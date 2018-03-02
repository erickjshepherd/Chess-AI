#ifndef Header1
#define Header1

#include <vector>

using namespace std;

struct Tile {

	int color; //color of piece
	int color_b; // color of board
	int weight; //piece worth
	char type; //type of piece
	int enpassant;
	int castle;
};

//Tile board[64];

int player_currentp;
int player_nextp;
int player_color_p;
int computer_color_p;
int checkmate_p;
int checkmate_c;
int computer_currentp;
int computer_nextp;
int extra_depth;
int moves_considered;
int extra_info;

char* conversion[] = { "a8" , "b8" , "c8" , "d8" , "e8" , "f8" , "g8" , "h8",
					   "a7" , "b7" , "c7" , "d7" , "e7" , "f7" , "g7" , "h7",
	                   "a6" , "b6" , "c6" , "d6" , "e6" , "f6" , "g6" , "h6", 
					   "a5" , "b5" , "c5" , "d5" , "e5" , "f5" , "g5" , "h5", 
	                   "a4" , "b4" , "c4" , "d4" , "e4" , "f4" , "g4" , "h4", 
	                   "a3" , "b3" , "c3" , "d3" , "e3" , "f3" , "g3" , "h3", 
	                   "a2" , "b2" , "c2" , "d2" , "e2" , "f2" , "g2" , "h2", 
	                   "a1" , "b1" , "c1" , "d1" , "e1" , "f1" , "g1" , "h1", };

struct chess_node { //node for board tree

	Tile new_board[64]; //boardstate
	
	int currentn; // store the move
	int nextn;
	int score;	
	int currentn_p; // store previous move
	int nextn_p; // store previous move

	Tile* parent;
	
	vector<chess_node> children;

};

#endif