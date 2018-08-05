#include "Update.h"

void Update::UpdateDocument(document *documentReference)
{
    for(int i = 0; i < propertyNames.size(); i++)
    {
        documentReference->data[propertyNames[i]] = propertyValues[i];
    }
}