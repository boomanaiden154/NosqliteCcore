#pragma once

#include<string>
#include<vector>

#include "document.h"
#include "jsonData.h"
#include "documentMetaData.h"

class Find: public documentMetaData {
public:
    using documentMetaData::documentMetaData;
    bool DoesMatch(document);
};
