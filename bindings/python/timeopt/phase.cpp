#include "timeopt/bindings/python/timeopt/expose-phase.hpp"
#include "timeopt/bindings/python/timeopt/phase.hpp"


  namespace timeopt{
        namespace python
        {
            void exposePhaseInfo()
            {
                PhasePythonVisitor<timeopt::PhaseInfo>::expose("phase");
            }
        }
    }

