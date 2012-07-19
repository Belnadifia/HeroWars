/*
HeroWars server for League of Legends 
Copyright (C) 2012  Intline9

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

title: authd Server
author: C0dR

*/


#ifndef _AUTHHANDLER_H
#define _AUTHHANDLER_H

#include "User.h"

//Dummy class
class IDatabase;

class AuthHandler
{
public:
	AuthHandler(Ptr<IDatabase> database);
	bool authentificate(char* usernasme, char* password, uint32 &sessionKey);
	bool userConnected(uint32 sessionHash);
	bool getUser(uint32 sessionHash, User** user);
	void removeUser(uint32 sessionHash);
private:
	vector<User*> _users;
	Ptr<IDatabase> _database;
};

#endif  //_AUTHHANDLER_H