#pragma once

#include "documentMetaData.h"
#include "document.h"

class Update: public documentMetaData {
public:
    using documentMetaData::documentMetaData;
    void UpdateDocument(document*);
};