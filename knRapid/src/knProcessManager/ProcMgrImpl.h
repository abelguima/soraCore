/* -*- C++ -*- *****************************************************************
 * Copyright (c) 2013 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

******************************************************************************/
#ifndef kn_ProcMgrImpl_h
#define kn_ProcMgrImpl_h

#include "knProcessManager_Export.h"

#include "rapidCommanding/CommandImpl.h"

namespace kn
{
  class ProcessManagerSvc;

  class knProcessManager_Export ProcMgrImpl : public rapid::CommandImpl
  {
  public:
    ProcMgrImpl(ProcessManagerSvc * procMgrSvc);
    virtual ~ProcMgrImpl() throw();

    virtual FuturePtr execute(rapid::Command const& cmd);

  protected:
    static rapid::SubsystemType const * typeDescription();

  private:
    ProcessManagerSvc * m_procMgrSvc;
  };
}
#endif // kn_ProcMgrImpl_h
