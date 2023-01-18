//  ***************************************************************************
//  *
//  *    main-1-2.cpp -- Driver file for team object
//  *    Author: Wade Shiell
//  *
//  ***************************************************************************

#include <iostream>
#include <string>
#include <iomanip>
#include "team.h"
using namespace std;

team * createTeam( int teamNumber, string teamName );
player * createPlayer( int playerNumber, string playerName);
void numberTeams();
void numberPlayers();
void teamStats( team * teamName );
void playerStats( player * playerName );
void addPlayer( player * playerName, team * teamName );
void deleteTeam( team * teamName );

int main()
{
  int choice;
  int league_number;
  int number_of_team = 0;

  cout << "Enter number of teams in league: " << endl;
  cin >> league_number;

  if ( league_number != 0 ) {
  
    team **teamList = new team*[league_number];

    for ( int i = 0; i < league_number; i++ ) {
      teamList[i] = new team( 0, "" );
    }

    team::team_ID = 0;

    cout << "Press 1 to create a team, 0 to finish:" << endl;
    cin >> choice;

    while ( choice != 0 ) {
      int max_players;
      string nameOfTeam;
    
      cout << "Enter max number of players: " << endl;
      cin >> max_players;

      cout << "Enter name of team: " << endl;
      cin.ignore();
      getline ( cin, nameOfTeam );
    
      teamList[number_of_team] = createTeam( max_players, nameOfTeam );
      number_of_team++;

      if ( number_of_team < league_number ) {
	cout << "Press 1 to create a team, 0 to finish:" << endl;
	cin >> choice;
      }
      else {
	choice = 0;
      }
    }

    if ( team::team_ID != 0 ) {
      cout << "Select number of team to add player to:" << endl;
      cin >> number_of_team;
      number_of_team--;
  
      cout << "Press 1 to create a player, 0 to finish:" << endl;
      cin >> choice;

      while ( choice != 0 ) {
	int playerNumber;
	string nameOfPlayer;
	player * tempPlayer;
    
	cout << "Enter jersey number of player: " << endl;
	cin >> playerNumber;
	cout << "Enter name of player: " << endl;
	cin.ignore();
	getline( cin, nameOfPlayer );
    
	tempPlayer = createPlayer( playerNumber, nameOfPlayer );

	teamList[number_of_team]->add_player( *tempPlayer );

	if ( teamList[number_of_team]->get_current_number_of_players()
	     != teamList[number_of_team]->get_max_players() ) {
	  cout << "Press 1 to create a player, 0 to finish:" << endl;
	  cin >> choice;
	}
	else {
	  choice = 0;
	}
      }
    }

    delete[] teamList;
  }
}

team * createTeam( int teamNumber, string teamName )
{
  return new team( teamNumber, teamName );
}

player * createPlayer( int playerNumber, string playerName)
{
  return new player( playerNumber, playerName );
}

void numberTeams()
{
  cout << "Number of teams: " << team::get_teamID() << endl;
}

void numberPlayers()
{
  cout << "Number of players: " << player::get_playerID() << endl;
}

void teamStats( team * teamName )
{
  cout << "Team Name: " << teamName->get_name()
       << "Number of players: " << teamName->get_current_number_of_players() << endl;
  cout << "Max size: " << teamName->get_max_players() << endl;
}

void playerStats( player * playerName )
{
  cout << "Player jersey number: " << playerName->get_jersey_number()
       << "Player Name: " << playerName->get_name();
}

void addPlayer( player * playerName, team * teamName )
{
  cout << "Add player to " << teamName->get_name() << endl;
  teamName->add_player( *playerName );
}

void deleteTeam( team * teamName )
{
  cout << "\nDelete team object: " << endl;
  teamName->~team();
}

// *********************************************************************************

//int main()
//{
// team team1( 10, "Adelaide Atoms" );
//  player player1( 10, "Adam Atom" );
//  player player2( 11, "Alan Atom" );  
//  cout << team1.get_max_players() << endl;
// cout << team1.add_player( player1 ) << endl;
// cout << team1.add_player( player2 ) << endl;
// cout << (team1.get_roster())[2]->get_jersey_number() << endl;
// cout << (team1.get_roster())[0]->get_name() << endl;    
// for ( int i = 0; i < 10; i++ ) {
//   cout << (team1.get_roster())[i]->get_name() << endl;
//   cout << (team1.get_roster())[i]->get_jersey_number() << endl;
//}
