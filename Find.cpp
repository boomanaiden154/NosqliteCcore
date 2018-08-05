#include "Find.h"

bool Find::DoesMatch(document thedocument)
{
    bool toreturn = true;
    for(int i = 0; i < propertyNames.size(); i++)
    {
        if(!thedocument.DoesPropetyEqual(propertyNames[i], propertyValues[i]))
        {
            toreturn = false;
        }
    }
    return toreturn;
}