
#ifndef OPUSTOOLSCONVERSIONOPTIONS_H
#define OPUSTOOLSCONVERSIONOPTIONS_H

#include "../../core/conversionoptions.h"

class OpusToolsConversionOptions : public ConversionOptions
{
public:
    OpusToolsConversionOptions();
    ~OpusToolsConversionOptions();

    bool equals( ConversionOptions *_other );
    QDomElement toXml( QDomDocument document ) const;
    bool fromXml( QDomElement conversionOptions, QList<QDomElement> *filterOptionsElements = 0 );

    ConversionOptions* copy() const;

    struct Data {
        float floatBitrate;
    } data;
};

#endif // OPUSTOOLSCONVERSIONOPTIONS_H