#ifndef UTILMODULE_H
#define UTILMODULE_H

#include <QObject>

#include <src/nodemodule.h>
#include <src/modules/basemodule.h>
#include "src/engine/enginecontext.h"

class UtilModule : public BaseModule
{
    Q_OBJECT
public:
    explicit UtilModule(EngineContext* ctx);
};

#endif // UTILMODULE_H