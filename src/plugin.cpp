#include "plugin.hpp"

Plugin *pluginInstance;

void init(Plugin *p) {
    pluginInstance = p;

    p->addModel(modelEuler);
    p->addModel(modelBezier);
    p->addModel(modelRich);
    p->addModel(modelTwinPeaks);
    p->addModel(modelResonators);
#ifndef METAMODULE
    p->addModel(modelBytebeat);
#endif
}
