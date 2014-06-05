////////////////////////////////////////////////////////////////////////////////
/// @brief single-server state
///
/// @file
///
/// DISCLAIMER
///
/// Copyright 2010-2012 triagens GmbH, Cologne, Germany
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
///     http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
///
/// Copyright holder is triAGENS GmbH, Cologne, Germany
///
/// @author Jan Steemann
/// @author Copyright 2013, triagens GmbH, Cologne, Germany
////////////////////////////////////////////////////////////////////////////////

#ifndef TRIAGENS_SHARDING_SERVER_STATE_H
#define TRIAGENS_SHARDING_SERVER_STATE_H 1

#include "Basics/Common.h"
#include "Basics/ReadWriteLock.h"

namespace triagens {
  namespace arango {

// -----------------------------------------------------------------------------
// --SECTION--                                                       ServerState
// -----------------------------------------------------------------------------

    class ServerState {

// -----------------------------------------------------------------------------
// --SECTION--                                                      public types
// -----------------------------------------------------------------------------

      public:

////////////////////////////////////////////////////////////////////////////////
/// @brief an enum describing the roles a server can have 
////////////////////////////////////////////////////////////////////////////////

        typedef enum {
          ROLE_UNDEFINED = 0,  // initial value
          ROLE_PRIMARY,
          ROLE_SECONDARY,
          ROLE_COORDINATOR
        }
        RoleEnum;

////////////////////////////////////////////////////////////////////////////////
/// @brief an enum describing the possible states a server can have 
////////////////////////////////////////////////////////////////////////////////

        typedef enum {
          STATE_UNDEFINED = 0,         // initial value
          STATE_STARTUP,               // used by all roles
          STATE_SERVINGASYNC,          // primary only
          STATE_SERVINGSYNC,           // primary only
          STATE_STOPPING,              // primary only
          STATE_STOPPED,               // primary only 
          STATE_SYNCING,               // secondary only
          STATE_INSYNC,                // secondary only
          STATE_LOSTPRIMARY,           // secondary only
          STATE_SERVING,               // coordinator only
          STATE_SHUTDOWN               // used by all roles
        }
        StateEnum; 

// -----------------------------------------------------------------------------
// --SECTION--                                        constructors / destructors
// -----------------------------------------------------------------------------
      
      public:

////////////////////////////////////////////////////////////////////////////////
/// @brief constructor
////////////////////////////////////////////////////////////////////////////////

        ServerState ();

////////////////////////////////////////////////////////////////////////////////
/// @brief destructor
////////////////////////////////////////////////////////////////////////////////

        ~ServerState ();

// -----------------------------------------------------------------------------
// --SECTION--                                             public static methods
// -----------------------------------------------------------------------------

      public:

////////////////////////////////////////////////////////////////////////////////
/// @brief create the (sole) instance
////////////////////////////////////////////////////////////////////////////////

        static ServerState* instance ();

////////////////////////////////////////////////////////////////////////////////
/// @brief initialise function to call once when still single-threaded
////////////////////////////////////////////////////////////////////////////////
        
        static void initialise ();

////////////////////////////////////////////////////////////////////////////////
/// @brief cleanup function to call once when shutting down
////////////////////////////////////////////////////////////////////////////////
        
        static void cleanup ();

////////////////////////////////////////////////////////////////////////////////
/// @brief get the string representation of a role
////////////////////////////////////////////////////////////////////////////////
        
        static std::string roleToString (RoleEnum);

////////////////////////////////////////////////////////////////////////////////
/// @brief convert a string to a role
////////////////////////////////////////////////////////////////////////////////
        
        static RoleEnum stringToRole (std::string const&);

////////////////////////////////////////////////////////////////////////////////
/// @brief get the string representation of a state
////////////////////////////////////////////////////////////////////////////////

        static std::string stateToString (StateEnum);

////////////////////////////////////////////////////////////////////////////////
/// @brief convert a string representation to a state
////////////////////////////////////////////////////////////////////////////////

        static StateEnum stringToState (std::string const&);

// -----------------------------------------------------------------------------
// --SECTION--                                                    public methods
// -----------------------------------------------------------------------------

      public:

////////////////////////////////////////////////////////////////////////////////
/// @brief sets the initialised flag
////////////////////////////////////////////////////////////////////////////////

        void setInitialised () {
          _initialised = true;
        }

////////////////////////////////////////////////////////////////////////////////
/// @brief whether or not the cluster was properly initialised
////////////////////////////////////////////////////////////////////////////////

        bool initialised () const {
          return _initialised;
        }

////////////////////////////////////////////////////////////////////////////////
/// @brief set the authentication data for cluster-internal communication
////////////////////////////////////////////////////////////////////////////////

        void setAuthentication (std::string const&,
                                std::string const&);

////////////////////////////////////////////////////////////////////////////////
/// @brief get the authentication data for cluster-internal communication
////////////////////////////////////////////////////////////////////////////////

        std::string getAuthentication ();

////////////////////////////////////////////////////////////////////////////////
/// @brief flush the server state (used for testing)
////////////////////////////////////////////////////////////////////////////////

        void flush ();

////////////////////////////////////////////////////////////////////////////////
/// @brief check whether the server is a coordinator
////////////////////////////////////////////////////////////////////////////////

        bool isCoordinator ();

////////////////////////////////////////////////////////////////////////////////
/// @brief check whether the server is a DB server (primary or secondory)
/// running in cluster mode.
////////////////////////////////////////////////////////////////////////////////

        bool isDBserver ();

////////////////////////////////////////////////////////////////////////////////
/// @brief check whether the server is running in a cluster
////////////////////////////////////////////////////////////////////////////////

        bool isRunningInCluster ();

////////////////////////////////////////////////////////////////////////////////
/// @brief get the server role
////////////////////////////////////////////////////////////////////////////////

        RoleEnum getRole ();

////////////////////////////////////////////////////////////////////////////////
/// @brief set the server role
////////////////////////////////////////////////////////////////////////////////
        
        void setRole (RoleEnum);

////////////////////////////////////////////////////////////////////////////////
/// @brief get the server id
////////////////////////////////////////////////////////////////////////////////

        std::string getId ();

////////////////////////////////////////////////////////////////////////////////
/// @brief set the server id
////////////////////////////////////////////////////////////////////////////////

        void setId (std::string const&);

////////////////////////////////////////////////////////////////////////////////
/// @brief get the server address
////////////////////////////////////////////////////////////////////////////////

        std::string getAddress ();

////////////////////////////////////////////////////////////////////////////////
/// @brief set the server address
////////////////////////////////////////////////////////////////////////////////

        void setAddress (std::string const&);

////////////////////////////////////////////////////////////////////////////////
/// @brief get the current state
////////////////////////////////////////////////////////////////////////////////

        StateEnum getState ();

////////////////////////////////////////////////////////////////////////////////
/// @brief set the current state
////////////////////////////////////////////////////////////////////////////////
        
        void setState (StateEnum);

////////////////////////////////////////////////////////////////////////////////
/// @brief gets the data path
////////////////////////////////////////////////////////////////////////////////
        
        std::string getDataPath ();

////////////////////////////////////////////////////////////////////////////////
/// @brief sets the data path
////////////////////////////////////////////////////////////////////////////////
        
        void setDataPath (const std::string&);

////////////////////////////////////////////////////////////////////////////////
/// @brief gets the log path
////////////////////////////////////////////////////////////////////////////////
        
        std::string getLogPath ();

////////////////////////////////////////////////////////////////////////////////
/// @brief sets the log path
////////////////////////////////////////////////////////////////////////////////
        
        void setLogPath (const std::string&);

////////////////////////////////////////////////////////////////////////////////
/// @brief gets the agent path
////////////////////////////////////////////////////////////////////////////////
        
        std::string getAgentPath ();

////////////////////////////////////////////////////////////////////////////////
/// @brief sets the data path
////////////////////////////////////////////////////////////////////////////////
        
        void setAgentPath (const std::string&);

////////////////////////////////////////////////////////////////////////////////
/// @brief gets the arangod path
////////////////////////////////////////////////////////////////////////////////
        
        std::string getArangodPath ();

////////////////////////////////////////////////////////////////////////////////
/// @brief sets the arangod path
////////////////////////////////////////////////////////////////////////////////
        
        void setArangodPath (const std::string&);

////////////////////////////////////////////////////////////////////////////////
/// @brief gets the DBserver config
////////////////////////////////////////////////////////////////////////////////
        
        std::string getDBserverConfig ();

////////////////////////////////////////////////////////////////////////////////
/// @brief sets the DBserver config
////////////////////////////////////////////////////////////////////////////////
        
        void setDBserverConfig (const std::string&);

////////////////////////////////////////////////////////////////////////////////
/// @brief gets the coordinator config
////////////////////////////////////////////////////////////////////////////////
        
        std::string getCoordinatorConfig ();

////////////////////////////////////////////////////////////////////////////////
/// @brief sets the coordinator config
////////////////////////////////////////////////////////////////////////////////
        
        void setCoordinatorConfig (const std::string&);

////////////////////////////////////////////////////////////////////////////////
/// @brief gets the JavaScript startup path
////////////////////////////////////////////////////////////////////////////////
        
        std::string getJavaScriptPath ();

////////////////////////////////////////////////////////////////////////////////
/// @brief sets the JavaScript startup path
////////////////////////////////////////////////////////////////////////////////
        
        void setJavaScriptPath (const std::string&);

////////////////////////////////////////////////////////////////////////////////
/// @brief gets the disable dispatcher frontend flag
////////////////////////////////////////////////////////////////////////////////
        
        bool getDisableDispatcherFrontend ();

////////////////////////////////////////////////////////////////////////////////
/// @brief sets the disable dispatcher frontend flag
////////////////////////////////////////////////////////////////////////////////
        
        void setDisableDispatcherFrontend (bool);

////////////////////////////////////////////////////////////////////////////////
/// @brief gets the disable dispatcher kickstarter flag
////////////////////////////////////////////////////////////////////////////////
        
        bool getDisableDispatcherKickstarter ();

////////////////////////////////////////////////////////////////////////////////
/// @brief sets the disable dispatcher kickstarter flag
////////////////////////////////////////////////////////////////////////////////
        
        void setDisableDispatcherKickstarter (bool);

// -----------------------------------------------------------------------------
// --SECTION--                                                   private methods
// -----------------------------------------------------------------------------

      private:

////////////////////////////////////////////////////////////////////////////////
/// @brief determine the server role
////////////////////////////////////////////////////////////////////////////////

        RoleEnum determineRole (std::string const&);

////////////////////////////////////////////////////////////////////////////////
/// @brief lookup the server role by scanning Plan/Coordinators for our id
////////////////////////////////////////////////////////////////////////////////
  
        ServerState::RoleEnum checkCoordinatorsList (std::string const&);

////////////////////////////////////////////////////////////////////////////////
/// @brief lookup the server role by scanning Plan/DBServers for our id
////////////////////////////////////////////////////////////////////////////////

        ServerState::RoleEnum checkServersList (std::string const&);

////////////////////////////////////////////////////////////////////////////////
/// @brief validate a state transition for a primary server
////////////////////////////////////////////////////////////////////////////////

        bool checkPrimaryState (StateEnum);

////////////////////////////////////////////////////////////////////////////////
/// @brief validate a state transition for a secondary server
////////////////////////////////////////////////////////////////////////////////

        bool checkSecondaryState (StateEnum);

////////////////////////////////////////////////////////////////////////////////
/// @brief validate a state transition for a coordinator server
////////////////////////////////////////////////////////////////////////////////

        bool checkCoordinatorState (StateEnum);

// -----------------------------------------------------------------------------
// --SECTION--                                                 private variables
// -----------------------------------------------------------------------------

      private:

////////////////////////////////////////////////////////////////////////////////
/// @brief the pointer to the singleton instance
////////////////////////////////////////////////////////////////////////////////

        static ServerState* _theinstance;

////////////////////////////////////////////////////////////////////////////////
/// @brief the server's id, can be set just once
////////////////////////////////////////////////////////////////////////////////

        std::string _id;

////////////////////////////////////////////////////////////////////////////////
/// @brief the data path, can be set just once
////////////////////////////////////////////////////////////////////////////////

        std::string _dataPath;

////////////////////////////////////////////////////////////////////////////////
/// @brief the log path, can be set just once
////////////////////////////////////////////////////////////////////////////////

        std::string _logPath;

////////////////////////////////////////////////////////////////////////////////
/// @brief the agent path, can be set just once
////////////////////////////////////////////////////////////////////////////////

        std::string _agentPath;

////////////////////////////////////////////////////////////////////////////////
/// @brief the arangod path, can be set just once
////////////////////////////////////////////////////////////////////////////////

        std::string _arangodPath;

////////////////////////////////////////////////////////////////////////////////
/// @brief the JavaScript startup path, can be set just once
////////////////////////////////////////////////////////////////////////////////

        std::string _javaScriptStartupPath;

////////////////////////////////////////////////////////////////////////////////
/// @brief the DBserver config, can be set just once
////////////////////////////////////////////////////////////////////////////////

        std::string _dbserverConfig;

////////////////////////////////////////////////////////////////////////////////
/// @brief the coordinator config, can be set just once
////////////////////////////////////////////////////////////////////////////////

        std::string _coordinatorConfig;

////////////////////////////////////////////////////////////////////////////////
/// @brief the disable dispatcher frontend flag, can be set just once
////////////////////////////////////////////////////////////////////////////////

        bool _disableDispatcherFrontend;

////////////////////////////////////////////////////////////////////////////////
/// @brief the disable dispatcher kickstarter flag, can be set just once
////////////////////////////////////////////////////////////////////////////////

        bool _disableDispatcherKickstarter;

////////////////////////////////////////////////////////////////////////////////
/// @brief the server's own address, can be set just once
////////////////////////////////////////////////////////////////////////////////

        std::string _address;

////////////////////////////////////////////////////////////////////////////////
/// @brief the authentication data used for cluster-internal communication
////////////////////////////////////////////////////////////////////////////////

        std::string _authentication;

////////////////////////////////////////////////////////////////////////////////
/// @brief r/w lock for state
////////////////////////////////////////////////////////////////////////////////
      
        triagens::basics::ReadWriteLock _lock;

////////////////////////////////////////////////////////////////////////////////
/// @brief the server role
////////////////////////////////////////////////////////////////////////////////

        RoleEnum _role;

////////////////////////////////////////////////////////////////////////////////
/// @brief the current state
////////////////////////////////////////////////////////////////////////////////

        StateEnum _state;

////////////////////////////////////////////////////////////////////////////////
/// @brief whether or not the cluster was initialised
////////////////////////////////////////////////////////////////////////////////

        bool _initialised;
    };
  }
}

#endif

// -----------------------------------------------------------------------------
// --SECTION--                                                       END-OF-FILE
// -----------------------------------------------------------------------------

// Local Variables:
// mode: outline-minor
// outline-regexp: "^\\(/// @brief\\|/// {@inheritDoc}\\|/// @addtogroup\\|// --SECTION--\\|/// @\\}\\)"
// End:

