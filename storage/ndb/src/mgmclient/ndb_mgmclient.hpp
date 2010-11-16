/*
   Copyright (C) 2003 MySQL AB
    All rights reserved. Use is subject to license terms.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 of the License.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
*/

#ifndef Ndb_mgmclient_hpp
#define Ndb_mgmclient_hpp

class CommandInterpreter;
class Ndb_mgmclient
{
public:
  Ndb_mgmclient(const char*,int verbose=0);
  ~Ndb_mgmclient();
  bool execute(const char *line, int try_reconnect = -1,
               bool interactive = true, int *error = NULL);
private:
  CommandInterpreter *m_cmd;
};

#endif // Ndb_mgmclient_hpp
