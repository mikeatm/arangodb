////////////////////////////////////////////////////////////////////////////////
/// @brief action request handler
///
/// @file
///
/// DISCLAIMER
///
/// Copyright 2004-2014 triAGENS GmbH, Cologne, Germany
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
/// @author Dr. Frank Celler
/// @author Copyright 2010-2014, triAGENS GmbH, Cologne, Germany
////////////////////////////////////////////////////////////////////////////////

#ifndef TRIAGENS_ACTIONS_REST_ACTION_HANDLER_H
#define TRIAGENS_ACTIONS_REST_ACTION_HANDLER_H 1

#include "RestHandler/RestVocbaseBaseHandler.h"

#include "Actions/actions.h"

// -----------------------------------------------------------------------------
// --SECTION--                                              forward declarations
// -----------------------------------------------------------------------------

class TRI_action_t;

// -----------------------------------------------------------------------------
// --SECTION--                                                 RestActionHandler
// -----------------------------------------------------------------------------

namespace triagens {
  namespace arango {

////////////////////////////////////////////////////////////////////////////////
/// @brief action request handler
////////////////////////////////////////////////////////////////////////////////

    class RestActionHandler : public RestVocbaseBaseHandler {

// -----------------------------------------------------------------------------
// --SECTION--                                                      public types
// -----------------------------------------------------------------------------

      public:

////////////////////////////////////////////////////////////////////////////////
/// @brief constructor options
////////////////////////////////////////////////////////////////////////////////

        struct action_options_t {
          TRI_vocbase_t* _vocbase;
          std::string _queue;
          std::set<std::string> _contexts;
        };

// -----------------------------------------------------------------------------
// --SECTION--                                      constructors and destructors
// -----------------------------------------------------------------------------

      public:

////////////////////////////////////////////////////////////////////////////////
/// @brief constructor
////////////////////////////////////////////////////////////////////////////////

        RestActionHandler (rest::HttpRequest*,
                           action_options_t*);

// -----------------------------------------------------------------------------
// --SECTION--                                                   Handler methods
// -----------------------------------------------------------------------------

      public:


////////////////////////////////////////////////////////////////////////////////
/// {@inheritDoc}
////////////////////////////////////////////////////////////////////////////////

        bool isDirect ();

////////////////////////////////////////////////////////////////////////////////
/// {@inheritDoc}
////////////////////////////////////////////////////////////////////////////////

        string const& queue () const;

////////////////////////////////////////////////////////////////////////////////
/// {@inheritDoc}
////////////////////////////////////////////////////////////////////////////////

        status_t execute ();

// -----------------------------------------------------------------------------
// --SECTION--                                                   private methods
// -----------------------------------------------------------------------------

      private:

////////////////////////////////////////////////////////////////////////////////
/// @brief executes an action
////////////////////////////////////////////////////////////////////////////////

        TRI_action_result_t executeAction ();

// -----------------------------------------------------------------------------
// --SECTION--                                              proctected variables
// -----------------------------------------------------------------------------

      protected:

////////////////////////////////////////////////////////////////////////////////
/// @brief action
////////////////////////////////////////////////////////////////////////////////

        TRI_action_t* _action;

////////////////////////////////////////////////////////////////////////////////
/// @brief queue to use
////////////////////////////////////////////////////////////////////////////////

        std::string _queue;

////////////////////////////////////////////////////////////////////////////////
/// @brief action allowed in this context
////////////////////////////////////////////////////////////////////////////////

        bool _allowed;
    };
  }
}

#endif

// -----------------------------------------------------------------------------
// --SECTION--                                                       END-OF-FILE
// -----------------------------------------------------------------------------

// Local Variables:
// mode: outline-minor
// outline-regexp: "/// @brief\\|/// {@inheritDoc}\\|/// @addtogroup\\|/// @page\\|// --SECTION--\\|/// @\\}"
// End:
