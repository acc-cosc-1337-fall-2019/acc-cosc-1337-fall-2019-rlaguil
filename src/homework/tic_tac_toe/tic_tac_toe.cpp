//cpp
#include<iostream>
#include "tic_tac_toe.h"

using std::cout;

bool TicTacToe::game_over()
{
	if (check_column_win() || check_row_win() ||
		check_diagonal_win() || check_board_full()) 
	{
		return true;
	}

	return false;
}

void TicTacToe::start_game(string player)
{
	next_player = player;
	clear_board();
}

/*
Remember position is what user sees.
When you save position to vector subtract 1 from position
*/
void TicTacToe::mark_board(int position)
{
	pegs[position - 1] = next_player;
	set_next_player();
}

string TicTacToe::get_player() const
{
	return next_player;
}

ostream& operator<<(ostream& out, const TicTacToe& t)
{
	
	for (std::size_t i = 0; i < 9; i += 3)
	{
		out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2]<<'\n';
	}

	return out;
}

istream& operator>>(istream& in, TicTacToe& t)
{
	int position;

	std::cout << "Enter position from 1 to 9: ";
	in >> position;
	t.mark_board(position);

	return in;
}

void TicTacToe::set_next_player()
{
	if (next_player == "X") 
	{
		next_player = "O";
	}
	else 
	{
		next_player = "X";
	}
}

bool TicTacToe::check_column_win()
{
	for (std::size_t i = 0; i < 3; i++) 
	{
		if (pegs[i] == pegs[i + 3] && pegs[i + 3] == pegs[i + 6]
			&& pegs[i + 6] != " ")
		{
			return true;
		}
	}

	return false;
}

bool TicTacToe::check_row_win()
{
	for (std::size_t i = 0; i < 9; i += 3) 
	{
		if(pegs[i] == pegs[i+1] && pegs [i+1] == pegs[i+2] && pegs[i] != " ")
		{
			return true;
		}
	}

	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if(pegs[0] == pegs[4] && pegs[4] == pegs[8] && pegs[0] != " " ||
	   pegs[2] == pegs[4] && pegs[4] == pegs[6] && pegs[2] != " ")
	{
		return true;
	}

	return false;
}

void TicTacToe::clear_board()
{
	for(auto& peg: pegs)
	{
		peg = " ";
	}
}

bool TicTacToe::check_board_full()
{
	for(auto peg: pegs)
	{
		if(peg == " ")
		{
			return false;
		}
	}

	return true;
}
